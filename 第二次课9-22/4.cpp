#include <iostream>
using namespace std;
int main()
{
    int sc;
    char ty;
    cin>>sc;
    if(sc<0|| sc>100)
    // ||����� &&������ ������� 
        //ty='Error'; �������ֻ���'r',charΪ1λ 
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
    ������ ���ж�60<=sc ���� 1(��)�� 0(��)
    Ȼ���ж� 0��1<75�Ƿ����[������Ľ����Զ����1]��
    Ӧ����дΪ
    sc>=60 && sc<75   
    */ 
}
