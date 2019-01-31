#include <iostream>
#include <string>
#include <stack>
using namespace std;
string a;
int main(){
    freopen("match.in","r",stdin);
    freopen("match.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        stack<char> s;
        bool flag=true;
        cin>>a;
        for(int j=0;j<a.size();j++){
            if(a[j]=='('||a[j]=='[') s.push(a[j]);
            else if(a[j]==')'){
                if(s.empty()||s.top()!='('){
                    flag=false;
                    break;
                }else{
                    s.pop();
                }
            }else if(a[j]==']'){
                  if(s.empty()||s.top()!='['){
                    flag=false;
                    break;
                }else{
                    s.pop();
                }
            }
        }
        if(flag==true&&s.empty()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    //system("pause");
    return 0;
}
