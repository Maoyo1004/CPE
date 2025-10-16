#include<iostream>
#include<string> 
using namespace std ;

void cal( string s ) {
    int max = 1, sum = 0, temp ;
    for ( int i = 0 ; i < s.size() ; ++i ) {
        if ( s[ i ] >= '0' && s[ i ] <= '9' ) {
            temp = s[ i ] - '0' ;
        } else if ( s[ i ] >= 'A' && s[ i ] <= 'Z' ) {
            temp = s[ i ] - 'A' + 10 ;
        } else if ( s[ i ] >= 'a' && s[ i ] <= 'z' ) {
            temp = s[ i ] - 'a' + 36 ;
        } else {
            temp = 0 ;
        }
        if ( max < temp ) {
            max = temp ;
        }
        sum += temp ;
    }
    for ( int i = max ; i <= 62 ; ++i ) {
        if ( i == 62 ) {
            cout << "such number is impossible!\n" ;
            return ;
        }
        if ( ! ( sum%i ) ) {
            cout << i + 1 << "\n" ;
            break ;
        }
    }
}

int main() {
    string s ;
    while ( getline( cin, s ) ) {
        cal( s ) ;
    }
}
