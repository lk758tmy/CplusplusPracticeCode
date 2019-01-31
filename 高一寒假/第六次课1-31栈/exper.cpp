#include <iostream>
#include <cstring> 
using namespace std;
struct mum{
    char type;
    double num;
    char sym;
}s[2001],tmp[2001],in[2001];
int tops=-1,topt=-1,topi=-1;
int main(){
    freopen("exper.in","r",stdin);
    freopen("exper.out","w",stdout);
    int a;
    char b;
    while(cin>>a){
        topi++;
        in[topi].type='i';
        in[topi].num=a;
        if(cin>>b&&(b=='+'||b=='-'||b=='*'||b=='/')){
            topi++;
            in[topi].type='c';
            in[topi].sym=b;
        }
    }//以上 输入
    for(int i=topi;i>-1;i--){
        if(in[i].type=='i'){
            tops++;
            s[tops].type='i';
            s[tops].num=in[i].num;
        }else{
            b=in[i].sym;
            if(b=='+'||b=='-')
                while(topt!=-1&&(tmp[topt].sym=='*'||tmp[topt].sym=='/')){
                    tops++;
                    s[tops].type='c';
                    s[tops].sym=tmp[topt].sym;
                    topt--;
                }
            topt++;
            tmp[topt].type='c';
            tmp[topt].sym=b;
        }
    }
    while(topt>-1){
        tops++;
        s[tops].type='c';
        s[tops].sym=tmp[topt].sym;
        topt--;
    }
    //以上 中缀转前缀 
    double x=0,y=0,r=0;
    char t;
    topt=-1;
    for(int i=0;i<=tops;i++){
        if(s[i].type=='i'){
            topt++;
            tmp[topt].type='i';
            tmp[topt].num=s[i].num;
        }else{
            t=s[i].sym;
            x=tmp[topt].num;
            y=tmp[topt-1].num;
            if(t=='+') r=x+y;
            else if(t=='-') r=x-y;
            else if(t=='*') r=x*y;
            else if(t=='/') r=x/y;
            topt--;
            tmp[topt].type='i';
            tmp[topt].num=r;
        }
    }
    //以上 运算 
    cout<<int(tmp[0].num+0.5);
    //system("pause");
    return 0;
}
