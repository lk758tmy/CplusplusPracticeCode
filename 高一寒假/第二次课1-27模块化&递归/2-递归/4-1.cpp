#include <iostream>
#include <algorithm>
//�ݹ鷨���ֲ��� 
using namespace std;
/*��������Ƚ��鷳������ķ������� 
int location;
bool search(int a[],int left,int right,int key){
    int mid=(left+right)/2;
    if(a[mid]==key){
        location=mid;
        return true;
    }else if(mid==right){
        return false;
    }else{
        if(a[mid]>key) return search(a,left,mid-1,key);
        if(a[mid]<key) return search(a,mid+1,right,key);
    }
} */
int search(int a[],int left,int right,int key){
    int mid=(left+right)/2;
    if(left<=right){
        if(a[mid]==key) return mid;
        else if(a[mid]>key) return search(a,left,mid-1,key);
        else if(a[mid]<key) return search(a,mid+1,right,key);
    }else return -1;
}//�˷��ô����������� 
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
