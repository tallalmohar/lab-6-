#include <climits>
#include <iostream>

using namespace std;

bool isProperFactor(int num, int divisor) {
  if ((divisor < num) && ((num % divisor) == 0)) {
    return true;
  } else {
    return false;
  }
}

int sumOfProperFactors(int n) {
  int sum = 0;
  for (int n_for = 0; n_for <= n; n_for++) {
    if (isProperFactor(n, n_for)) {

      sum += n_for;
    }
  }
  return sum;
}

bool isPerfectNumber(int n) {
  if (sumOfProperFactors(n) == n) {
    return true;
  }
  return false;
}
int main() {
  /*
  int userNum = 0;
  cout << "Enter a number you wanna check: ";
  cin >> userNum;
  cout << "Sum of proper factors: " << sumOfProperFactors(userNum) << endl;;
  if(isPerfectNumber(userNum)){
      cout << "Amazing! It's Perfect!";
  }else{
      cout << "I'm Sorry, that's not a perfect number.";
  }

  int userNum1 = 0;
  int userNum2 = 0;

  cout << "Enter num1:";
  cin >> userNum1;
  cout << "Enter num2";
  cin >> userNum2;
  */
  for (int n = 1; n <= INT_MAX; n++) {
    if (isPerfectNumber(n)) {
      cout << n << endl;
    }
    if (n % 100000 == 0) {
      cout << n << endl;
    }
  }
  return 0;
}
