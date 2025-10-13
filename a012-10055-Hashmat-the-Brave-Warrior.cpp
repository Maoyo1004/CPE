#include<iostream>
#include<cmath>
using namespace std ;

void cal( long long a, long long b ) {
    long long c ;
    c = abs( a - b ) ;
    cout << c << "\n" ;
}

int main() {
    long long a, b ;
    while ( cin >> a >> b ) {
        cal( a, b ) ;
    }
}
