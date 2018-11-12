#include <iostream>
#include <cmath>
//验证哥德巴赫猜想 子函数法 
using namespace std;
bool prime(int x){
    int j;//函数内局部变量 
    double k;
    k=sqrt(x);
    if(x<=1)
        return false;
    for(j=2;j<=k;j++){
        if(x%j==0)
            return false;   
    }
    return true;
} //需要调用的子函数（子程序）需要放在最前 

int main(){
    int i,n;
    cin>>n;
    for(i=2;i<=n;i++){
        if(prime(i)==true && prime(n-i)==true){
			cout<<n<<"="<<i<<"+"<<n-i<<endl;
            break;
        }
    }
    system("pause");
    return 0;
} 
