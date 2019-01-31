#include <iostream>
#include <algorithm>
//非递归法二分查找 
using namespace std;
int search(int a[],int left,int right,int key){
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        if(a[mid]==key) return mid;
        else if(a[mid]>key) right=mid-1;
        else if(a[mid]<key) left=mid+1;
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>key;
    sort(a,a+n);
    
    cout<<search(a,0,n-1,key);
    system("pause");
    return 0;
}
