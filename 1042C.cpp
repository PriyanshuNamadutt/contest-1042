#include<bits/stdc++.h>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for ( int i = 0; i < n; i++ ) cin >> a[i];

        multiset<int> ms;
        for ( int i = 0; i < n; i++ ) {
            int num; cin >> num;

            num = num % k;
            ms.insert( num );
        }

        bool check = true;
        for ( int i = 0; i < n; i++ ) {
            int tar1 = a[i] % k;
            int tar2 = ( k - tar1 ) % k;

            auto it1 = ms.find( tar1 );

            if ( it1 != ms.end() ) ms.erase(it1);
            else {
                auto it = ms.find( tar2 );
                if ( it != ms.end() ) ms.erase(it);
                else {
                    check = false;
                    break;
                }
            }
        }

        cout << ( check && ms.empty() ? "YES" : "NO" ) << endl;
    }
    return 0;
}
