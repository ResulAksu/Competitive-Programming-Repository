#include <bits/stdc++.h>
#define PI 3.14159265
using namespace std;
int xA[500005],yA[5000005], n;
double mwe, mea, xwe, xea;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed;
    cout<<setprecision(8);
    cin>>n;
    for(int i=0;i<n;i++) cin>>xA[i]>>yA[i];
    xwe=xA[0]; xea=xA[n-1];
    for(int i=1;i<n-1;i++) mwe=max(mwe,(yA[i]*1.0)/(xA[i]*1.0-xwe));
    for(int i=1;i<n-1;i++) mea=max(mea,(yA[i]*1.0)/(xea-xA[i]*1.0));
    cout<<max(atan(mwe),atan(mea))* 180 / PI<<endl;
}