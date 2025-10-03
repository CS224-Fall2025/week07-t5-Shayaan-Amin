#include <iostream>
#include <cmath>
using namespace std;

int FindHappiness(int a){
    
    while (a>=10){
        int x=a%10;
        int y=a/10;
        a=pow(x,2)+pow(y,2);

    }
    return a==1;
}

int main(){
    cout<<"Entre 2 digit Number: ";
    int n;
    cin>>n;
    if (n<1){
        cout<<"invalid input"<<endl;
        cin>>n;
    }
    if (FindHappiness(n)){
        cout<<"happy number"<<endl;
    } else{
        cout<<"sad number"<<endl;
    }
    return 0;
}