#include<iostream>
#include<vector> 
#include<deque>
using namespace std ;

int two( int N ) {
    int X1 = N ;
    int temp ;
    int record1 = 0 ;
    deque<int> carry ;
    while ( X1 != 0 ) {
        temp = X1%2 ;
        X1 = X1/2 ;
        carry.push_front( temp ) ;
    }
    if ( carry.size() < 4 ) {
        carry.push_front( 0 ) ;
    }
    for ( size_t i = 0 ; i < carry.size() ; ++i ) {
        if ( carry[ i ] == 1 ) {
            ++record1 ;
        }
    }
    return record1 ;
}

int sixteen( int N ) {
    int X2 = N ;
    int temp ;
    int record2 = 0 ;
    deque<int> carry ;
    while ( X2 != 0 ) {
        temp = X2%10 ;
        X2 = X2/10 ;
        carry.push_front( temp ) ;
    }
    for ( size_t i = 0 ; i < carry.size() ; ++i ) {
        record2 = record2 + two( carry[ i ] ) ;
    }
    return record2 ;
}

int main() {
    int T ; 
    cin >> T ;
    for ( int i = 0 ; i < T ; ++i ) {
        int N ;
        int b1 ;
        int b2 ;
        cin >> N ;
        b1 = two( N ) ;
        b2 = sixteen( N ) ;
        cout << b1 << " " << b2 << "\n" ;
    }
}
