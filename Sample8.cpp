#include <iostream> 
using namespace std;

int main (){
	
	string x;
	int y;
	char z;
	
	cout<<"Enter a string:" ;
	getline(cin,x);
	
	cout<<"Enter a number:" ;
	cin>>y;
	
	cout<<"Enter a letter:";
	cin>>z;
	
	x[y] = z;
	cout<< x;

	  
	
	
	
	   

  return 0;	
}


