#include<iostream>
using namespace std ;

int main() {
    long long a ;
    while ( cin >> a, a != 0 ) {
        if ( a%9 == 0 ) {
            cout << 9 << "\n" ;
        } else {
            cout << a%9 << "\n" ;
        }
    }
}
