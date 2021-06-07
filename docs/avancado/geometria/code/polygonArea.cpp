#include <bits/stdc++.h>

using namespace std;

typedef long long cod;

struct point{
    cod x, y;

    point(cod x=0, cod y=0): x(x), y(y){}

    point operator+(point o){
        return point(o.x+x, o.y+y);
    }
    point operator-(point o){
        return point(x-o.x, y-o.y);
    }
    cod operator*(const point &o) const{ // dot
        return x * o.x + y * o.y;
    }
    cod operator^(const point &o) const{ // cross
        return x * o.y - y * o.x;
    }

};

cod area(vector<point> p){
    cod ans = 0;
    for(int i=2;i<(int)p.size();i++)
        ans += (p[i]-p[0])^(p[i-1]-p[0]);
    return abs(ans);
}

int main(){
    int n;
    cin >> n;
    vector<point> p(n);

    for(int i=0;i<n;i++)
        cin >> p[i].x >> p[i].y;

    cout << area(p) << endl;

    return 0;
}