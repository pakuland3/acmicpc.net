#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        cout << a*b/gcd(a,b) << '\n';
    }
    return 0;
}