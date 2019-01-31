#include <iostream>
//�ݹ鷨fib 
using namespace std;
unsigned long long fib(unsigned long long n){
    if(n==1||n==2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main(){
    unsigned long long n;
    cin>>n;
    cout<<fib(n);
    system("pause");
    return 0;
}
