// CSI 205(A) - 12190035 - ALI BAKRI
//This program will sum, multiply, and set the average, the lowest and the highest numbers of all 20 different digits to be input by the user.
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello There! Please enter 20 different numbers\n\n";
	float Sum = 0, Product = 1, min=0, max=0; //Declaration and initilaization of the the terms we are going to use to determine sum, product, min and max by float to accept decimals.
	double Average; // We declare average as double in case the value holds many numbers in decimal 
	for (float a = 1; a <= 20; a++) // This is a loop what will go formulate 20 times as "a" incremenets after every loop as a counter
	{
	  float num;     // Float sum for the user to enter not only integers but decimals.
      cin >> num;   // The user will input the decimals here 
	  Sum += num;  // The sum formula here, with every loop will add the initial value of number to the new inserted one and will sum up the whole 20 numbers at the end

		  if (num == 0)     // Conditional if, where "0" will be neglected since its sum is null, yet in the product it will make the product 0 
		  continue;        //  Here whenever the program detects 0, it will pass by it but wont calculate its value
		  Product *= num; // The product of the 20 numbers, multiplying the new number by the initial value

		  if (a == 1)      // This conditon will is always true since "a" is initialized equal to 1 so this if will execute the following:
		  {  
 			  min = num,  // The first number inserted will be declared as the lowest number as an initial result 
			  max = num; // The first number inserted will be declared as the highest number as an initial result
		  }

	      if
		     (min > num)      // Here the program will compare if the intial number is greater than the current inserted number, then
			  min = num;     // replace the initial value by this lower inserted number,  if not it will keep initial as lowest number till it finds a lower one by value 
			 (max < num);   // Here the program will compare if the intial number is smaller than the current inserted number
			  max = num;   //  the program will replace the initial number by this greater number, if not it will keep initial as greatest number till it finds a greater one.
	}                     // "this process will loop with every inserted number to find the lowest and highest among the set of the 20 numbers
	Average = Sum / 20;  // The average is dividing the sum total of a set of figures by the number of figures

	cout << "Sum=      " << Sum << endl;       // The program will display here at the end "Sum= "summation of 20 numbers" 
	cout << "Product=  " << Product << endl;  // The program will display here at the end "Product=  "The product of the 20 numbers"
	cout << "Average=  " << Average << endl; // The program will display here at the end "Average=" "The average of the 20 numbers"
	cout << "Lowest Number=    " << min << endl;  // The program will display here at the end "Lowest number=  "the lowest number between the 20 inserted"
	cout << "Highest Number=   " << max << endl; // The program will display here at the end "Highest numbet= "Highest number among the 20 inserted"

	system("pause"); 
	return 0;  //The program will exit with return code 0
}