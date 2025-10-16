#include<iostream>
using namespace std ;

void V( double v, double t ) {
    double outcome = v*t*2 ;
    cout << outcome << "\n" ;
}

int main() {
    double v, t ;
    while ( cin >> v >> t ) {
        V( v, t ) ;
    }
}
