/*
	Nama	: Dzikri Algiffari
	Kelas	: A
	NPM 	: 140810180053
	Nama Program : Sequential Search
*/

#include <iostream>
using namespace std;

int main(){
    int n, search, A[100], index,;
	bool found = false;
	cout << "\nMasukan banyak data =  "; cin >> n;	  
	
	for(int i=0; i<n; i++){
	   cout << "Data ke-" << i+1 << " : ";
	   cin >> A[i];
	}
	
	cout << "\nMasukan data yang akan dicari : "; 
	cin >> search;
	cout << "\n-------------------------------------" <<endl;
	  
	for(int i=0; i<n; i++){
	    if(A[i] == search){
	 	    found = true;
	        index = i;
	    	i = n;
	   }
	}
	if(found == true){
	   cout << "Data telah ditemukan pada data ke-" << index+1;
	}
	else{
	   cout << "Maaf. Data tidak ditemukan!";
	}
	return 0;
}
