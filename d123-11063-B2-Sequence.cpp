#include<iostream>
#include<vector>
using namespace std ;

void deter( vector<int> a ) {
    int re[ 20005 ] = { 0 };
    for ( int i = 0 ; i < a.size() ; ++i ) {
        for ( int j = i ; j < a.size() ; ++j ) {
            re[ a[ i ] + a[ j ] ] += 1 ;
        }
    }
    for ( int i = 0 ; i < 20005 ; ++i ) {
        if ( re[ i ] > 1 ) {
            cout << "It is not a B2-Sequence.\n" ;
            return ;
        }
    }
    cout << "It is a B2-Sequence\n" ;
}

int main() {
    int t ;
    vector<int> a ;
    int re = 1 ;
    while ( cin >> t ) {
        for ( int i = 0 ; i < t ; ++i ) {
            int temp ;
            cin >> temp ;
            a.push_back( temp ) ;
        }
        cout << "Case #" << re << ": " ;
        deter( a ) ;
        ++re ;
    }
}
