#include<iostream>
using namespace std;
int main() {
int a[10][10], i, j, x, y, m, n;
//init
for(i=1;i<=10;i++)
    for(j=1;j<=10;j++) a[i][j]=0;

//citire
cout<<"n="; cin>>n;
cout<<"m="; cin>>m; 
for(i=1;i<=m;i++) {
    cout<<"muchia"<<i<<":"; 
    cin>>x>>y;
    a[x][y]=1;
    a[y][x]=1;
    }

//afisare
cout<<"Matricea de adiacenta:"<<endl;
for(i=1;i<=n;i++) {
    for(j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
    }
}