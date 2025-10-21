#include<iostream> 
#include<vector>
#include<cmath>
#include<numeric>
using namespace std ;

int change( long long N ) {
    vector<int> num ;
    while ( N != 0 ) {
        int a = N%10 ;
        num.push_back( a ) ;
        N /= 10 ;
    }
    int tendigital = 0 ;
    for ( int i = 0 ; i < num.size() ; ++i ) {
        tendigital += num[ i ]*pow( 2, i ) ;
    }
    return tendigital ;
}

int main () {
    long long a, b ;
    int time = 1 ;
    int runtimes ;
    cin >> runtimes ;
    for ( int i= 0 ; i < runtimes ; ++i ) {
        cin >> a ;
        cin >> b ;
        int na = change( a ) ;
        int nb = change( b ) ;
        int GCD = gcd( a, b ) ;
        cout << "Pair #" << time << ": " ;
        if ( GCD != 1 ) {
            cout << "All you need is love!\n" ;
        } else {
            cout << "Love is not all you need!\n" ;
        }
        ++time ;
    }
}
