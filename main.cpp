#include<iostream>
using namespace std;

int main () {
    int number;

    cout << "Hi, please enter a number:" << endl;
    cin >> number;

if (number % 3==0 && number % 5==0) {
    cout << "FizzBuzz" << endl;
}
else if (number % 3==0) {
    cout << "Fizz" << endl;
}
else if (number % 5==0) {
    cout << "Buzz" << endl;
}
else if (number % 3 !=0 && number %5 !=0){
    cout << number << endl;
}

 int start; 
 int end;
 

     cout << "Give me a range of numbers. Type the starting number" << endl;
     cin >> start; 
     cout << "Now the end number" << endl;
     cin >> end;
     if (start >= end) {
    cout << "Error: The starting number must be less than the ending number." << endl;
}

int endIndex = end;
 int whileI = start;

     while (whileI <= endIndex){
        if (whileI % 3 == 0 && whileI % 5 == 0) {
     cout <<  whileI << ":" << "FizzBuzz" << endl;
        }
     else if (whileI % 3 == 0){ 
        cout << whileI << ":" << "Fizz" << endl;
     }
    else if (whileI % 5 == 0){ 
        cout << whileI << ":" << "Buzz" << endl;
    }
    else {
            cout << whileI << endl;
    }
    whileI++;
}
     
return 0;
}
