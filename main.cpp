#include <iostream>
using namespace std;

int main() {
    int n=0;
    int i=1;
    int fib=1;
    int fib_2=1;
    int somma=0;
    cin>>n;
    if(n>=2){
        cout<<fib<<endl;
        cout<<fib_2<<endl;
        while(i<=(n-2)){
            somma=fib+fib_2;
            fib=fib_2;
            fib_2=somma;
            cout<<somma<<endl;
            i++;
        }
    }else{
        cout<<"errore"<<endl;
    }
    return 0;
}
