#include <iostream>
using namespace std;

int main () {
  int user_length = 0;
  int user_array[user_length];
  int user_input = 0;

  cout << "How many numbers do you need to input?: ";
  cin >> user_length;

  for(int i = 0; i < user_length; i++) {
    cout << "Enter number " << i + 1 << " : ";
    cin >> user_input;
    user_array[i] = user_input;
  }

  for(int j = 0; j < user_length; j++) {
    cout << user_array[j] << endl;
  }

  return 0;
}
