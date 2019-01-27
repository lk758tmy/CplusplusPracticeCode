#include <iostream>
using namespace std;
int main()
{
    int i;
    double s;
    s=0;
    for(i=1;i<=100;i++){
        s=s+1.0/i;               
    }
    cout<<s<<endl;
    system("pause");
    return 0;
}
