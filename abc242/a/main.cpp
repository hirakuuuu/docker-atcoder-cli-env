#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n) for(int i = a; i < n; i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
const int MOD = 1000000007;
const int mod = 998244353;


int main(){
    double a, b, c, x; cin >> a >> b >> c >> x;
    double p = 0;
    if(x <= a) p = 1;
    else if(x <= b) p = c/(b-a);
    printf("%.12f\n", p);

    return 0;
}
