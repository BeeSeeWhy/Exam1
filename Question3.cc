#include <array>
#include <iostream>
using namespace std;

int generateNum(int array[], int count) {
    array[0] = 0;
    array[1] = 1;
    int total;
    for(int i = 2; i <= count; i++)  {
        total = array[0];
        array[i] = array[i - 1] + array[i - 2];
        int remainder = array[i] % 2;
        if(remainder == 0)
          total += array[i]; 
    }
    return total;
}

int main() {
    	int count = 17;
    	int array[count];


	     cout << generateNum(array, count) << endl;

	     return 0;

}
