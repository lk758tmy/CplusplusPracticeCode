
#include <iostream>
using namespace std;
int a[10000];
int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j])
                swap(a[i],a[j]); 
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    getchar();
    getchar();//��ȡ�س��� ���� system("pause"); 
    return 0;
}//�Ƚ������㷨 
