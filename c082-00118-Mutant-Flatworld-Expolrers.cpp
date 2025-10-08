// Fail don't work

#include<iostream>
#include<string>
#include<vector>
using namespace std ;
// move
int direction ;
int x_start ;
int y_start ;
int x_end ;
int y_end ;
int x_current = x_start ;
int y_current = y_start ;
int x_temp = x_start;
int y_temp = y_start;
char dirword ;
void dir( char startdir) {
    switch ( startdir ) {
        case 'N' :
            direction = 0 ;
            break ;
        case 'E' :
            direction = 1 ;
            break ;
        case 'S' :
            direction = 2 ;
            break ;
        case 'W' :
            direction = 3 ;
            break ;
    }
}
void moving( char move ) {
    switch ( move ) {
        case 'R' :
            direction = ((direction + 1) + 4)%4 ;
            break ;
        case 'L' :
            direction = ((direction - 1) + 4)%4 ;
            break ;
        case 'F' :
            switch ( direction ) {
                case 0 :
                    y_temp = y_current ;
                    y_current = y_current + 1 ;
                    break ;
                case 1 :
                    x_temp = x_current ;
                    x_current = x_current + 1 ;
                    break ;
                case 2 :
                    y_temp = y_current ;
                    y_current = y_current - 1 ;
                    break ;
                case 3 :
                    x_temp = x_current ;
                    x_current = x_current - 1 ;
                    break ;
            }
            break ;
    }
}
void dirwordf( int direction ) {
    switch ( direction ) {
        case 0 :
            dirword = 'N' ;
            break ;
        case 1 :
            dirword = 'E' ;
            break ;
        case 2 :
            dirword = 'S' ;
            break ;
        case 3 :
            dirword = 'W' ;
            break ;
    }
}
// determine commands 
void command( string move, char startdir ) {
    vector<char> move_command( move.begin(), move.end() ) ;
    size_t s = move_command.size() ;
    dir( startdir ) ;
    int a ;
    for ( int i = 0 ; i < s ; ++i) {
        moving( move_command[i] ) ;
        if ( x_current > x_end || y_current > y_end || x_current < 0 || x_current < 0 ) {
            a = 0 ;
            dirwordf( direction ) ;
            cout << x_temp << " " << y_temp << " " << dirword << " LOST" << "\n" ;
            break ;
        } else {
            a = 1 ;
        }
    }
    if ( a == 1 ) {
    dirwordf( direction ) ;
    cout << x_current << " " << y_current << " " << dirword << "\n" ;
    }
}

int main() {
    string move ;
    char startdir ;
    while ( cin >> x_end >> y_end ) {
        cin >> x_start >> y_start >> startdir ;
        cin >> move ;
        command( move, startdir ) ;
    }
}
