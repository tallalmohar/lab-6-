#include <iostream>
#include <iomanip>


using namespace std;


bool isProperFactor(int num, int divisor){
    if((divisor < num) && ((num%divisor) == 0)){
        return true;
    }else{
        return false;
    }
}

int sumOfProperFactors(int n){
    int sum = 0;
    for(int n_for = 0; n_for <= n; n_for++){
        if(isProperFactor(n,n_for)){
        
            sum+=n_for;
            
        }

    }
    return sum;

}

bool isPerfectNumber(int n){
    if(sumOfProperFactors(n) == n){
        return true;

    }
    return false;
}
int main(){

    int userNum = 0;
    cout << "Enter a number you wanna check: ";
    cin >> userNum;
    cout << "Sum of proper factors: " << sumOfProperFactors(userNum) << endl;;
    if(isPerfectNumber(userNum)){
        cout << "Amazing! It's Perfect!";
    }else{
        cout << "I'm Sorry, that's not a perfect number.";
    }

    return 0;
    
}

