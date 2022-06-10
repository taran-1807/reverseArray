//Given an array reverse the elements of the reverse
#include <iostream>

using namespace std;

// reversing the array
void reverseArrray(int arr[], int size){
    
    int start = 0;
    int end = size - 1;
    
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// printing the reversed array
void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
}

int main()
{
    // taking input : the size of the array
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    
    // declaring array
    int arr[100];
    
    // taking input : the elements of the array
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    reverseArrray(arr, n);
    printArray(arr, n);
    

    return 0;
}
