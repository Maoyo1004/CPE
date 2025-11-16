#include<iostream>
using namespace std ;

int cal( int N ) {
    int a = N ;
    while ( N >= 3 ) {
        a += N/3 ;
        N = N/3 + N%3 ;
    }
    if ( N == 2 ) {
        ++a ;
    }
    return a ;
}

int main() {
    int n ;
    while ( cin >> n ) {
        cout << cal( n ) << "\n" ;
    }
}
