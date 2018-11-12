#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=1){//若n!=1，则循环一次，然后再判断 
        if(n%2==1)
            n=n*3+1;
        else
            n=n/2;
    cout<<n<<endl;
    }
    system("pause");
    return 0;
}//角谷猜想 
