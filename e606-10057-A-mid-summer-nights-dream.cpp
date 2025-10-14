#include<iostream>
#include<cmath>
#include<vector>
#include <algorithm>
using namespace std ;

void cal( int N ) {
    vector<int> num( N ) ;
    for ( int i = 0 ; i < N ; ++i ) {
        cin >> num[ i ] ;
    }
    sort( num.begin(), num.end() ) ;
    int middle = N/2 - 1 ;
    int re = 0 ;
    int rec = 0 ;
    vector<int> a( N ) ;
    int b ;
    if ( N%2 != 0 ) {
        for ( int i = 0 ; i < N ; ++i ) {
            if ( num[i] == num[ middle ] ) {
                ++rec;
            }
        }
    } else {
        for ( int i = 0 ; i < N ; ++i ) {
            if (num[ i ] == num[ middle ] || num[ i ] == num[ middle + 1 ] ) {
                ++rec;
            }
        }
    }
    int range = 1;
    if (N % 2 == 0) {
        range = num[ middle + 1 ] - num[ middle ] + 1 ;
    }
    cout << num[ middle ] << " " << rec << " " << range << "\n" ;
}

int main() {
    int n ;
    while ( cin >> n ) {
        cal( n ) ;
    }
}
