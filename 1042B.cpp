#include<iostream>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        for ( int i = 0; i < n-1; i++ ) {

            if ( i % 2 == 0 ) cout << -1 << " ";
            else cout << 3 << " ";
        }
        cout << ( n % 2 == 0 ? 2 : -1 ) << endl;
    }
    return 0;
}
