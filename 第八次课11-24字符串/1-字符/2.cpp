#include <iostream>
using namespace std;
int main(){
    int n,i,a,b,r,min=2147483647;
    char x;
    cin>>n;
    for(i=0;i<n;i++){
         cin>>a>>x>>b;
         if(x=='+')r=a+b;
         if(x=='-')r=a-b;
         if(x=='*')r=a*b;
         if(r<min)min=r;
    }
    cout<<min<<'\n';
    system("pause");
    return 0;
}
