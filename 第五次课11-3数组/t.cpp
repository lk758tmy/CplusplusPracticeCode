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
  }while(k==0);//do while����ӷֺ� 
  cout<<k;
  system("pause") ;
  return 0;
}
/*�����������ϣ�ȫ�� M ��ͬѧ��Χ��һȦ���� 1 �� M ˳���š�Ȼ
��Ӷ�ͷ��ʼ1��2��3��������3�ĳ��У�ʣ�µ�ͬѧ�ٴ�ͷ��ʼ1��2��3��������
ֱ��ʣ�����һ��ͬѧʱ������ͬѧ���Ǳ���ȵġ�����ʹ�ߡ���
������ͬѧԭ����λ���Ƕ��٣�*/ 
