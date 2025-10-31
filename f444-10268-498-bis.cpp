#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<limits>
using namespace std ;

void fill( vector<int>& x ) {
    string a ;
    getline( cin, a ) ;
    stringstream ss( a ) ; 
    int temp ;
    while ( ss >> temp ) {
        x.push_back( temp ) ;
    }
}

void compute( const vector<int>& x, int x_num ) {
    size_t s = x.size() ;
    if ( s < 2 ) {
        cout << 0 << "\n" ;
    }
    long long result = (long long) x[0]*( s - 1 ) ;
    for ( int i = 1 ; i < s - 1 ; ++i ) {
        result = result*x_num + (long long) x[ i ]*( s - 1 - i ) ; 
    }
    cout << (int) result << "\n" ;
}

int main () {
    int num ;
    while ( cin >> num ) {
        cin.ignore() ;
        vector<int> x ;
        fill( x ) ;
        compute( x, num ) ;
    }
}
