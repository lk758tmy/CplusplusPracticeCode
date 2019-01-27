#include <iostream>
using namespace std;
int dct,a[41],cct;
int count(int n){int i;
  for(i=1;i<=n;i++){
    if(a[i]==0){
      cct++;      
      if(cct==3){
        cct=0;
        dct++;
        if(dct==n){
		  return i;
		}
        a[i]=1;
      }
    }
  }   
  return 0;
}
int main(){
  int n,i,k=1;
  cin>>n;
  for(i=n+1;i<=40;i++){
    a[i]=1;
  }
  /*for(i=1;i<=40;i++){
  	cout<<i<<" "<<a[i]<<endl;
  } */ 
  do{
    k=count(n);  
  }while(k==0);//do while后需加分号 
  cout<<k;
  system("pause") ;
  return 0;
}
/*新年联欢会上，全班 M 名同学，围成一圈，按 1 至 M 顺序编号。然
后从队头开始1、2、3报数，数3的出列，剩下的同学再从头开始1、2、3报数……
直到剩下最后一名同学时，这名同学就是本年度的“幸运使者”。
问这名同学原来的位置是多少？*/ 
