#include <iostream> 
using namespace std;

int main (){
	
	string x = "Leeon";
	
	int x_size = x.size () ; //kuhain ang  haba ng leeon
	
	x[0] = 'L'; //palitan
	x_size -= 3; //bawas ng tatlo
	
	   cout<< x << "\n";
	   cout<< x_size <<"\n";
	   cout<< x [x_size]<<"\n";

  return 0;	
}


