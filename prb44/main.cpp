#include <iostream>
#include <fstream>
#define NMAX 21
using namespace std;
short n,m,np,ns,ex;
short a[NMAX][NMAX],pus[NMAX],x[NMAX], mat[NMAX][NMAX];
ifstream f("int.in");

int v0(int k)
{
    int j;
    for(j=1;j<=k;j++)
    if(x[j]%3==0)
    return 1;

    return 0;

}
int v1(int k)
{
    int j;
    for(j=1;j<=k;j++)
    if(x[j]%3==1)
    return 1;

    return 0;

}
int v2(int k)
{
    int j;
    for(j=1;j<=k;j++)
    if(x[j]%3==2)
    return 1;

    return 0;

}




void back(short k)
{
 short i,j;
 for(i=1; i<=n; i++)
 if(a[x[k-1]][i] && !pus[i])
 {
 pus[i]=1;
 x[k]=i;
 if(i == ns)
 {
 ex=1;

//cout<<v0(k);
 if(v0(k) && v1(k) && v2(k))
{



 for(j=1; j<=k; j++)
 cout<<x[j]<<' ';
 cout<<endl;
}
 }
 else back(k+1);
 pus[i]=0;
 }
}
int main()
{
 short i,j,v1,v2;
 f>>n;
 for(i=1; i<=n; i++)
 for(j=1; j<=n; j++)
 f>>a[i][j];
 //cout<<"dati nodul de plecare:";
 //cin>>np;
 //cout<<"dati nodul de sosire:";
 //cin>>ns;
 ex=0;
 //x[1]=np;
 //pus[np]=1;
 for(np=1;np<=n;np++)
 {
    for(j=1;j<=n;j++)
    {
        x[j]=0;
        pus[j]=0;
    }
     x[1]=np;
     pus[np]=1;


 for(ns = 1; ns <=n; ns++)
 {
 if(ns != np)
 back(2);
 }
 }

 cout<< endl;





 return 0;
}
