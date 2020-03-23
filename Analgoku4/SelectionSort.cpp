/*
Program : Selection Sort
*/
#include <iostream>
#include<conio.h>

using namespace std;

int data[50],data2[50];
int n;

void switch(int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}
void selectionSort()
{
	int pos,i,j;
	for(i=1;i<=n-1;i++)
	{
	    pos = i;
	    for(j = i+1;j<=n;j++)
	    {
		   if(data[j] < data[pos]) pos = j;
		}
        if(pos != i) switch(pos,i);
    }
}

int main()
{
	cout<<"\nMasukkan Jumlah Data : ";cin>>n;
	cout<< endl;
	for(int i=1;i<=n;i++)
	{
		cout<<"Masukkan data ke-"<<i<<" : ";
		cin>>data[i];
		data2[i]=data[i];
	}
	
	selectionSort();
	cout << "\n" << endl;
	cout<<"Data Setelah di Sort : "<<endl;
	for(int i=1; i<=n; i++)
	{
	  	cout<<" "<<data[i];
	}

	getch();
}

