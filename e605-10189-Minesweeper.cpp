#include<iostream> 
#include<vector>
using namespace std ;

void creat( int row, int col, vector<vector<char>> &boom ) {
    for ( int i = 0 ; i < col ; ++i ) {
        for ( int j = 0 ; j < row ; ++j ) {
            cin >> boom[ i ][ j ] ;
        }
    }
}

void determine( const vector<vector<char>> boom, vector<vector<int>> &count, int row, int col ) {
    for ( int i = 0 ; i < col ; ++i ) {
        for ( int j = 0 ; j < 0 ; ++j ) {
            count[ i ][ j ] = 0 ;
        }
    }
    int dirx[ 8 ] = { 1, 1, 0, -1, -1, -1, 0, 1 } ;
    int diry[ 8 ] = { 0, 1, 1, 1, 0, -1, -1, -1 } ;
    for ( int i = 0 ; i < col ; ++i ) {
        for ( int j = 0 ; j < row ; ++j ) {
            if ( boom[ i ][ j ] == '*' ) {
                count[ i ][ j ] = -1 ;
                for ( int k = 0 ; k < 8 ; ++k ) {
                    int new_i = i + dirx[ k ] ;
                    int new_j = j + diry[ k ] ;
                    if ( new_i >= 0 && new_j >= 0 && new_i < col  && new_j < row ) {
                        if ( count[ new_i ][ new_j ] != -1 ) {
                            ++count[ new_i ][ new_j ] ;
                        }
                    }
                }
            }
        }
    }
}

void out(const vector<vector<int>> count, int row, int col ) {
    for ( int i = 0 ; i < col ; ++i ) {
        for ( int j = 0 ; j < row ; ++j ) {
            if ( count[ i ][ j ] == -1 ) {
                cout << "*" ;
            } else {
                cout << count[ i ][ j ] ;
            }
        }
        cout << "\n" ;
    }
}

int main () {
    int row, col ; 
    int time = 1 ;
    while ( cin >> col >> row && row != 0 && col != 0) {
        vector<vector<char>> boom( col, vector<char> ( row ) ) ;
        vector<vector<int>> count( col, vector<int> ( row, 0 ) ) ;

        creat( row, col, boom ) ;
        determine( boom, count, row, col ) ;
        cout << "Field #" << time << ":\n" ;
        out( count, row, col ) ;
        ++time ;
    }
}
