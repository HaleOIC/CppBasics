/**
 * string s = "word";
 * string p1 = s + s[s.size() - 1] == "s" ? "" : "S";
 * 后面无法通过编译需要加括号
 * string p1 = s + (s[s.size() - 1] == "s" ? "" : "S");
 /