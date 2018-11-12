#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i,k,j;
    bool a;
    cin>>n;
    for(i=2;i<=n;i++){
        a=true;
        for(j=2;j<=sqrt(i*1.0);j++){
            if(i%j==0){
                a=false; 
                break; 
            }
        }         
        if(a==true){
            k=n-i;
            if(k>=i){
                a=true;
                for(j=2;j<=sqrt(k*1.0);j++){
                   if(k%j==0){  
                        a=false;
                        break;
                   }
                }
                if(a==true){
                    cout<<n<<"="<<i<<"+"<<k<<endl;
                system("pause");
                return 0;            
                }
            }
        }
    }
    return 0;
}
//6-10000000内的哥德巴赫猜想验证 
