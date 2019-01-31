#include <iostream>
#include <stack>
using namespace std;
char a[31];
int s[1001];
stack<char> t;
int main(){
    freopen("angel.in","r",stdin);
    freopen("angel.out","w",stdout);
    int n,cnt=1;
    cin>>n;
    cin>>a;
    int top=-1;
    for(int i=0;i<n;i++){
        if(a[i]=='A'){
            s[++top]=cnt;
            cnt++;
        }else if(a[i]=='B'){
            t.push(cnt);
            if(t.size()>5){
                cout<<"No";
                return 0;
            }
            cnt++;
        }else if(a[i]=='C'){
            if(t.empty()){
                cout<<"No";
                return 0;
            }
            s[++top]=t.top();
            t.pop();
        }
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<=top;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
