#include <iostream>
using namespace std;
int main()
{
    int i;//循环中（）内变量需先声明 
    for(i=10;i>=1;i=i-1){
    //变量初始值；继续循环的条件；一次循环之后变量的变化 
        cout<<i<<" ";
    }
    cout<<"fireoff!"<<endl;
    system("pause");
    return 0;
}
