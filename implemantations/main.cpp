#include <iostream>
#include <fstream>


using namespace std;

ifstream fin("date.in");



//matricea de adiacenta
int i, j, k, l, ex, b[100][100],a[100][100], aux;
void mda(int n)
{
    int a[n+1][n+1];
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        if(i==j)
        a[i][j]=0;
    else
    {

        fin>>ex;
        if(ex)
           {
           a[i][j]=1;

           }
           else
            {
           a[i][j]=0;

           }


    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
    }

}
int mda_file(int n, int a[100][100])
{
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    fin>>a[i][j];


}

void write(int n, int a[100][100])
{
    int s=0;
      for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i][j]==1)
            s++;

    cout<<a[i][j]<<" ";
    }
  cout<<endl;
}

}
void adjacency_list(int n, int a[100][100])
{
    for(i=0;i<n;i++)
    {   cout<<i<<"=";
        for(j=0;j<n;j++)
    {

        if(a[i][j]==1)
            cout<<j<<" ";

    }
    cout<<endl;
    }


}
void linked_list(int n, int a[100][100])
{
      for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {

        if(a[i][j]==1)
            cout<<"["<<i<<","<<j<<"]"<<" ";

    }

    }


}

void incidence_list(int n, int a[100][100])
{

  for(i=0;i<n;i++)
    {   cout<<i<<"=";
        for(j=0;j<n;j++)
    {

        if(a[i][j]==1)
           cout<<"["<<i<<","<<j<<"]"<<" ";

    }
    cout<<endl;
    }

}

void incidence_matrix(int n, int a[100][100])
{
    int m=0;
     for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
            if(a[i][j]==1)
                m++;

    }
    //getting the number of links(m)

        int k=0;
      for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
             {
            if(a[i][j]==1)
               {

                b[i][k]=1;
                b[j][k]=1;
                k++;
               }

        }



      for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            cout<<b[i][j]<<" ";

    cout<<endl;
        }


}
void nc(int n, int a[100][100])
{int nr, b[n+1];
    for(i=0;i<n;i++)
    {

    nr=0;
    for(j=0;j<n;j++)
    {
     if(a[i][j]==1)
            nr++;

    }
    b[i]=nr;

    }
    int c[n+1];
    for(i=0;i<n;i++)
        c[i]=i;
        cout<<endl;
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        if(b[j]<b[i])
        {
           aux=b[i];
        b[i]=b[j];
        b[j]=aux;
        aux=c[i];
        c[i]=c[j];
        c[j]=aux;

        }
        cout<<endl;
        for(i=0;i<n;i++)
            cout<<c[i]<< " ";



}
void prb15(int n, int a[100][100])
{
    int k,p;
    cout<<"Cati prieteni are persoana: ";
    cin>>k;
    int s=0;
    for(i=0;i<n;i++)
        if(a[k][i]==1)
         s++;
    cout<<endl;
    cout<<"Persoana "<<k<<" are "<<s<<" prieteni";
    cin>>p;
    cout<<"Urmatoarele persoana au minim "<<p<<" prieteni:";
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
            if(a[i][j]==1)s++;
        if(s>=p)
            cout<<i<<" ";
    }

}
int grad(int i,int n, int a[100][100])
{
    int sum=0;
for(j=0;j<n;j++)
        if(a[i][j]==1)
             sum++;
return sum;
}
 int prb16(int &n,int &m, int a[100][100], int b[100][100])
 {
     for(i=0;i<n;i++)
        if(grad(i,n,a)==0)
     {
         b[m-1][m]= 1;
         b[m][m-1] =1;
         m++;
         for(j=i;j<n;j++)
         for(k=0;k<n;k++)
         a[j][k]=a[j+1][k];
         n--;
         i--;




     }


 }

 void mdao(int n,int a[100][100])
 {


 }




int main()
{


  int n;
  fin>>n;
/* readfing from keyboard
    mda(n);
    */
//reading from file

  mda_file(n, a);
  write(n, a);

 //adjacency_list(n,a);
//linked_list(n, a);
//incidence_list(n,a);
//incidence_matrix(n, a);
//nc(n,a);
//prb15(n,a);
/*
fin>>m;
  mda_file(m,b);
cout<<endl;
  write(m,b);
prb16(n,m,a,b);
cout<<endl;
write(n,a);
cout<<endl;
write(m,b);
*/

    return 0;
}
