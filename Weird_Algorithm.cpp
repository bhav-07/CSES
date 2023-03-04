#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    if (n==1)
    {
        cout<<n<<" ";
        return 0;
    }
    
    cout<<n<<" ";
    do{
        if (n%2==0){
            n=n/2;
        }
        else{
            n=3*n + 1;
        }
        cout<<n<<" ";   
    }while(n>1);
    return 0;
}