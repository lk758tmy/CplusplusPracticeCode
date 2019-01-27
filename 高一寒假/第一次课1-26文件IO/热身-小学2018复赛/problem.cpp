#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    freopen("problem.in","r",stdin);
    freopen("problem.out","w",stdout);
    int n;
    cin>>n;
    if(n<4) cout<<0;
    else if(n==4) cout<<1;
    else if(n==5) cout<<7;
    else if(n>5){
        cout<<72;
        for(int i=6;i<n;i++){
            cout<<0;
        }
    }
    return 0;
}
