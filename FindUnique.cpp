#include<iostream>

using namespace std;

int findUnique(int arr[],int size);
void printArray(int arr[],int size);

int main(){

    int n,arr[15];

    cout<<"Enter a number : "<<endl;
    cin>>n;
     cout<<"Enter element in a aaray : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    printArray(arr,n);

    int result = findUnique(arr,n);

    cout<<"Unique number : "<<result;

    
}
void printArray(int arr[],int size){
      
      for (int i = 0; i < size; i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;
}
int findUnique(int arr[],int size){

    int ans = arr[0];

    for (int i = 1; i < size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}