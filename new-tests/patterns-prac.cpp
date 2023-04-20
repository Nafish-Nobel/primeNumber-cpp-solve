#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter your number: " <<endl;
    cin>> n;

    int i = 1;
    int count = 1;
    while(i<=n){
        int j = 1;
        while (j<=n)
        {
            
        cout<<count<< " ";
        count = count + 1;
        j = j + 1;
        }
        cout<<endl;
        i = i + 1;
        
    }


//********************************************//

    // int n;
    // cout<< "enter your number: " <<endl;
    // cin>> n;

    // int i = 1;

    // while (i<=n)
    // {
    //     int j =1;
    //     while (j<=n)
    //     {
    //         cout<<j; //for reverse//n-j+1
    //         j = j +1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
        
    // }

    //********************************************//
    
}