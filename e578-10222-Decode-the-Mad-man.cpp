#include<iostream>
#include<map>
#include<string>
using namespace std ;

void change( string code ) {
    string s[] = { "!@#$%^&*()_+", "1234567890-=", "qwertyuiop[]\\", "asdfghjkl;'", "zxcvbnm,./" } ;
    map<char, char> m ;
    for ( int i = 0 ; i < 5 ; ++i ) {
        for ( int j = 2 ; j < s[i].size() ; ++j ) {
            m[ s[ i ][ j ] ] = s[ i ][ j - 2 ] ;
        }
    }
    for ( int i = 0 ; i < code.size() ; ++i ) {
        if ( code[ i ] == ' ' ) {
            cout << " " ;
        } else {
            cout << m[ code[ i ] ] ;
        }
    }
}

int main () {
    string code ;
    while ( getline( cin, code ) ) {
        change( code ) ;
        cout << "\n" ;
    }
}
