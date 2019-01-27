#include <iostream>
using namespace std;
int main()
{
    int x,s;
    s=0;
    while(cin>>x){//重复到输入control+z为止 
        s+=x;
    }
    cout<<s<<endl;
    system("pause");
    return 0;
}
