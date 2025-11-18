#include<iostream>
#include<vector>
using namespace std ;

void out( int a ) {
    vector<int> fin( 2 ) ;
    fin[ 0 ] = 1 ;
    fin[ 1 ] = 1 ;
    int len = 1 ;
    while ( fin[ len ] < a ) {
        int temp = fin[ len ] + fin[ len - 1 ] ;
        fin.push_back( temp ) ;
        ++len ;
    }
    vector<int> rec ;
    while ( a != 0 ) {
        if ( a >= fin[ len ] ) {
            a -= fin[ len ] ;
            rec.push_back( len ) ;
        }
        --len ;
    }
    int rec_n = 0 ;
    bool f = false ;
    for ( int i = fin.size() - 1 ; i > 0 ; --i ) {
        if ( rec_n <= rec.size() - 1 ) {
            if ( i == rec[ rec_n ] ) {
                cout << 1 ;
                ++rec_n ;
                f = true ;
            } else if ( f ) {
                cout << 0 ;
            }
        } else {
            cout << 0 ;
        }
    }
    cout << " (fib)\n" ;
}

int main() {
    int t ;
    cin >> t ;
    for ( int i = 0 ; i < t ; ++i ) {
        int a ;
        cin >> a ;
        cout << a << " = " ;
        out( a ) ;
    }
}
