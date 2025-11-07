#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std ;

int main() {
    map<char,vector<int>> m ;
    m['c'] = { 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1 } ;
    m['d'] = { 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0 } ;
    m['e'] = { 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0 } ;
    m['f'] = { 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0 } ;
    m['g'] = { 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0 } ;
    m['a'] = { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
    m['b'] = { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
    m['C'] = { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 } ;
    m['D'] = { 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0 } ;
    m['E'] = { 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0 } ;
    m['F'] = { 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0 } ;
    m['G'] = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 } ;
    m['A'] = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
    m['B'] = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } ;

    int n ;
    string s ;
    cin >> n ;
    getline( cin, s ) ;
    for ( int i = 0 ; i < n ; ++i ) {
        getline( cin, s ) ;
        int a[ 11 ] = { 0 } ;
        int count[ 11 ] = { 0 } ;
        for ( int j = 0 ; j < s.size() ; ++j ) {
            for ( int k = 1 ; k < 11 ; ++k ) {
                if ( m[ s[ j ] ][ k ] ) {
                    if ( a[ k ] ) {
                        continue ;
                    } else {
                        a[ k ] = 1 ;
                        ++count[ k ] ;
                    }
                } else {
                    a[ k ] = 0 ;
                }
            } 
        }
        for ( int i = 1 ; i < 11 ; ++i ) {
            cout << count[ i ] << " " ;
        }
        cout << "\n" ;
    }
}
