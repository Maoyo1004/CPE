#include<iostream> 
#include<vector>
using namespace std ;

void cal( int n, int m ) {
    vector<int> a ;
    while ( n != 1 ) {
        a.push_back( n ) ;
        if ( n%m != 0 ) {
            cout << "Boring!\n" ;
            return;
        }
        n /= m ;
    }
    a.push_back( 1 ) ;
    for ( int i = 0 ; i < a.size() ; ++i ) {
        cout << a[ i ] << " " ;
    }
    cout << "\n" ;
}
int main () {
    int n, m ;
    while ( cin >> n >> m ) {
        cal( n, m ) ;
    }
}
