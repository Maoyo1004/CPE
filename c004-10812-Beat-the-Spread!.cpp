#include<iostream>
using namespace std ;

void cal( int a, int b ) {
    int f = ( a + b )/2 ;
    int s = ( a - b )/2 ;
    if ( f < 0 || s < 0 || f + s != a || f - s != b ) {
        cout << "impossible\n" ;
        return ;
    } else {
        cout << f << " " << s << "\n" ;
        return ;
    }
}

int main() {
    int a, b, t ;
    cin >> t ;
    for ( int i = 0 ; i < t ; ++i ) {
        cin >> a >> b ;
        cal( a, b ) ;
    }
}
