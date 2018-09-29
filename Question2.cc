#include <iostream>
using namespace std;

//find smallest number function
int findSmallest (int arr[], int length) {
  int minValue;
  for (int i = 0; i < length - 1; i++) {
    for (int j = 1; j < length; j++) {
      if(arr[i] < arr[j])
        minValue = arr[i];
      else
        minValue = arr[j];
    }
  }
  return minValue;
}


int findLargest (int arr[], int length) {
  int maxValue;
  for (int i = 0; i < length - 1; i++) {
    for (int j = 1; j < length; j++) {
      if(arr[i] > arr[j])
        maxValue = arr[i];
      else
        maxValue = arr[j];
    }
  }
  return maxValue;
}
int main () {
  int user_length = 0;
  int user_array[user_length];
  int user_input = 0;

  cout << "How many numbers do you need to input?: ";
  cin >> user_length;

  //initialize array
  for(int i = 0; i < user_length; i++) {
    user_array[i] = 0;
  }

  //get user numbers
  for(int i = 0; i < user_length; i++) {
    cout << "Enter number " << i + 1 << " : ";
    cin >> user_input;
    user_array[i] = user_input;
  }

  //print array
  for(int j = 0; j < user_length; j++) {
    cout << "Number " << j + 1 << " : " << user_array[j] << endl;
  }
  int smallest = findSmallest(user_array, user_length);
  cout << "The smallest number is : " << smallest << '.' << endl;

  int largest = findLargest(user_array, user_length);
  cout << "The largest number is : " << largest << '.' << endl;
  return 0;
}
