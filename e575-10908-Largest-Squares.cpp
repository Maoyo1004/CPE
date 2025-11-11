#include<iostream>
#include<string>
#include<vector>
using namespace std ;

void deter( vector<string> s, int x, int y, int M, int N ) {
    int sc = 0 ;
    int area = 1 ;
    while ( true ) {
        if ( x - area < 0 || y - area < 0 || x + area >= M || y + area >= N) {
            cout << 2*area - 1 << "\n" ;
            return ;
        }
        for ( int i = 0 ; i < 3 + sc ; ++i ) {
            if ( s[ x - area + i ][ y - area ] != s[ x ][ y ] || s[ x - area + i ][ y + area ] != s[ x ][ y ] ) {
                cout << 2*area - 1 << "\n" ;
                return ;
            }
            if ( s[ x - area ][ y - area + i ] != s[ x ][ y ] || s[ x + area ][ y - area + i ] != s[ x ][ y ] ) {
                cout << 2*area - 1 << "\n" ;
                return ;
            }
        }
        sc += 2 ;
        area += 1 ;
    }
}

int main() {
    vector<string> s ;
    int M, N, Q, t ;
    int x, y ;
    cin >> t ;
    for ( int j = 0 ; j < t ; ++j ) {
        cin >> M >> N >> Q ;
        s.resize( M ) ;
        for( int i = 0 ; i < M ; ++i ) {
            cin >> s[ i ] ;
        }
        cout << M << " " << N << " " << Q << "\n" ;
        for ( int i = 0 ; i < Q ; ++i ) {
            cin >> x >> y ;
            deter( s, x, y, M, N ) ;
        }
    }
}
