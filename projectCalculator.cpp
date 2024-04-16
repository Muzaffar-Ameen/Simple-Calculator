#include<iostream>
using namespace std;
int main()
{
	const int size = 15;
	const int size1 = 17;
	int arr1[size] = { 0 };
	int arr2[size] = { 0 };
	int arr3[size1] = { 0 };
	int num = 0, sum = 0, diff = 0, multi = 0, divi = 0, modu = 0;
	char ch = '\0';
	for (int i = 0; i < size; i++)
	{
		cout << "Enter A, " << i + 1 << " single Digit Number: ";
		cin >> arr1[i];
		while (arr1[i] >= 10)
		{
			cout << "You Entered A Wrong Input,Please Enter A, " << i + 1 << " Singal Digit Number: ";
			cin >> arr1[i];
		}
	}
	cout << "Enter NUmbers For 2nd Array" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter A, " << i + 1 << " singal Digit Number: ";
		cin >> arr2[i];
		while (arr2[i] >= 10)
		{
			cout << "You Entered A Wrong Input,Please Enter A, " << i + 1 << " Singl Digit Number: ";
			cin >> arr2[i];
		}
	}
	cout << "Array 1:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;
	cout << "Array 2:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	cout << "Enter Your Operation that you Want (+,-,*,/,%): ";
	cin >> ch;
	switch (ch)
	{
	case'+':
	{
			   for (int i = size - 1; i >= 0; i--)
			   {
				   if (sum >= 10)
				   {
					   sum = arr1[i] + arr2[i] + 1;
				   }
				   else
					   sum = arr1[i] + arr2[i];
				   if (sum >= 10)
				   {
					   arr3[i] = sum % 10;
				   }
				   else
					   arr3[i] = sum;
			   }
			   cout << "Sum of Two array" << endl;
			   for (int i = 0; i < size; i++)
			   {
				   cout << arr3[i] << " ";
			   }
			   break;


	}
	case'-':
	{

			   for (int i = size - 1; i >= 0; i--)
			   {
				   if (arr1[i] < arr2[i])
				   {
					   arr1[i] = arr1[i] + 10;
				   }
				   diff = arr1[i] - arr2[i];
				   arr3[i] = diff;
			   }
			   cout << "Difference of Two array" << endl;
			   for (int i = 0; i < size; i++)
			   {
				   cout << arr3[i] << " ";
			   }
			   break;

	}
	case'*':
	{

			   for (int i = size - 1; i >= 0; i--)
			   {
				   multi = arr1[i] * arr2[i];
				   arr3[i] = multi;
			   }
			   cout << "Multiplication of Two array" << endl;
			   for (int i = 0; i < size; i++)
			   {
				   cout << arr3[i] << " ";
			   }
			   break;
	}
	case'/':
	{

			   for (int i = size - 1; i >= 0; i--)
			   {
				   if (arr1[i] < arr2[i])
				   {
					   arr1[i] = arr1[i] * 10;
				   }
				   divi = arr1[i] / arr2[i];
				   arr3[i] = divi;
			   }
			   cout << "Division of Two array" << endl;
			   for (int i = 0; i < size; i++)
			   {
				   cout << arr3[i] << " ";
			   }
			   break;
	}
	case'%':
	{
			   for (int i = size - 1; i >= 0; i--)
			   {
				   if (arr1[i] < arr2[i])
				   {
					   modu = arr1[i];
					   arr3[i] = modu;
				   }
				   else
				   {
					   modu = arr1[i] % arr2[i];
					   arr3[i] = modu;
				   }

			   }
			   cout << "Modulus of Two array" << endl;
			   for (int i = 0; i < size; i++)
			   {
				   cout << arr3[i] << " ";
			   }
			   break;
	}
	default:
	{
			   cout << "You Enter a Wrong input" << endl;
			   break;
	}
	}
	system("pause");
	return 0;
}
