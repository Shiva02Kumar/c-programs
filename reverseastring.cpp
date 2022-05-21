// date 25 eptember 2021

#include<iostream>
#include<conio.h>
using namespace std;

void rev(char A[], int i, int size)
{
	if(i<=(size/2))
	{
        char temp = A[i];
        A[i] = A[size-i];
        A[size-i] = temp;
		rev(A,i+1,size);
	}
}

int main()
{
	int size=0;
	char A[100];
	cout<<"\nEnter any string: ";
	cin.getline(A,100);
	while(A[size]!='\0'){
		size++;
	}
	cout<<"\nReverse string: ";
	rev(A,0,size-1);
	cout<<A;
	getch();
	return 0;
}