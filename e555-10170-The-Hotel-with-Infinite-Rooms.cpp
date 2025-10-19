#include<iostream> 
using namespace std ;

void in( int n, int D ) {
    int m = 0 ;
    while ( m < D ) {
        m += n ;
        ++n ;
    }
    cout << n - 1 << "\n" ;
}

int main () {
    int n, D ;
    while ( cin >> n >> D ) {
        in( n, D ) ;
    } 
}
