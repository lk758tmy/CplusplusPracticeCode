#include <iostream>
using namespace std;
int a[1000];//ȫ�ֱ���Ĭ��ֵΪ0 
/*����һ����1001���������� 
���±�Ϊ0--999������1--1000 */ 
int main()
{
    int i=0,s=0;
    while(cin>>a[i]){
        i++;
    }
    for(i=0;i<1000;i++){
        s=s+a[i];                   
    }
    cout<<s;
    system("pause");
    return 0;
}
