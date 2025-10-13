#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ;

void cal( int N, double p, int i ) {
    double success ;
    double first = pow( 1.0 - p, i - 1 )*p ;
    double r = pow( 1.0 - p, N ) ;
    success = first/( 1.0 - r ) ;
    cout << fixed << setprecision(4) ;
    cout << success << "\n" ;
}

int main() {
    int n ;
    cin >> n ;
    for ( int i = 0 ; i < n ; ++i ) {
        int N ;
        double p ;
        int a ;
        cin >> N >> p >> a ;
        cal( N, p, a ) ;
    }
}
