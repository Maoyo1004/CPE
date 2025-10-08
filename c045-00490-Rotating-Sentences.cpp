#include<iostream>
#include<string>
using namespace std ;

void column() {
	string a[105] ;
	int b = 0 ;
	int c = 0 ;
	while ( getline( cin, a[ b ] ) {
		c = max( c, (int)a[ b ].size() ) ;
		++b ;
	}
	for ( int i = 0 ; i < c ; ++i ) {
		for ( int j = b - 1 ; j >= 0 ; --j ) {
			if ( i > a[ j ].size() ) {
				cout << " " ;
			} else {
				cout << a[ j ][ i ] ;
			}
			cout "\n" ;
		}
	}
} 

int main () {
	column() ;
}
