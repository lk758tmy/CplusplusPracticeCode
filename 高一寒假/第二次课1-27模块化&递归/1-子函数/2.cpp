#include <iostream>
using namespace std;
void insert(int a[],int n){
    //int a[]传递一个数组作为参数 
    //无需return，因为实际上传递的是一个地址
    //子函数直接对地址，即原变量操作 
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
    insert(a,n);//此处，只写数组名即可
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    } 
    system("pause");
    return 0;
}
