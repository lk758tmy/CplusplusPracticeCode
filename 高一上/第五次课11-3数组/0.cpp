#include <iostream>
#include <cmath>
//��֤��°ͺղ��� �Ӻ����� 
using namespace std;
bool prime(int x){
    int j;//�����ھֲ����� 
    double k;
    k=sqrt(x);
    if(x<=1)
        return false;
    for(j=2;j<=k;j++){
        if(x%j==0)
            return false;   
    }
    return true;
} //��Ҫ���õ��Ӻ������ӳ�����Ҫ������ǰ 

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
