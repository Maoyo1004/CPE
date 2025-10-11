#include<iostream>
#include<vector>
using namespace std ;

void nowork() {
    int day ;
    cin >> day ;
    int acount ;
    cin >> acount ;
    vector<bool> work( day, false ) ;
    vector<int> num( acount ) ;
    for ( int i = 0 ; i < acount ; ++i ) {
        cin >> num[ i ] ;
    }
    int c = 0 ;
    for ( int i = 0 ; i < acount ; ++i ) {
        int num_i = num[ i ] ;
        for ( int j = num_i ; j <= day ; j += num_i ) {
            if ( j%7 != 6 && j%7 != 0 ) {
                if ( work[ j - 1 ] == false ) {
                    work[ j - 1 ] = true ;
                    ++c ;
                }
            } 
        }
    }
    cout << c << "\n" ;
}

int main() {
    int n ;
    cin >> n ;
    for( int i = 0 ; i < n ; ++i ) {
        nowork() ;
    }
}
