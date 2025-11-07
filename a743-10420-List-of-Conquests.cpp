#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std ;

int main() {
    int n ;
    string c ;
    map<string,int> m ;
    cin >> n ;
    getline( cin, c ) ;
    for ( int i = 0 ; i < n ; ++i ) {
        getline( cin, c ) ;
        stringstream ss( c ) ;
        ss >> c ;
        m[ c ]++ ;
    }
    for ( auto i : m ) {
        cout << i.first << " " << i.second << "\n" ;
    }
}
