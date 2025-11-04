#include<iostream>
using namespace std ;
int add( int a, int b ) ;

int main () {
    int a, b, time ;
    cin >> time ;
    for ( int i = 1 ; i <= time ; ++i ) {
        cin >> a ;
        cin >> b ;
        cout << "Case " << i << ": " << add( a, b ) << "\n" ;
    }
}

int add( int a, int b ) {
    int sum = 0 ;
    if ( a%2 == 0 ) {
        a += 1 ;
    }
    for ( int i = a ; i <= b ; i += 2 ) {
        sum += i ;
    }
    return sum ;
}
