#include<iostream>
using namespace std ;

int cal( long long a ) {
    int rec = 1 ;
    while ( a != 1 ) {
        if ( a%2 == 0 ) {
            a /= 2 ;
        } else {
            a = 3*a + 1 ;
        }
        ++rec ;
    }
    return rec ;
}

int compare( long long a, long long b ) {
    long long max = 0 ;
    for ( long long i = a ; i <= b ; ++i ) {
        if ( cal( i ) > max ) {
            max = cal( i ) ;
        }
    }
    return max ;
}

int main() {
    long long a, b ;
    while ( cin >> a >> b ) {
        long long c = a, d = b ;
        if ( a > b ) {
            swap( a, b ) ;
        }
        cout << c << " " << d << " " << compare( a, b ) << "\n" ;
    }
}
