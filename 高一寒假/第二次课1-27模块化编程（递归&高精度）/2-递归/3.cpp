#include <iostream>
//汉诺塔 
using namespace std;
int lf[101],md[101],rt[101];
void move(char a,char b,char c,int n){
//将n片从a借助b移动到c
    if(n==0) return ;//void返回空
    else{
        move(a,c,b,n-1);
        cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
        move(b,a,c,n-1);
    }
//这样写相比于n=1时结束递归，更简洁 
}
int main(){
    int n;
    cin>>n;
    move('A','B','C',n);
    system("pause");
    return 0;
}
