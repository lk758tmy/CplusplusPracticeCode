#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    char a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j])
                swap(a[i],a[j]);
    //�ַ��Ƚϴ�С�Զ�����ascii��˳�����
    for(i=0;i<n;i++)
        cout<<a[i];
    cout<<endl;
    system("pause");
    return 0;
}
