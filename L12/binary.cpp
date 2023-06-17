#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }

        if (key> arr[mid])
        {
            start = mid +1;
        }
        else{
            end = mid-1;
        }
        mid = start +(end-start)/2;
        
    }

    return -1;
    
}

int main(){
    
    int even[6]= {2,4,6,8,12,18};
    int odd[5]={3,6,11,14,16};

    int evenIndex = binarySearch(even, 6, 2);
    cout<< "Index of 0 is "<< evenIndex << endl;
    int oddIndex = binarySearch(odd, 5, 3);
    cout<< "Index of 0 is "<< oddIndex << endl;

    return 0;
}

int findPeak(int arr[], int n){
    int s= 0, e=n-1;
    int mid = s+ (e-s)/2;
    
    while (s<e)
    {
        if (arr[mid]< arr[mid-1])
        {
            s= mid+1;
        }
        else
        {
            e= mid+1;
        }
        mid =s + (e-s)/2;
        
    }
    return s;
    
}
