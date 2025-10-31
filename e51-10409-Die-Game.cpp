#include<iostream>
#include<string>
#include<map>
using namespace std ;
int main () {
    map<string, int> m ;
    m[ "top" ] = 1 ;
    m[ "north" ] = 2 ;
    m[ "west" ] = 3 ;
    m[ "bottom" ] = 4 ;
    m[ "south" ] = 5 ;
    m[ "east" ] = 6 ;
    string dir ;
    int time ;
    cin >> time ;
    if ( time == 0 ) {
        return 0 ;
    }
    for ( int i = 0 ; i < time ; ++i ) {
        cin >> dir ;
        if ( dir == "north" ) {
            int temp = m[ "north" ] ;
            m[ "north" ] = m[ "top" ] ;
            m[ "top" ] = m[ "south" ] ;
            m[ "south" ] = m[ "bottom" ] ;
            m[ "bottom" ] = temp ;
        }
        if ( dir == "south" ) {
            int temp = m[ "south" ] ;
            m[ "south" ] = m[ "top" ] ;
            m[ "top" ] = m[ "north" ] ;
            m[ "north" ] = m[ "bottom" ] ;
            m[ "bottom" ] = temp ;
        }
        if ( dir == "west" ) {
            int temp = m[ "west" ] ;
            m[ "west" ] = m[ "top" ] ;
            m[ "top" ] = m[ "east" ] ;
            m[ "east" ] = m[ "bottom" ] ;
            m[ "bottom" ] = temp ;
        }
        if ( dir == "east" ) {
            int temp = m[ "east" ] ;
            m[ "east" ] = m[ "top" ] ;
            m[ "top" ] = m[ "west" ] ;
            m[ "west" ] = m[ "bottom" ] ;
            m[ "bottom" ] = temp ;
        }
    }
    cout << m[ "top" ] << "\n" ;
}
