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
        f1 = f2 ;
        f2 = f3 ;
    }
    reverse( fibnum.begin(), fibnum.end() ) ;
}

int main() {
    fib() ;
    int times ;
    int num ;
    int temp ;
    cin >> times ;
    int start = -1; 
    for ( int i = 0 ; i < times ; ++i ) {
        cin >> num ; 
        int outnum = num ;
        int coutnum = num ;
        int start2 = -1 ;
        vector<int> zero( fibnum.size(), 0 ) ;
        for ( size_t j = 0 ; j < fibnum.size() ; ++j ) {
            if ( coutnum >= fibnum[ j ] ) {
                if ( start2 == -1 ) {
                    start2 = j ;
                }
                coutnum -= fibnum[ j ] ;
                zero[ j ] = 1 ;
            }
        }
        cout << outnum << " = " ;
        for ( size_t j = start2 ; j < fibnum.size() ; ++j ) {
            cout << zero[ j ] ;
        }
        cout << " (fib)\n" ;
    }
    return 0 ;
}
