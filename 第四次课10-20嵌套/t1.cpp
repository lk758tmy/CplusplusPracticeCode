#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int q,b,s,g,x;
    for(q=1;q<=9;q=q+1){
      //b=0;
      //s=0;
      //g=0;
      //无需，for的第一个条件已经定义 
      for(b=0;b<=9;b=b+1){
        for(s=0;s<=9;s=s+1){
          for(g=0;g<=9;g=g+1){
            x=pow(q,4.0)+pow(b,4.0)+pow(s,4.0)+pow(g,4.0);
            /*pow(a,b)表示a的b次方（需要include cmath） 
            a,b至少一个需要为实属类型*/ 
              if(x==1000*q+100*b+10*s+g)
                cout<<x<<endl;
          }
        }
      }
    }
	system("pause");
	return 0;
}//玫瑰花数 (水仙花数:3位 五角星数:5位) 
