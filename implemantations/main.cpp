#include <iostream>

using namespace std;

//matricea de adiacenta
int i, j, ex;
void mda(int n)
{
    int a[n+1][n+1];
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        if(i==j)
        a[i][j]=0;
    else
    {
        cout<<"Exista nod intre "<<i<<"si "<<j<<" ?0/1";
        cin>>ex;
        if(ex)
           {
           a[j][i]=1;
           a[i][j]=1;
           }
           else
            {
           a[j][i]=0;
           a[i][j]=0;
           }


    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
    }

}


int main()
{


  int n;
cout<<"Cate noduri exista in graf?";
cin>>n;
    mda(n);
    return 0;
}
