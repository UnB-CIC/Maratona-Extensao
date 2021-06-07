#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    int n;
    ll a, b, c;
    ll x1, y1, x2, y2;
 
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> n;
    
    int resp=0;
 
    for(int i=0;i<n;i++) {
        cin >> a >> b >> c;
        bool lado1 = (a*x1+b*y1+c>0);
        bool lado2 = (a*x2+b*y2+c>0);
        if(lado1!=lado2)
            resp++;
    }
 
    cout << resp << endl;


    return 0;
}