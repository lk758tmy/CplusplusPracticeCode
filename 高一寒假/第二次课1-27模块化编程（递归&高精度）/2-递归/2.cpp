#include <iostream>
//�ݹ��Ҷ�������Լ�� 
using namespace std;
int gcd(int x,int y){
    return (x%y==0)?y:gcd(y,x%y);
/*
    ������һ���������ʽ���ȼ��ڣ�
    if(x%y==0) return y;
    else return gcd(y,x%y); 
*/
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        a[i]=gcd(a[i-1],a[i]);
    }
    cout<<a[n-1];
    system("pause");
    return 0;
}
