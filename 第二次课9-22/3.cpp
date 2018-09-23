#include <iostream>
using namespace std;
int main()
{
    double a,b,r;
    char x;//char为字符型 赋值:x='a'
    cin>>a>>x>>b;//相邻为不同类型，in时中间不用空格
    switch(x){//x应可以枚举
       case '+':
       //不需要{}，注意case后需要 ：
       //代表x='+'时，从这里执行到第一个break,然后移动到switch的 }
       //'+'处必须是常量
            r=a+b;
            cout<<r<<endl;
            break;
       case '-':
            r=a-b;
            cout<<r<<endl;
            break;
       case '*':
            r=a*b;
            cout<<r<<endl;
            break;
       case '/':
            r=a/b;
            cout<<r<<endl;
            break;
       default://如果均不成立，执行其下
            cout<<"Input Wrong"<<endl;
    }
    system("pause");
    return 0;
}
