#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int q,b,s,g,x;
    for(q=1;q<=9;q=q+1){
      //b=0;
      //s=0;
      //g=0;
      //���裬for�ĵ�һ�������Ѿ����� 
      for(b=0;b<=9;b=b+1){
        for(s=0;s<=9;s=s+1){
          for(g=0;g<=9;g=g+1){
            x=pow(q,4.0)+pow(b,4.0)+pow(s,4.0)+pow(g,4.0);
            /*pow(a,b)��ʾa��b�η�����Ҫinclude cmath�� 
            a,b����һ����ҪΪʵ������*/ 
              if(x==1000*q+100*b+10*s+g)
                cout<<x<<endl;
          }
        }
      }
    }
	system("pause");
	return 0;
}//õ�廨�� (ˮ�ɻ���:3λ �������:5λ) 
