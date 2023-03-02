// Dr.Antoine Aouad -  CSI205(A) - 12190035 - Ali Bakri
/* This program will generate 50 random numbers into two arrays, 
first even and second one odd, then calculate their average */

# include <iostream>
# include <ctime>
using namespace std;

void average(int odd[], int even[], int oddCount, int evenCount) // function to calculate average 
{
	int oddSum = 0, evenSum = 0; // two variables to hold odd values sum and even values sum /
	for (int i = 0; i < oddCount; i++)
	{
		oddSum += odd[i];  // condition if odd number, add to odd sum to increase the number of odd set
	}

	for (int i = 0; i < evenCount; i++)
	{
		evenSum += even[i];  // if even, add to even sum  to increase the number of even set
	}        

	cout << "Odd average is " << oddSum / oddCount << endl; // Output odd average calculated 
	cout << "Even average is " << evenSum / evenCount << endl; // Output even average calculated  
}

void divide(int arr[], int evenCount, int oddCount) // function to divide main array into 2 arrays 
{

	int even[50], odd[50]; // intialize arrays 
	int l = 0, m = 0;

	for (int i = 0; i < 50; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even[l] = arr[i]; // if even, add element to even array 
			l++;
		}
		else
		{
			odd[m] = arr[i]; // if odd, add element to odd array 
			m++;
		}
	}

	cout << "Odd Array is" << endl; // output odd array 
	for (int i = 0; i < oddCount; i++)
	{
		cout << odd[i] << " "; 
	}
	cout << endl << endl;

	cout << "Even array is" << endl; // output even array 
	for (int i = 0; i < evenCount; i++)
	{
		cout << even[i] << " ";
	}
	cout << endl << endl;
	average(odd, even, oddCount, evenCount); // calling the average function to calculate average 
}

int main()
{
	srand(time(0));      // setting the seed of random number generator 
	int randNum;
	int arr[50];    // Declaring array with size of 50 numbers
	for (int i = 0; i < 50; i++)
	{
		randNum =  3 + rand() % 28; // generate random numbers between 3 and 30 as in the rule: Min + rand() % (Max - min + 1)
		arr[i] = randNum; // insert to array 
	}

	cout << "Random numbers array is" << endl; // ouput main array 
	for (int i = 0; i < 50; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
	int oddCount = 0, evenCount = 0; // finding odd count and even count so odd array and even array can be intialized later 

	for (int i = 0; i < 50; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenCount++; // Splitting numbers in 2 sets, between even if there division's remainder is 0 
		}
		else
		{
			oddCount++; // Or odd if theres a remainder of 1
		}
	}
	divide(arr, evenCount, oddCount); // calling divide function to divide main array into 2 arrays 
	return 0; // Program will exit with return code 0
}
