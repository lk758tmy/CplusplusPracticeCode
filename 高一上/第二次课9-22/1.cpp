#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>0){
          cout<<"It's positive."<<endl;
    }else if(x==0){
          cout<<"It's zero."<<endl;
          //== ��ʾ���ڣ�= ��ʾ��ֵ 
    }else
          cout<<"It's negative."<<endl;
    //����һ�д���ʱ���Բ���{} 
    system("pause");
    return 0;
}
