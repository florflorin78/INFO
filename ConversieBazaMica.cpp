#include<iostream>
using namespace std;

int n, b, k=0, a[50]
int conv(int n, int b, int &k);

int main() {
    cout<<"baza"; cin>>b;
    cout<<"nr"; cin>>n;
    conv(n,b,k);
    for(i=k;i>=1;i--)
        cout<<a[i];
}
int conv(int n, int b, int &k) {
    if(n>0) {
        a[k]=n%b;
        k++;
        conv(n/b,b,k);
    }
}