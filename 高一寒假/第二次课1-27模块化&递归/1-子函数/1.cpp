#include <iostream>
using namespace std;
void increase(int &x,int &y,int &z){
//int &x表示传递的并非一个 值，而是一个 地址
//子程序直接对传进来的内存地址做操作
//故不同返回，原来的变量 a b c已经被改变
//（正常的return只能返回一个量）这回总方法可返回多个量 
     x++;
     y++;
     z++;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    increase(a,b,c);
    cout<<a<<' '<<b<<' '<<c; 
    system("pause");
    return 0;
}
