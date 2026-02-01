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
   const int arr[5] = {65, 82, 90, 45, 78};
   int sum = 0;
   for (int i = 0; i < 5; ++i) {
       sum += arr[i];
   }
   cout << "The Sum is: " << sum << endl;
   
// Calculating Average of Five Numbers
   double getaverage = static_cast<double>(sum) / 5;
   cout << "The Average is: " << getaverage << endl;

// Finding Minimum and Maximum Values
    int values[5]= {65,82,90,45,78};
    int min = 0;
    int max = 0;
      getMinMax(values, 5, &min, &max);
      cout << "Min: " << min << ", Max: " << max << endl;

// Adding bonus to scores
    int bonus = 5;
    for (int i = 0; i < 5; ++i) {
        values[i] += bonus;
    }
    cout << "Scores after adding bonus of " << bonus << ": ";
    for (int i = 0; i < 5; ++i) {
        cout << values[i] << " ";
    }
    cout << endl; 
    
// Finding Highest Score
    const int* scores = values;
    int highestScore = scores[0];
    for (int i = 1; i < 5; ++i) {
        if (scores[i] > highestScore) {
            highestScore = scores[i];
        }
    }
    cout << "Highest Score after bonus: " << highestScore << endl;

// Finding number or scores that passed (>=70)
    int passCount = 0;
    for (int i = 0; i < 5; ++i) {
        if (values[i] >= 70) {
            passCount++;
        }
    }
    cout << "Number of scores that passed (>=70): " << passCount << endl;
   return 0;
}     