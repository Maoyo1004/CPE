#include<iostream> 
#include<vector>
#include<string>
using namespace std ;

#define p pair< int, string > 

void conver( long long N ) {
    vector<p> num ;
    int re = 0 ;
    long long a = N%100 ;
        num.push_back( { (int)a, " " } ) ;
        N /= 100 ;
    while ( N != 0 ) {
        a = N%10 ;
        num.push_back( { (int)a, "shata" } ) ;
        N /= 10 ;
        ++re ;
        if ( N == 0 ) {
            break ;
        }
        a = N%100 ;
        num.push_back( { (int)a, "hajar" } ) ;
        N /= 100 ;
        ++re ;
        if ( N == 0 ) {
            break ;
        }
        a = N%100 ;
        num.push_back( { (int)a, "lakh" } ) ;
        N /= 100 ;
        ++re ;
        if ( N == 0 ) {
            break ;
        }
        a = N%100 ;
        int a = N%100 ;
        num.push_back( { (int)a,  "kuti" } ) ;
        N /= 100 ;
        ++re ;
    }
    for ( int i = re ; i >= 0 ; --i ) {
        cout << num[ i ].first << " " << num[ i ].second << " " ; 
    }
    cout << "\n" ;
}

int main () {
    long long N ;
    while ( cin >> N ) {
        conver( N ) ;
    }
}
