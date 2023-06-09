#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start+ (end - start)/2;

    while (start<= end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start+ (end - start)/2;
    }
    return -1;
    
}


int main(){
    int even[6]={2,4,5,8,12,18};
    int odd[5]={3,6,11,14,16};

    int evenIndex = binarySearch(even, 6, 2);
    cout<< "Index of 0 is "<< evenIndex << endl;
    int oddIndex = binarySearch(odd, 5, 3);
    cout<< "Index of 0 is "<< oddIndex << endl;

    return 0;

} 
