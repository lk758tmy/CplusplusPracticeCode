//百钱百鸡问题 
#include <iostream>
using namespace std;
int main()
{
    int g,m,x;
    for(g=0;g<=20;g++){
        for(m=0;m<=(100-g*5)/3.0 && m<=33;m++){
            //for(x=0;x<=(100-g*5-m*3)*3 && g+m+x<=100;x++){
                x=100-g-m;
                if(g+m+x==100 && g*5+m*3+x/3.0==100)
                    cout<<g<<" "<<m<<" "<<x<<endl;
            //}                   
        }                       
    } 
    system("pause");
    return 0;
}
