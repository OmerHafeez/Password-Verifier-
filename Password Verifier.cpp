#include<iostream>
using namespace std;
void pass (char* password );

int main ()
{
	int n;
 	cout << "Enter number of characters you want to enter in Password: "<<endl;
 	cin >> n;
	char* password = new char[n];
	
	cout<<"Enter the password you want to select"<<endl;
	cin>>password;

	pass(password);
	delete password;
}




void pass (char* password)
{

	int length = 0;
	int upper=0;
	int lower=0;
	int digit=0;
	
	for (int i = 0; password[i] != '\0'; i++) 
	{
    length++;
  	}
  	
  	
  	if(length>=6)
  	{
	for(int i=0;i<length;i++)
	{
		if(password[i]>='A' && password[i]<='Z')
		{
			++upper;
		}
		if(password[i] >= 'a'&& password[i] <='z')
		{
			++lower;
		}
		if(password[i] >= '0'&& password[i] <='9')
		{
			++digit;
		}
	}
	
	if(upper>=1 && lower>=1 && digit>=1)
	cout<<"The password is valid"<<endl;
	if(upper<1)
	cout<<"The pasword is invalid because it is not having uppercase letter"<<endl;
	if(lower<1)
	cout<<"The pasword is invalid because it is not having lowercase letter"<<endl;
	if(digit<1)
	cout<<"The pasword is invalid because it is not having a digit"<<endl;

	}
	else
	cout<<"the password is invalid because the characters must bhi more than 6"<<endl;
}