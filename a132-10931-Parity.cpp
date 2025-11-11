#include<iostream>
#include<deque>
using namespace std ;

void cal( int a ) {
    deque<int> b ;
    int rec ;
    int sum = 0 ;
    while ( a >= 1 ) {
        rec = a%2 ;
        a /= 2 ;
        b.push_front( rec ) ;
    }
    for ( int i = 0 ; i < b.size() ; ++i ) {
        if ( b[ i ] == 1 ) {
            sum += 1 ;
        }
    }
    cout << "The parity of " ;
    for ( int i = 0 ; i < b.size() ; ++i ) {
        cout << b[ i ] ;
    }
    cout << " is " << sum << " (mod 2).\n" ;
}

int main () {
    int a ;
    while ( cin >> a , a > 0 ) {
        cal( a ) ;
    }
}
