#include<iostream>
using namespace std ;

void add( int num_1, int num_2 ) {
    int carry = 0 ; 
    int carry_times = 0 ;
    while ( num_1 != 0 || num_2 != 0 || carry != 0 ) {
        int new_1 = num_1%10 ;
        int new_2 = num_2%10 ;
        num_1 /= 10 ;
        num_2 /= 10 ;
        int current_carry = new_1 + new_2 + carry ;
        if ( current_carry >= 10 ) {
            carry = current_carry/10 ;
            ++carry_times ;
        } else {
            carry = 0 ;
        }
    }
    if ( carry_times != 0 ) {
        cout << carry_times << " carry operations.\n" ;
    } else {
        cout << "No carry operation.\n" ; 
    }
}

int main() {
    int a, b ;
    while ( cin >> a && a != 0) {
        cin >> b ;
        add( a, b ) ;
    }
    return 0 ;
}
