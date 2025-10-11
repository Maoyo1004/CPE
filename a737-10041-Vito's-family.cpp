#include<iostream>
#include<vector>
#include<cmath>
#include <algorithm>
using namespace std ;

void middle() {
    int times ;
    cin >> times ;
    vector<int> rec( times );
    for ( int i = 0 ; i < times ; ++i ) {
        cin >> rec[ i ] ;
    }
    sort( rec.begin(), rec.end() ) ;
    int mid = times/2 ;
    long long distance = 0 ;
    int new_home = rec[ mid ] ;
    for ( int i = 0 ; i < times ; ++i ) {
        distance += abs( rec[ i ] - new_home ) ;
    }
    cout << distance << "\n" ;
}

int main() {
    int times ;
    cin >> times ;
    for ( int i = 0 ; i < times ; ++i ) {
        middle() ;
    }
}
