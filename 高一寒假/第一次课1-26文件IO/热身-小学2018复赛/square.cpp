#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    freopen("square.in","r",stdin);
    freopen("square.out","w",stdout);
    int n,s;
    double t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        t=sqrt(double(s));
        if(t==int(t))
            cout<<s<<endl;      
    }
    return 0;
}
