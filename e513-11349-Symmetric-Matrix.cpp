#include<iostream>
#include<vector>
using namespace std ;

bool flip( vector<vector<long long>> sym, int s ) {
    vector<vector<long long>> copy( s, vector<long long> ( s ) ) ;
    for ( int i = 0 ; i < s ; ++i ) {
        for ( int j = 0 ; j < s ; ++j ) {
            long long temp ;
            cin >> temp ;
            sym[ i ][ j ] = copy[ i ][ j ] = temp ;
        }
    }
    for ( int i = 0 ; i < s ; ++i ) {
        for ( int j = 0 ; j < s/2 ; ++j ) {
            swap( copy[ i ][ j ], copy[ i ][ s - j -1 ] ) ;
        }
    }
    for ( int i = 0 ; i < s ; ++i ) {
        for ( int j = 0 ; j < s/2 ; ++j ) {
            swap( copy[ j ][ i ], copy[ s - j -1 ][ i ] ) ;
        }
    }
    for ( int i = 0 ; i < s ; ++i ) {
        for ( int j = 0 ; j < s ; ++j ) {
            if ( sym[ i ][ j ] != copy[ i ][ j ] ) {
                return false ;
            }
        }
    }
    return true ;
}

int main() {
    int t, s ;
    cin >> t ;
    for ( int i = 0 ; i < t ; ++i ) {
        cin >> s ;
        vector<vector<long long>> sym( s, vector<long long> ( s ) ) ;
        if ( flip( sym, s ) ) {
            cout << "Test #" << i + 1 << " : Symmetric.\n" ; 
        } else {
            cout << "Test #" << i + 1 << " : Non-symmetric.\n" ; 
        }
    }
}
