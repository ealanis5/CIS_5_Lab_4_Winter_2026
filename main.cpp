#include <iostream>

using std::cout;
using std::endl;
using std::string;

void getMinMax(const int* arr, int size, int* minOut, int* maxOut){
   if (size < 0) return;
   *minOut = *maxOut = arr[0];


   for(int i = 1; i < size; ++i){
       if(arr[i] < *minOut){
           *minOut = arr[i];
       }


       if (arr[1] > *maxOut){
       *maxOut = arr[i];
   }
   }
}

int addFiveNums(int num, int num2, int num3, int num4, int num5) {
   int sum = num + num2 + num3 + num4 + num5;
   return sum;
}

int main() {

// Show orignial scores
   cout << "Original Scores: 65, 82, 90, 45, 78" << endl;

// Calculating Sum of Five Numbers
   int sum = 0;
   sum = addFiveNums(65, 82, 90, 45, 78);
   cout << "The Sum is: " << sum << endl;

// Calculating Average of Five Numbers
   double average = static_cast<double>(sum) / 5;
   cout << "The Average is: " << average << endl;

// Finding Minimum and Maximum Values
    int values[]= {65,82,90,45,78};
    int min = 0;
    int max = 0;
      getMinMax(values, 5, &min, &max);
      cout << "Min: " << min << ", Max: " << max << endl;

// Finding Highest Score and Count of Passing Scores
    int scores[] = {65, 82, 90, 45, 78};
    int highestScore = scores[0];
    int passCount = 0;
    const int passingScore = 70;

    for (int i = 0; i < 5; ++i) {
        if (scores[i] > highestScore) {
            highestScore = scores[i];
        }
        if (scores[i] >= passingScore) {
            passCount++;
        }
    }

    cout << "Highest Score: " << highestScore << endl;
    cout << "Number of Passing Scores: " << passCount << endl;

// Adding bonus to scores
    int bonus = 5;
    for (int i = 0; i < 5; ++i) {
        scores[i] += bonus;
    }

    cout << "Scores after adding bonus:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << scores[i] << " ";
    }
    cout << endl;

// Calculating 
int countPassed = 0;
for (int i = 0; i < 5; ++i) {
    if (scores[i] >= passingScore) {
        countPassed++;
    }
}
cout << "Number of scores that passed after bonus: " << countPassed << endl;  

   return 0;
}     