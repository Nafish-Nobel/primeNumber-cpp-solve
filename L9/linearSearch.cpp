#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

}

int main(){
    int arr[10]= {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << "Enter the element to seach for " <<endl;

    int key;
    cin>> key;

    bool found = search(arr, 10, key);

    if(found){
        cout<< "key is found " <<endl;
    }
    else{
        cout<< "key is absent" <<endl;
    }

    return 0;
}
