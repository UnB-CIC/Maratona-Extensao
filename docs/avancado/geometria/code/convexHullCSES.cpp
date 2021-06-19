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

#define PI acos(-1)
#define vp vector<point>

typedef ll cod;

struct point{
    cod x, y;
    int id;
    point(cod x=0, cod y=0): x(x), y(y){}

    point operator+(const point &o) const{
        return {x+o.x, y+o.y};
    }
    point operator-(const point &o) const{
        return {x-o.x, y-o.y};
    }
    point operator*(cod t) const{
        return {x*t, y*t};
    }
    point operator/(cod t) const{
        return {x/t, y/t};
    }
    cod operator*(const point &o) const{ // dot
        return x * o.x + y * o.y;
    }
    cod operator^(const point &o) const{ // cross
        return x * o.y - y * o.x;
    }
    bool operator<(const point &o) const{
        if(x != o.x) return x < o.x;
        return y < o.y;
    }
};

// int ccw(point a, point b, point e){ //-1=dir; 0=collinear; 1=esq;
//     cod tmp = (b-a)^(e-a); // from a to b
//     return (tmp > EPS) - (tmp < -EPS);
// }

int esq(point p1, point p2, point p3){
    // esq => 1; meio => 0; dir => -1
    cod cross = (p2-p1)^(p3-p1);
    if(cross==0) return 0;
    if(cross>0) return 1;
    return -1;
}

vp convex_hull(vp points){
    vp P(points);
    sort(P.begin(), P.end());
    vp L, U;
    // Lower Hull
    for(auto p: P){
        while(L.size()>=2 and esq(L[L.size()-2], L.back(), p)==-1)
            L.pop_back();
        L.push_back(p);
    }
    reverse(P.begin(), P.end());
    // Upper Hull
    for(auto p: P){
        while(U.size()>=2 and esq(U[U.size()-2], U.back(), p)==-1)
            U.pop_back();
        U.push_back(p);
    }
    L.pop_back();
    L.insert(L.end(), U.begin(), U.end()-1);
    return L;
}


int32_t main()
{sws;

    int n;
    cin >> n;
    vp p(n);
    for(int i=0;i<n;i++)
        cin >> p[i].x >> p[i].y;

    vp chull = convex_hull(p);

    cout << chull.size() << endl;
    for(auto c: chull)
        cout << c.x << " " << c.y << endl;

    return 0;
}