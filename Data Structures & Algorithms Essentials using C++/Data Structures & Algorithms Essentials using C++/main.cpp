#include <iostream>

using namespace std;

myArr(int arr[]){
    for(int i=0; i<l; i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int l = sizeof(arr)/sizeof(int);
    for(int i=0; i<l; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"-------------"<<endl;
    myArr(arr);
    return 0;
}
