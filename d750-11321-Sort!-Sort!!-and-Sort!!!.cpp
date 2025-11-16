#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int M, N ;
bool compare( int a, int b ) {
    if ( a%M != b%M ) {
        return a%M < b%M ;
    } else {
        if ( ( a%2 )*( b%2 ) ) {
            return a > b ;
        } else if ( a%2 == 0 && b%2 == 0 ) {
            return a < b ;
        } else {
            return a%2 ;
        }
    }
}

int main() {
    while ( cin >> N >> M ) {
        if ( M == 0 && N == 0 ) {
            cout << N << " " << M << "\n" ;
            return 0 ;
        }
        cout << N << " " << M << "\n" ;
        vector<int> num( N ) ;
        for ( int i = 0 ; i < N ; ++i ) {
            cin >> num[ i ] ;
        }
        sort( num.begin(), num.end(), compare ) ;
        for ( int i = 0 ; i < N ; ++i ) {
            cout << num[ i ] << "\n" ;
        }
    }
}
