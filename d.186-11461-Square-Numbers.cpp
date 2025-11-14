#include<iostream>
#include<cmath>
using namespace std ;

void deter( int a, int b ) {
    int re = 0 ;
    int temp = sqrt( a ) ;
    for ( int i = a ; i*i <= b ; ++i ) {
        ++re ;
    }
    cout << re << "\n" ;
}

int main() {
    int a, b ;
    while ( cin >> a >> b , a != 0 || b != 0 ) {
        deter( a, b ) ;
    }
}
