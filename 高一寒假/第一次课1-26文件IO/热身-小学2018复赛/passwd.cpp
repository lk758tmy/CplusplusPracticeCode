#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    freopen("passwd.in","r",stdin);
    freopen("passwd.out","w",stdout);
    string pwd;
    int t=1;
    bool flag=true;
    cin>>pwd;
    for(int i=0;i<pwd.size();i++)
        if(pwd[i]!=pwd[pwd.size()-i-1]){
            flag=false;
            break;        
        }
    if(flag==false) t=0;
    for(int i=t;i<pwd.size();i+=2)
        cout<<pwd[i];
    return 0;
}
