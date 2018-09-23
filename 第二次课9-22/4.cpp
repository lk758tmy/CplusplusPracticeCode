#include <iostream>
using namespace std;
int main()
{
    int sc;
    char ty;
    cin>>sc;
    if(sc<0|| sc>100)
    // ||代表或 &&代表且 ！代表非 
        //ty='Error'; 这种情况只输出'r',char为1位 
        ty='X';
    else if(sc>=85)
        ty='A';
    else if(sc>=75)
        ty='B';
    else if(sc>=60)
        ty='C';
    else
        ty='D';
    cout<<ty<<endl;
    system("pause");
    return 0;
    /*
    60<=sc<75
    意义是 先判断60<=sc 返回 1(真)或 0(假)
    然后判断 0或1<75是否成立[因此它的结果永远会是1]；
    应当书写为
    sc>=60 && sc<75   
    */ 
}
