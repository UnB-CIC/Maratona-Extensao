#include <bits/stdc++.h>
#define int long long
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

const int MAX = 9*1e6+10;
const ll MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const ld EPS = 1e-8;
const ld PI = acos(-1);

// End Template //

#define PI acos(-1)
#define vp vector<point>

typedef int cod;
bool eq(cod a, cod b){ return (a==b); }

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
        if(!eq(x, o.x)) return x < o.x;
        return y < o.y;
    }
    bool operator==(const point &o) const{
        return eq(x, o.x) and eq(y, o.y);
    }

};

ld norm(pair<ld, ld> a, pair<ld, ld> b){ // Modulo
    return sqrt((a.ff-b.ff)*(a.ff-b.ff) + (a.ss-b.ss)*(a.ss-b.ss));
}

int esq(point a, point b, point e){ //-1=dir; 0=collinear; 1=esq;
    cod tmp = (b-a)^(e-a); // from a to b
    return (tmp > EPS) - (tmp < -EPS);
}

struct line{
    point p1, p2;
    cod a, b, c; // ax+by+c = 0;
    line(point p1=0, point p2=0): p1(p1), p2(p2){
        a = p1.y-p2.y;
        b = p2.x-p1.x;
        c = -(a*p1.x + b*p1.y);
    }
    line(cod a=0, cod b=0, cod c=0): a(a), b(b), c(c){}

    cod eval(point p){
        return a*p.x+b*p.y+c;
    }
    bool inside(point p){
        return eq(eval(p), 0);
    }
    point normal(){
        return point(a, b);
    }

    bool inside_seg(point p){
        return (inside(p) and
                min(p1.x, p2.x)<=p.x and p.x<=max(p1.x, p2.x) and
                min(p1.y, p2.y)<=p.y and p.y<=max(p1.y, p2.y));
    }

};

pair<ld, ld> inter(line l1, line l2){ // line intersection
    ld det = l1.a*l2.b - l1.b*l2.a;
    if(det==0) return {l1.p2.x, l1.p2.y};
    ld x = (l1.b*l2.c - l1.c*l2.b)/det;
    ld y = (l1.c*l2.a - l1.a*l2.c)/det;
    return {x, y};
}

int32_t main()
{sws;

    int n, H;
    cin >> n >> H;

    vp p(n);

    for(int i=0;i<n;i++)
        cin >> p[i].x >> p[i].y;

    point sauro = point(p.back().x, p.back().y+H);
    
    ld ans = 0;
    point M = point(sauro.x, 0);
    for(int i=n-1;i>=1;i--){

        if(esq(sauro, p[i], p[i-1])==-1){ // direita
            if(esq(sauro, p[i-1], M)==1){ // parte com capa
                pair<ld, ld> X = inter(line(p[i], p[i-1]), line(sauro, M));
                ans += norm({p[i-1].x, p[i-1].y}, X);
            }
        }else if(esq(sauro, p[i], p[i-1])==0){ // colinear
            if(esq(sauro, p[i], M)!=-1){
                ans += norm({p[i-1].x, p[i-1].y}, {p[i].x, p[i].y});
            }
        }

        // atualiza angulo max
        if(esq(sauro, M, p[i-1])==-1)
            M = p[i-1];
    }

    cout << fixed << setprecision(12) << ans << endl;
    

    return 0;

}