#include <iostream>
using namespace std;
void insert(int a[],int n){
    //int a[]����һ��������Ϊ���� 
    //����return����Ϊʵ���ϴ��ݵ���һ����ַ
    //�Ӻ���ֱ�ӶԵ�ַ����ԭ�������� 
    for(int i=1;i<n;i++)
        for(int j=i;j>0&&a[j]<a[j-1];j--)
            swap(a[j-1],a[j]);
} 
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insert(a,n);//�˴���ֻд����������
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    } 
    system("pause");
    return 0;
}
