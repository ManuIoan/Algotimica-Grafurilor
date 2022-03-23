#include <iostream>
#include <fstream>


using namespace std;

ifstream fin("date.in");



//matricea de adiacenta
int i, j, ex, b[100][100];
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
cout<<endl<<"Avem un numar de "<<s/2<<" muchii.";
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

int main()
{


  int n;
fin>>n;
/* readfing from keyboard
    mda(n);
    */
//reading from file
  int a[100][100];
  mda_file(n, a);
 // write(n, a);
 //adjacency_list(n,a);
//linked_list(n, a);
//incidence_list(n,a);
incidence_matrix(n, a);

    return 0;
}
