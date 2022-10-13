#include <iostream>
using namespace std;
//functions
void printArray(const int list[], int listSize);
int indexSmallestElement(const int list[], int listSize);
  
int main()
{
 int N;
  cin >>N;

  const int ARRAY_SIZE = N;
  int myArray [ARRAY_SIZE];

  for (int index = 0; index < ARRAY_SIZE; index++){

    cin >> myArray[index];
  }

 //printArray(myArray, ARRAY_SIZE);

  int LaunchDay =  indexSmallestElement(myArray, ARRAY_SIZE);
  cout <<LaunchDay;
} 

void printArray(const int list[], int listSize) {
  int index;

  for (index = 0; index < listSize; index++)
    cout << list[index] << " ";

  cout << endl;
  return;
}

int indexSmallestElement(const int list[], int listSize) {
  int minIndex = 0; // default assumption is to assume that the
                    // largest value is in the first spot

  for (int index = 1; index < listSize; index++) {
    if (list[minIndex] > list[index])
      minIndex = index;
  }

  return minIndex;
}