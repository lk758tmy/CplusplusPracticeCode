#include <iostream>
using namespace std;
int a[1000];//全局变量默认值为0 
/*创建一个有1001个数的数组 
（下标为0--999，而非1--1000 */ 
int main()
{
    int i=0,s=0;
    while(cin>>a[i]){
        i++;
    }
    for(i=0;i<1000;i++){
        s=s+a[i];                   
    }
    cout<<s;
    system("pause");
    return 0;
}
