#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

void cal( long long a ) {
    long long b = a ;
    vector<long long> num ;
    while ( a > 0 ) {
        long long temp = a%10 ;
        num.push_back( temp ) ;
        a /= 10 ;
    }
    reverse( num.begin(), num.end() ) ;
    long long sum_1 = 0, sum_2 = 0 ;
    for ( int i = 0 ; i < num.size() ; i += 2 ) {
        sum_1 += num[ i ] ;
        if ( i + 1 < num.size() ) {
            sum_2 += num[ i + 1 ] ;
        }
    }
    if ( ( sum_1 - sum_2 )%11 == 0 ) {
        cout << b << " is a multiple of 11.\n" ; 
    } else {
        cout << b << " is not a multiple of 11.\n" ; 
    }
}

int main () {
    long long a ;
    while ( cin >> a , a != 0 ) {
        cal( a ) ;
    }
}
