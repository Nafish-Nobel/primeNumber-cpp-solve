//headings and library

#include<iostream>
using namespace std;

//swap function

void swapAlternates(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
        
    }
    
}

//print function
void printArry(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    
}

//main function
int main(){

    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};

    swapAlternates(even,8);
    printArry(even,8);
    
    cout<< endl;

    swapAlternates(odd,5);
    printArry(odd,5);

    return 0;
}