//headings and library

#include<iostream>
using namespace std;

//reverse function

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);

        start ++ ;
        end --;
    }
}

//print function

void printArry(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

//main function

int main(){

    //arry lists
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};
    
    //call reverse function

    reverse(arr, 6);
    reverse(brr, 5);

    //call printArry function

    printArry(arr, 6);
    printArry(brr, 5);

    return 0;
}