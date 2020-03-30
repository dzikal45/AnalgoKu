/*
	Nama	: Dzikri Algiffari
	Kelas	: A
	NPM 	: 140810180053
	Nama Program : Selection Search
*/

#include <iostream>
using namespace std;

int data[100],data2[100];
int n;

void Switch(int a, int b){
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}

void selectionSort(){
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

int main(){
	cout << "\nMasukkan Jumlah Data : "; 
	cin >> n;

	
	for(int i=1; i<=n; i++){
		cout << "Masukkan data ke-" << i << " : ";
		cin >> data[i];
		data2[i]=data[i];
	}
	
	selectionSort();
	cout << "Data Setelah di Sort : " <<endl;
	for(int i=1; i<=n; i++){
	  	cout << " " << data[i];
	}
	return 0;
}

