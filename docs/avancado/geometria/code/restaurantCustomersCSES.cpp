#include <bits/stdc++.h>
// #define int long long
#define ff first
#define ss second
#define ll long long
#define ld long double
#define pb push_back
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ti tuple<int, int, int>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define teto(a, b) (((a)+(b)-1)/(b))
#define all(x) x.begin(), x.end()
#define forn(i, n) for(int i = 0; i < (int)n; i++)
#define forne(i, a, b) for(int i = a; i <= b; i++)
#define dbg(msg, var) cerr << msg << " " << var << endl;

using namespace std;

const int MAX = 3e5+10;
const ll MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const ld EPS = 1e-6;
const ld PI = acos(-1);

// End Template //

struct event{
    int x; // quando ocorreu
    int type; // qual tipo de evento: 1->chegou -1->saiu

    bool operator<(event o){
        return x<o.x;
    }
};

int32_t main()
{sws;

    int n, a, b;
    cin >> n;

    vector<event> sweepLine;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        sweepLine.pb({a, -1});
        sweepLine.pb({b, 1});
    }

    sort(sweepLine.begin(), sweepLine.end());

    int customers=0, ans=0;
    for(auto s: sweepLine){
        if(s.type==-1) // chegou
            customers++;
        else if(s.type==1) // saiu
            customers--;
        ans = max(ans, customers);
    }

    cout << ans << endl;

    return 0;
}