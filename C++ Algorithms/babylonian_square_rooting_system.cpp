#include<iostream>
#include<cmath>

using namespace std;

int main(){

    //declaring variables
    float old_guess, new_guess,n;

    start:
    cout<<"Enter a value, this will be the value you want to find the square root of: ";
    cin>>n;

    if (n<0)
    {
        cout<<"number must b e positive";
        goto start;
    }

    old_guess= n/2;
    new_guess = (old_guess+(n/old_guess))/2;

    //we make sure the new guess is between 1% of the old guesss, we'll do this using the while loop;

    while(!(new_guess<=((1/100)*(old_guess))+old_guess && new_guess>=old_guess-((1/100)*(old_guess)))){

        old_guess= new_guess;
        new_guess=(old_guess+(n/old_guess))/2;
    }
    
    //printing the results and that gotten from the cmath sqrt() function

    cout<<endl<<endl<<endl<<"Square root of "<<n<<" using the Babylonian Algrithm is "<<old_guess<<endl<<endl<<endl;
    cout<<"Square root of "<<n<<" using the inbuilt math function in C++ is "<<sqrt(n)<<endl<<endl;


    return 0;


}