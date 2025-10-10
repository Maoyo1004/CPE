#include<iostream>
#include<vector>
#include<cmath>
using namespace std ;

void solve( int n ) {
    vector<int> num( n ) ;
    for ( int i = 0 ; i < n ; ++i ) {
        cin >> num[ i ] ;
    }
    if ( n == 1 ) {
        cout << "Jolly\n" ;
        return ;
    }
    vector<bool> deter( n, false ) ;
    for ( int i = 0 ; i < n -1 ; ++i ) {
        int temp = abs( num[ i ] - num[ i + 1] ) ;
        if ( temp >= 1 && temp < n ) {
            deter[ temp ] = true ;
        } else {
            cout << "Not jolly\n" ;
            return ;
        }
    }
    for ( int i = 1 ; i < n  ; ++i ) {
        if ( deter[ i ] == false ) {
            cout << "Not jolly\n" ;
            return ;
        }
    }
    cout << "Jolly\n" ;
}

int main() {
    int n ;
    while ( cin >> n ) {
        solve( n ) ;
    }
}
