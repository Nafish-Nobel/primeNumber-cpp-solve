#include<iostream>
using namespace std;
//arry function
void printArry(int arr[], int size){
    //printing the arry
    cout << "printing the arry" <<endl;

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< "printing Done" <<endl;
    
}

int main(){
    int number[15];
    cout<< "value at 14 index: " << number[14] <<endl;

    int second[3]={5,7,11};
    cout<< "value at 2 index: " <<second[2] <<endl;

    int sec[4]={1};
    cout<< "value at 2 index: " <<sec[2] <<endl;



}