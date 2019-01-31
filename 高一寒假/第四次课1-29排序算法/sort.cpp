#include <iostream>
//ÊÖĞ´¿ìËÙÅÅĞò 
using namespace std;
void quick(int left,int right,int s[]){
    int key=s[left];
    int i=left,j=right;
    if(j<=i) return ;
    while(j>i){
        while(s[j]>=key){
            if(j==i) break;
            j--;
        }
        while(s[i]<=key){
            if(j==i) break;
            i++;
        }
        if(j!=i) swap(s[i],s[j]);
    }
    swap(s[left],s[i]);
    quick(left,i-1,s);
    quick(i+1,right,s);
}
int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    quick(0,n-1,s);
    for(int i=0;i<n;i++) cout<<s[i]<<' ';
    system("pause");
    return 0;
}
