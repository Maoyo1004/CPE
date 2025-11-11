#include<iostream>
#include<string>
using namespace std ;

int deter( string a, int record = 0 ) {
    int b = 0 ;
    for ( int i = 0 ; i < a.size() ; ++i ) {
        b += a[ i ] - '0' ;
    }
    ++record ;
    if ( b < 9 ) {
        return -1 ;
    } else if ( b == 9 ) {
        return record ;
    } else {  
        return deter( to_string( b ), record ) ;
    }
}

int main () {
    string a ;
    while ( cin >> a, a != "0" ) {
        int d = deter( a ) ;
        if ( d >= 0 ) {
            cout << a << " is a multiple of 9 and has 9-degree " <<  d << ".\n" ;
        } else {
            cout << a << " is not a multiple of 9.\n" ;
        }
    }
}
