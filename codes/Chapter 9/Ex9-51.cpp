#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Date{
private:
    string _str;
    unsigned _date = 1;
    unsigned _month = 1;
    unsigned _year = 1900;

public:
    Date() = default;
    Date( const string& s, const int& year ){
        _year = year;
        char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int pos = s.find_first_of( nums );
        _month = confirmMonth( s.substr( 0, pos - 1 ));
        _date = stoi( s.substr( s.find_first_of( nums ) , s.find_last_of ( nums ) - s.find_first_of( nums ) + 1 ) );
        cout << _year << " " << _month << " " << _date << endl;
    } 
    explicit Date( const string& s ){
        if ( (int)s.find('/') != -1 ){
            _date = stoi( s.substr(0, s.find('/')  ) );
            _month = stoi( s.substr( s.find('/') + 1  ,s.rfind('/') - s.find('/') - 1 ) );
            _year = stoi( s.substr( s.rfind('/') + 1 ) );
        }else{
            _month = confirmMonth( s.substr( 0, s.find( ' ' )));
            _date = stoi( s.substr( s.find(' ') + 1, s.find_last_of(' ') - s.find_first_of(' ') + 1 ));
            _year = stoi( s.substr( s.find_last_of(' ') + 1  ) );
        }
        cout << _year << " " << _month << " " << _date << endl; 
    }
    Date ( const string& month, const int& date, const int& year ){
        _month = confirmMonth( month );
        _date = date;
        _year = year;
        cout << _year << " " << _month << " "<< _date << endl;
    }
    Date ( const int& month, const int& date, const int& year ){
        _month = month;
        _date = date;
        _year = year;
        cout << _year << " " << _month << " "<< _date << endl;
    }
    int confirmMonth( const string& s ){
        vector<string> months{ "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
        int pos = 0;
        for ( auto i = 0; i < (int)months.size(); ++i ) 
            if ( (int)s.find( months[i] ) != -1 ) {
                pos = i + 1;
                break;
            }
        return pos; 
    }
};


int main( ){
    Date date1("October 7", 2022);
    Date date2("29/10/2022");
    Date date3("September 27 2022");
    Date date4( "July", 4, 2022);
    Date date5( 5, 4, 2022);
    return 0;
}