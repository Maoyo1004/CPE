#include<iostream>
#include<vector>
#include<cmath>
using namespace std ;

bool deter( int n ) {
    if ( n%2 == 0 && n != 2 ) {
        return false ;
    }
    for ( int i = 3 ; i*i < n ; i += 2 ) {
        if ( n%i == 0 ) {
            return false ;
        }
    }
    return true ;
}

int rev( int n ) {
    vector<int> rev_temp ;
    int rev_n = 0 ;
    while ( n != 0 ) {
        int temp = n%10 ;
        rev_temp.push_back( temp ) ;
        n /= 10 ;
    }
    size_t s = rev_temp.size() ;
    for ( int i = 0 ; i < s ; ++i ) {
        rev_n += rev_temp[ i ]*pow( 10, s - i - 1 ) ;
    }
    return rev_n ;
}

int main () {
    int n ;
    while ( cin >> n ) {
        if ( ! deter( n ) ) {
            cout << n << " is not prime.\n" ;
            continue ;
        }
        int new_n = rev( n ) ;
        if ( n == new_n ) {
            cout << n << " is prime.\n" ;
        } else if ( deter( new_n ) ) {
            cout << n << " is emirp.\n" ;
        } else {
            cout << n << " is prime.\n" ;
        }
    }
}
