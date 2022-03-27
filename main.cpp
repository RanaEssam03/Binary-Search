#include <iostream>
#include <vector>
using namespace std;
int binarySearch(int key, vector <int> arr);
int main() {
    int num;
  vector <int> arr= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "Dear user, Please enter a number(from 1 to 10) : ";
  cin >> num;
  cout <<"This number is fond at index: " <<binarySearch(num, arr);
    return 0;
}

int binarySearch(int key,vector<int> arr){
    int high = arr.size()-1;
    int low = 0;
    int mid = 4;
    while (true){
        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid]>key ){
            high = mid-1;
            low = 0;
            mid = mid/2;
        }
        else if (key > arr[mid]){
            low = mid+1;
            mid = (low+high)/2;
        }

    }
}
