#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void solve() {
    int count ; 
    cin >> count ;
    vector<int> b(count); 
    for ( int j = 0; j < count ; ++j ) {
        cin >> b[ j ];
    }
    int c = 0;
    for ( int i = 0 ; i < count - 1 ; ++i ) {
        for (int j = 0; j < count - 1 - i; ++j) {
            if (b[j] > b[j + 1]) {
                swap( b[ j ], b[ j + 1 ] ) ; 
                c++;
            }
        }
    }

    cout << "Optimal train swapping takes " << c << " swaps." << "\n";
}

int main() {
    int t ;
    cin >> t ;
    for ( int i = 0; i < t ; ++i ) {
        solve() ; 
    }
    return 0;
}
