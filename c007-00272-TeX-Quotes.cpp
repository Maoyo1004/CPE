#include<iostream>
#include<string>
using namespace std ;
int main () {
    string s ;
    int count = 0 ;
    while ( getline( cin, s) ) {
        for ( int i = 0 ; i < s.length() ; ++i ) {
            if ( s[i] == '\"') {
                if ( count%2 == 0 ) {
                    cout << "``" ;
                } else {
                    cout << "''" ;
                }
                count++ ;
            } else {
                cout << s[i] ;
            }
        }
        cout << "\n" ;
    }
}
