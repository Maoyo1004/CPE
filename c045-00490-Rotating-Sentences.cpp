#include<iostream>
#include<vector>
using namespace std ;

void flip( vector<string> s ) {
    int a = s[ 0 ].size() ;
    for ( int i = 0 ; i < s.size() ; ++i ) {
        if ( s[ i ].size() > a ) {
            a = s[ i ].size() ;
        }
    }
    for ( int i = 0 ; i < a ; ++i ) {
        for ( int j = s.size() - 1 ; j >= 0 ; --j ) {
            if ( s[ j ].size() < i + 1 ) {
                cout << " " ;
            } else {
                cout << s[ j ][ i ] ;
            }
        }
        cout << "\n" ;
    }
}

int main() {
    vector<string> s ;
    string a ;
    while ( getline( cin, a ), a != "" ) {
        s.push_back( a ) ;
    }
    flip( s ) ;
}
