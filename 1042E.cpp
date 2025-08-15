#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<ll> a(n), b(n);
        for ( int i = 0; i < n; i++ ) cin >> a[i];
        for ( int i = 0; i < n; i++ ) cin >> b[i];
        
        bool check = true;
        for ( int i = 0; i < n-1; i++ ) {
            if ( a[i] == b[i] ) continue;

            if ( b[i] == ( a[i] ^ a[i+1]) ) a[i] ^= a[i+1];
            else {
                if( b[i] == ( a[i] ^ b[i+1] ) ) a[i] ^= b[i+1];
                else {
                    check = false;
                    break;
                }
            }
        }
        cout << ( check && a[n-1] == b[n-1] ? "YES" : "NO" ) << endl;
    }
    return 0;
}
