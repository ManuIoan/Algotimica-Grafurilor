#include <iostream>
#include <fstream>
#define NMAX 21
using namespace std;
short n,m,np,ns,ex;
short a[NMAX][NMAX],pus[NMAX],x[NMAX], mat[NMAX][NMAX];
ifstream f("int.in");
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
     mat[np][i]=1;
     cout<<endl<<np<<" "<<k<<endl;
 ex=1;
 for(j=1; j<=k; j++)
 cout<<x[j]<<' ';
 cout<<endl;
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
    cout<<endl<<endl<<"np="<<np<<endl;

 for(ns = 1; ns <=n; ns++)
 {
 if(ns != np)
 back(2);
 }
 }

 cout<< endl;

 for(i=1; i<=n; i++)
 {
 for(j=1; j<=n; j++)
 cout<<mat[i][j];
 cout<<endl;
 }



 return 0;
}
