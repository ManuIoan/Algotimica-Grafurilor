#include <iostream>
#include <fstream>
ifstream f("date.in");

using namespace std;
int n, a[100][100];
void matrice()
{
    f>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {f>>x
    a[i][j]=x;
        }


}
void sch()
{

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {if(i%2==1 && j%2==1)
        a[i][j]=1     }


}
void citire()
{

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cout<<a[i][j]<<"";
        }
        cout<<endl;
    }


}

int main()
{

    return 0;
}
