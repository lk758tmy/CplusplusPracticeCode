#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=1){//��n!=1����ѭ��һ�Σ�Ȼ�����ж� 
        if(n%2==1)
            n=n*3+1;
        else
            n=n/2;
    cout<<n<<endl;
    }
    system("pause");
    return 0;
}//�ǹȲ��� 
