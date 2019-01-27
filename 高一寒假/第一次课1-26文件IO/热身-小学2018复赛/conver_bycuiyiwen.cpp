#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char ss[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G'};
int main()
{
    freopen("conver.in","r",stdin);
    freopen("conver.out","w",stdout);
    int m,n,sum=0;
    string s;
    cin>>n>>s>>m;
    for(int i=0;i<s.size();i++)
    {
        
        sum*=n;
        if(s[i]>='0'&&s[i]<='9')
            sum+=s[i]-'0';
        else
            sum+=s[i]-'A'+10;
    }
    //cout<<sum<<endl;
    char a[10000];
    int l=0;
    while(sum>0)
    {
        a[l]=ss[sum%m];
        sum/=m;
        l++;
    }
    for(int i=l-1;i>=0;i--)
            cout<<a[i];
    //system("pause");
    return 0;
}
