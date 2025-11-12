#include<iostream>
#include<map>
using namespace std ;

void cal( int r ) {
    map<int,int> m ;
    int cost ;
    for ( int i = 0 ; i < 36 ; ++i ) {
    cin >> cost ;
    m[ i ] = cost ;
    }
    cout << "Case " << r << ":\n" ;
    int t ;
    cin >> t ;
    for ( int i = 0 ; i < 5 ; ++i ) {
        int a ;
        cin >> a ;
        cout << "Cheapest base(s) for number " << a << ":" ;
        int mn = 0x7FFFFFFF ;
        map<int,int> outcome ;
        for ( int i = 2 ; i <= 36 ; ++i ) {
            int n = a ;
            cost = 0 ;
            while ( n > 0 ) {
                cost += m[ n%i ] ;
                n /= i ;
            }
            outcome[ i ] = cost ;
            mn = min( mn, cost ) ;
        }
        for ( int i = 2 ; i <= 36 ; ++i ) {
            if ( outcome[ i ] == mn ) {
                cout << " " << i ;
            }
        }
        cout << "\n" ;
    }
}

int main() {
    int t ;
    cin >> t ;
    for ( int i = 1 ; i <= t ; ++i ) {
        cal( i ) ;
    }
}
