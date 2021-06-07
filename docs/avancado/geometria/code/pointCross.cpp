#include <bits/stdc++.h>

using namespace std;

typedef long long cod;

struct point{
    cod x, y;

    point(cod x=0, cod y=0): x(x), y(y){}

    double modulo(){
        return sqrt(x*x + y*y);
    }

    point operator+(point o){
        return point(o.x+x, o.y+y);
    }

    point operator-(point o){
        return point(x-o.x, y-o.y);
    }

    cod operator^(point o){
        return x * o.y - y * o.x;
    }

};

int esq(point p1, point p2, point p3){
    cod ans = (p2-p1)^(p3-p1);
    if(ans==0) return 0; // meio
    if(ans<0) return -1; // direita
    else return 1; // esquerda
}

int main(){
    int t;
    cin >> t;

    point p1, p2, p3;

    for(int i=0;i<t;i++){
        cin >> p1.x >> p1.y;
        cin >> p2.x >> p2.y;
        cin >> p3.x >> p3.y;

        int ans = esq(p1, p2, p3);

        if(ans==1) cout << "LEFT\n";
        else if(ans==-1) cout << "RIGHT\n";
        else cout << "TOUCH\n";
    }

    return 0;
}