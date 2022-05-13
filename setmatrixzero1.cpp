#include<stdio.h>
#include <iostream>
using namespace std;
const int m=4, n=3;
void setmatrix(int arr[m][n],int a, int b, int n, int m)
{
    for(int i=0;i<m;i++)
    {
        if(arr[i][b]!=0)
        {
            arr[i][b]=-1;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if(arr[a][j]!=0)
        {
        arr[a][j]=-1;
        }
    }
    
}
void checkzero(int arr[m][n], int n, int m){
    for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j]==0)
            {
               
                setmatrix(arr,i,j,m,n);
                
            }
        }
        
    }
}

int main()
{

    int arr[m][n]={{1,2,3},{4,0,5},{5,5,1},{2,2,9}};
    
    
    checkzero(arr,m,n);

for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j]==-1)
            arr[i][j]=0;
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
