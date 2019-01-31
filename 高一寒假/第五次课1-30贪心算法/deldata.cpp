#include <iostream>
#include <cstring> 
using namespace std;
char s[241];
void dele(int loc,char s[]){
    for(int i=loc;s[i]!='\0';i++){
        s[i]=s[i+1];
    }
}
int main(){
    freopen("deldata.in","r",stdin);
    freopen("deldata.out","w",stdout);
    int n,j;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        j=0;
        while(s[j]-'0'<s[j+1]-'0'){
            j++;
        }
        dele(j,s);
    }
    cout<<s;
    //system("pause");
    return 0;
}
