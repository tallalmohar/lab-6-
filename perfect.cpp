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


int main(){

    int userNum = 0;
    cout << "Enter a number you wanna check: ";
    cin >> userNum;
    cout << "Sum of proper factors: " << sumOfProperFactors(userNum);

    return 0;
    
}

