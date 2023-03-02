/* Csi 205 (A) - 12190035 - Ali Bakri - Project 2
* This program will ask the user to input two integers and then select one of the operators from sum, subtraction, modulus or division or 
'?' to stop the program and then it will output the 2 numbers selected by the user and the results aside*/

#include <iostream>
using namespace std;

int main() {  // declaring the variables needed

    double num1, num2, res; // Two numbers num1, num2 for the user to input, res will be used to store the result of the operation done
    char operat;           //  Char operat the operator that the user choose

    do { // making an infinite loop till the user inputs ? to end the program
        cout << "Input the first number: ";     //Ask the user to input first number
        cin >> num1;                           // input of the first number
        cout << "Input the second number: ";  //  Ask the user to input second number
        cin >> num2;                         //   input second number
        cout << "Choose an operator (+, -, *, /, %) or '?' to exit: "; // Display of all the available operators to chose one 
        cin >> operat;                                                //  Input of the chosen operator

        switch (operat) {  // using switch to check the operator and do the right operation
        case '+': res = sum(num1, num2);       // Calling the value of the number stored and calculated in the sum function
            display(num1, num2, operat, res); //  Displaying the two input numbers and their sum result
            break;
        case '-': res = sub(num1, num2);       // Calling the value of the number stored and calculated in the subtraction function
            display(num1, num2, operat, res); //  Displaying the two input numbers and their subtraction result
            break;
        case '*': res = prod(num1, num2);      // Calling the value of the number stored and calculated in the product function
            display(num1, num2, operat, res); //  Displaying the two input numbers and their product result
            break;
        case '/': res = division(num1, num2);  // calling the value of the number stored and calculated in the sum function
            display(num1, num2, operat, res); //  displaying the two input numbers and their division division result
            break;
        case '%': res = mod(num1, num2);       // calling the value of the number stored and calculated in the modulus function
            display(num1, num2, operat, res); //  Displaying the two input numbers and their Remainder.
            break;
                 
        case '?': cout << "the program will stop now!" << endl;  // if the user inputs ? alert him that the program will stop end exiting the loop      
            break;
           
        default: cout << "incorrect info please input some valid info again" << endl;  // if the user inputs any character different than the valid options it 
            break;                                                                                 // will tell him invalid option and ask to enter a valid one
        }
    } while (operat != '?'); // This while will be checked at the end after the the do's have been done and if the operator "?" is inserted the program will stop

    system("pause");
    return 0; 
}

double sum(double a, double b) // function that returns the sum of any 2 numbers
{
    return a + b;
}

double sub(double a, double b) // function that returns the substraction of any 2 numbers
{
    return a - b;
}

double prod(double a, double b)  // function that returns the product of any 2 numbers
{
    return a * b;
}

double division(double a, double b) // function that returns the division result of any 2 numbers
{
    return a / b;
}

double mod(long int a, long int b) // function that returns the remainder of the division of any 2 numbers
{
    return a % b;
}

void display(double a, double b, char op, double res) // function that displays the operation chosen by the user and the result
{
    cout << a << " " << op << " " << b << " = " << res << endl;
}