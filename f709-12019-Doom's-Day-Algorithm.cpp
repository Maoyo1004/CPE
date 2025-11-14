#include<iostream>
#include<cmath>
using namespace std ;

int getday( int m ) {
    int day ;
    switch ( m ) {
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
            day = 31 ;
            break ;
        case 4 : case 6 : case 9 : case 11 : 
            day = 30 ;
            break ;
        case 2 : 
            day = 28 ;
            break ;
    }
    return day ;
}

void cal( int m, int d ) {
    int close ;
    int diff = 100 ;
    for ( int i = 4 ; i <= 12 ; i += 2 ) {
        int temp = abs( m - i ) ;
        if ( temp < diff ) {
            diff = temp ;
            close = i ;
        }
    }
    int sum = 0 ;
    if ( m > close ) {
        for ( int i = close ; i < m ; ++i ) {
            sum += getday( i ) ;
        }
        sum = sum - close + d ;
        sum %= 7 ;
    } else if ( m < close ) {
        for ( int i = m ; i < close ; ++i ) {
            sum += getday( i ) ;
        }
        sum = sum + close - d ;
        sum %= 7 ;
        sum *= -1 ;
    } else {
        if ( d >= close ) {
            sum = ( d - close )%7 ;
        } else {
            sum = ( close - d )%7 ;
            sum *= -1 ;
        }
    }
    switch ( sum ) {
        case 0 :
            cout << "Monday\n" ;
            break ;
        case 1 : case -6 :
            cout << "Tuesday\n" ;
            break ;
        case 2 : case -5 :
            cout << "Wednesday\n" ;
            break ;
        case 3 : case -4 : 
            cout << "Thursday\n" ;
            break ;
        case 4 : case -3 : 
            cout << "Friday\n" ;
            break ;
        case 5 : case -2 : 
            cout << "Saturday\n" ;
            break ;
        case 6 : case -1 : 
            cout << "Sunday\n" ;
            break ;
    }
} 

int main() {
    int m, d, t ;
    cin >> t ;
    for ( int i = 0 ; i < t ; ++i ) {
        cin >> m >> d ;
        cal( m, d ) ;
    }
}
