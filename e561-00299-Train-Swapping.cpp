#include<iostream>
#include<vector>
using namespace std ;

void change( vector<int> train ) {
    int rec = 0 ;
    bool finish = false ;
    while ( ! finish ) {
        int deter = 0 ;
        for ( int i = 0 ; i < train.size() - 1 ; ++i ) {
            if ( train[ i ] > train[ i + 1 ] ) {
                swap( train[ i ], train[ i + 1 ] ) ;
                ++rec ;
                ++deter ;
            }
        } 
        if ( deter == 0 ) {
            finish = true ;
        }
    }
    cout << "Optimal train swapping takes " << rec << " swaps.\n" ;
}

int main() {
    int t, l ;
    vector<int> train ;
    cin >> t ;
    for ( int i = 0 ; i < t ; ++i ) {
        cin >> l ;
        vector<int> train( l ) ;
        for ( int i = 0 ; i < l ; ++i ) {
            cin >> train[ i ] ;
        }
        change( train ) ;
    }
}
