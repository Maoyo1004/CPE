#include<iostream>
#include<string>
using namespace std ;

int main () {
    string a, b ;
    while ( true ) {
        int word[ 26 ] = { 0 } ;
        cin >> a ;
        cin >> b ;
        for ( int i = 0 ; i < a.size() ; ++i ) {
            if ( word[ (int) a[i] - 97 ] < 1 ) {
                word[ (int) a[i] - 97 ] += 1 ; 
            } 
        }
        for ( int i = 0 ; i < b.size() ; ++i ) {
            if ( word[ (int) b[i] - 97 ] == 1 ) {
                word[ (int) b[i] - 97 ] += 1 ; 
            } 
        }
        for ( int i = 0 ; i < 26 ; ++i ) {
            if ( word[ i ] == 2 ) {
                cout << (char) ( i + 97 ) ;
            }
        }
        cout << "\n" ;
    }
}
