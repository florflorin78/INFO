#include<iostream>
#include<math.h>
using namespace std;

int b, n, a[100], p=1, i;
int conv(int b, int i);

int main() {
    cout<<"baza = "; cin>>b;
    cout<<"nr cifre  = "; cin>>n;
    for(i=n-1;i>=0;i--)
        cin>>a[i];

    cout<<"numarul";
    for(i=n-1;i>=0;i--) {
        cout<<a[i];
        cout<<"in baza "<<b<<" transformat in baza 10 este "<<conv(b,0);
    }
}

int conv(int b, int i) {
    if(i<n) return conv(b,i+1) + a[i]*pow(b,i);
    else return 0;
}