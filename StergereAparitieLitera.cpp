#include<iostream>
#include<cstring>
using namespace std;

char s[250], c;
int stergere(char s[], char c);

int main() {
    cin>>s;
    cin>>c;
    stergere(s,c);
    cout<<s;
}

int stergere(char s[], char c) {
    char *p;
    p=strchr(s,c);
    if(p) {
        strcpy(p,p+1);
        stergere(s,c);
    }
}