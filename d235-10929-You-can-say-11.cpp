#include<iostream>
#include<string>
#include<vector>
using namespace std ;

void cal( string a ) {
    string b = a ;
    int sum_1 = 0, sum_2 = 0 ;
    for ( int i = 0 ; i < b.size() ; i += 2 ) {
        sum_1 += b[ i ] ;
        if ( i + 1 < b.size() ) {
            sum_2 += b[ i + 1 ] ;
        }
    }
    if ( ( sum_1 - sum_2 )%11 == 0 ) {
        cout << b << " is a multiple of 11.\n" ; 
    } else {
        cout << b << " is not a multiple of 11.\n" ; 
    }
}

int main () {
    string a ;
    while ( cin >> a ) {
        if ( a == "0" ) {
            return 0 ; 
        }
        cal( a ) ;
    }
}
