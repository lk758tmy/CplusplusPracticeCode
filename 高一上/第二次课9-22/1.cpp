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
          //== 表示等于，= 表示赋值 
    }else
          cout<<"It's negative."<<endl;
    //仅有一行代码时可以不加{} 
    system("pause");
    return 0;
}
