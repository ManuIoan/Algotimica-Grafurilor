#include <iostream>
#include <fstream>
#define NMAX 21
using namespace std;
short n, m, np, ns, ex, v, ok;
short a[NMAX][NMAX],pus[NMAX],x[NMAX], l;
ifstream f("int.in");
void back(short k)//backtracking
{
 short i,j;
 for(i=1; i<=n; i++)
 if(a[x[k-1]][i] && (!pus[i] || i==np))
 {
 pus[i]=1;
 x[k]=i;
 if(i == ns)
 {
 ex=1;
if(k<=l && x[k-1]==np)
{
 for(j=1; j<k; j++)
    if(x[j]==v)
    ok=1;

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
 cout<<"dati nodul de plecare:";
 cin>>np;
 cout<<endl<<"l==";
 cin>>l;
 cout<<endl<<"v=";
 cin>>v;
 //cout<<"dati nodul de sosire:";
 //cin>>ns;
 ex=0;
 x[1]=np;//aici se pune drumu???
 pus[np]=1;//se verifica care a fost vizitat...
 for(ns = 1; ns <=n; ns++)
 {
 if(ns != np)
 back(2);
 }
 if(!ex)
 cout<<"Nu exista lanturi elementare intre "<<np<<" si"<<ns;
 return 0;
}
