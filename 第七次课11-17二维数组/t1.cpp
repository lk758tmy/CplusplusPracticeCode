#include <iostream>//�����ת�� 
using namespace std;
int m,n,a[101][101],b[101][101];
int main()
{
    cin>>m>>n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[j][i]=a[i][j]; 
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<b[i][j]<<' ';//��˫���ž���
        cout<<endl; 
    }
    system("pause");
    return 0;
}
