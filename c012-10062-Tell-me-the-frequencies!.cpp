#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
#define p pair< int, int >

bool newsort( p a, p b ) {
    if ( a.first != b.first ) {
        return a.first < b.first ;
    } else {
        return a.second > b.second ;
    }
}

void cal( string word ) {
    p a[ 256 ] ;
    for ( int i = 0 ; i < 256 ; ++i ) {
        a[ i ] = { 0, i } ;
    } 
    for ( int i = 0 ; i < word.size() ; ++i ) {
        ++a[ (int) word[ i ] ].first ;
    }
    sort( a, a + 256, newsort ) ;
    for ( auto i : a ) {
        if ( i.first > 0 ) {
            cout << i.second << " " << i.first << "\n" ;
        }
    }
}

int main() {
    string n ;
    while ( getline( cin, n ) ) {
        cal( n ) ;
    }
}
