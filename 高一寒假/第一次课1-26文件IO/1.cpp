#include <iostream>
using namespace std;
int main(){
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    //把标准输入重定向到文件1.in 
    //把标准输出重定向到文件1.out 
    int a,b,s;
    cin>>a>>b;
    s=a+b;
    cout<<s;
    //system("pause");
    //这一行不能写，否则文件会多一行"请按任意键继续" 
    return 0;
}
