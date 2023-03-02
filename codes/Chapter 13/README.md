# Chapter 13. Copy Control
## Exercise 13.1:
| What is a copy constructor? When is it used?

A copy constructor is a constructor which first parameter is a reference to the class type and any additional parameters have default values.

When copy initialization happens and that copy initialization requires either the copy constructor or the move constructor.

- Define variables using an =
- Pass an object as an argument to a parameter of nonreference type
- Return an object from a function that has a nonreference return type
- Brace initialize the elements in an array or the members of an aggregate class
- some class types also use copy initialization for the objects they allocate.

## Exercise 13.2:
if the declaration like that, the call would never succeed to call the counstructor.
`Sales_data rhs` is an argument to a parameter, thus, we'd need to use the copy constructor to copy the argument,
but to copy the argument, we'd need to call the copy constructor, and so on indefinitely.

## Exercise 13.3:

when we copy a StrBlob, the `shared_ptr` member's `use_count` add one.

when we copy a StrBlobPrts, the `weak_ptr` member's `use_count` isn't changed.(cause the count belongs to `shared_ptr`)

## Exercise 13.4:

1. `Point foo_bar(Point arg)`
2. `Point local = arg`
3. `*heap = new Point(global);` 
4. `Point pa[4] = {local, *heap};`
5. `return *heap`

## Exercise 13.6:
The copy-assignment operator is function named operator= and takes an argument of the same type as the class.
This operator is used when assignment occurred.

## Exercise 13.7:
shallow copy will happen, All pointers point to the same address, the `use_count` will change the same as 13.3


