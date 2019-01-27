#include <iostream>
using namespace std;
int s[100],yu[100],num[100];
int main()
{
    int i,j,n,shu,wai;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>yu[i]>>shu>>wai;
        s[i]=yu[i]+shu+wai;
        num[i]=i+1;                 
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(s[i]<s[j]){
                swap(s[i],s[j]);
                swap(yu[i],yu[j]);
                swap(num[i],num[j]);              
            }                   
            if(s[i]==s[j] && yu[i]<yu[j]){
                swap(yu[i],yu[j]);
                swap(num[i],num[j]);              
            }
            if(s[i]==s[j] && yu[i]==yu[j] && num[i]>num[j]){
                swap(num[i],num[j]);           
            }
        }    
    }
    for(i=0;i<n;i++){
        cout<<s[i]<<" "<<num[i]<<endl;                 
    }
    system("pause");
    return 0;
}//按照总分高--语文高--学号小的顺序排序
 
