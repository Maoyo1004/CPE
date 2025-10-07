#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

vector<int> fibnum ;
void fib() {
    int f1 = 0, f2 = 1, f3 = 1 ;
    while ( f3 <= 100000000 ) {
        f3 = f1 + f2 ;
        fibnum.push_back( f3 ) ;
        f2 = f3 ;
        f1 = f2 ;
    }
    reverse( fibnum.begin(), fibnum.end() ) ;
}

int find( int num ) {
    int i = fibnum.size()/2 ;
    if ( fibnum[ i ] > num ) {
        while ( num < fibnum[ i ] ) {
            ++i ;
        }
        return i ;
    } else {
        while ( fibnum[ i ] < num ) {
            --i ;
        }
        return i - 1 ;
    }
}

int main() {
    int times ;
    int num ;
    vector<int> zero( fibnum.size(), 0 ) ;
    cin >> times ;
    for ( int i = 0 ; i < times ; ++i ) {
        cin >> num ; 
        int ooutnum = num ;
        int start = find( num ) ;
        while ( num != 0 ) {
            int temp = find( num ) ;
            num = num - fibnum[ temp ] ;
            zero[ temp ] = 1 ;
        }
        cout << outnum << " = " ;
        for ( int i = start ; i <= temp ; ++i ) {
            cout << zero[ i ] ;
        }
        cout << " (fib)\n" ;
    }
}
