#include <iostream>
using namespace std;
#define M 10
//等价于const int M=10;
void push(int a[],int &top){//传址 
    if(top==M-1) cout<<"Error:Full"<<endl;
    else{
        int x;
        cout<<">>";
        cin>>x;
        a[++top]=x;
    }
    return ;
}
void pop(int a[],int &top){//传址 
    if(top==-1) cout<<"Error:Empty"<<endl;
    else{
        cout<<"<<"<<a[top]<<endl;
        top--;
    }
    return ;
}
void print(int a[],int &top){//传址 
    int i;
    cout<<top+1<<" elements:"<<endl;
    for(int i=0;i<=top;i++) cout<<a[i]<<' ';
    cout<<endl;
    return ;
}
int main(){
    int c,top,s[M];
    top=-1; 
    while(1){//一直循环 
            cout<<"Op Number:"<<endl;
            cout<<"0:End 1:Push 2:Pop 3:Print >>";
            cin>>c;
            if(!c) break;
            else if(c==1) push(s,top);
            else if(c==2) pop(s,top);
            else if(c==3) print(s,top);
            else cout<<"Error:Wrong"<<endl;
            cout<<endl;
    }   
    cout<<endl<<"Test ends."<<endl;
    getchar();getchar();
    return 0;
}
