#include<iostream>
#include<iomanip>
#include<string>
#include<map>
using namespace std ;

void cal( int n ) {
    string a ;
    getline( cin, a ) ;
    getline( cin, a ) ;
    while ( n-- ) {
        map<string, int> mp ;
        int sum = 0 ;
        while ( getline( cin, a ) && a != "" ) {
            mp[ a ]++ ;
            ++sum ; 
        }
        for ( auto i : mp ) {
            cout << i.first << " " ;
            cout << fixed << setprecision( 4 ) ;
            cout << (double) i.second/sum*100 << "\n" ;
        }
        cout << "\n" ;
    }
}

int main () {
    int n ; 
    cin >> n ;
    cal( n ) ;
}
