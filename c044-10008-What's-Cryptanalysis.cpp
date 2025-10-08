#include<iostream>
#include<vector> 
#include<string>
#include<algorithm>
using namespace std ;

struct CC {
    char c ;
    int count ;
} ;

bool CCC ( const CC& a, const CC& b ) {
    // 依據次數 大到小 降序
    if ( a.count != b.count ) {
        return a.count > b.count ;
    }
    // 次數相同 依據字元 小到大 升序
    return a.c < b.c;
}

int main() {
    int times ;
    cin >> times ;
    cin.ignore() ;
    int worduse[ 26 ] = { 0 } ;
    string word ;
    for ( int i = 0 ; i < times ; ++i ) {
        getline( cin, word ) ;
        for ( char c : word ) {
            if ( isalpha( c ) ) {  // 如果是小寫
                char upc = toupper( c ) ; // 變大寫
                int a = upc - 'A' ;
                worduse[ a ]++ ;
            }
        }
    }
    vector<CC> r ;
    for ( int i = 0 ; i < 26 ; ++i ) {
        if ( worduse[ i ] != 0 ) {
            CC cc ;
            cc.c = 'A' + i ;
            cc.count = worduse[ i ] ;
            r.push_back( cc ) ;
        }
    }
    sort( r.begin(), r.end(), CCC ) ;
    for ( const auto& item : r ) {
        cout << item.c << " " << item.count << "\n" ;
    }
}
