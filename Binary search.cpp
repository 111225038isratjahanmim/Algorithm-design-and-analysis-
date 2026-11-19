#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int low = 0, high;
    high = n - 1;
    
    while (low <= high){
        int mid = low + (high-low)/2;
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[10], n, target, i;
    
    cout << "Enter number of elements in array :" << endl;
    cin >> n;
    
    cout << "Enter " << n << " integers :" << endl;
    for (i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << "Enter element to search :" << endl;
    cin >> target;
    
    int ans = binarySearch(arr, n, target);
    
    if (ans != -1){
        cout << "Element found at index:" << ans << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
}
