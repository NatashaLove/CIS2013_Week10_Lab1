#include <iostream>
#include <cstring>
using namespace std;

int main () {
	int len;// 2d array
	int cont =1;
	
	while (cont !=0){
	
	cout << "How long do you want your array?" << endl;
	cin>> len;// 2d array
	
	int *a;
	a= new int [len];
	
	for (int i=0; i<len; i++) {
		
		cout << "Int number " <<i<< " should be : ";
		cin >> a [i];//random for game
	}
	
	cout << endl << "your list of numbers is: "<< endl;
	
	for (int x=0; x<len; x++) {
		cout << a [x] << endl;
	}
	
	cout << "Do you want to continue? Y-1; N-0 : ";
	
	cin>>cont;
	
	delete [] a;
	} 
	
	/*int v1;
	int v2;
	int *p1; 
	int *p2;
	
	v1=22;
	v2=33;
	
	p1 = &v1;
	p2 = &v2;
	
	//p1 = &v1;// shows address of p1 - not really important to do..
	//p2 = &v2;
	
	p1=p2;
	
	v1 =100;
	v2=200;
	
	// v1= 44;
	// v2 = 55;
	
	cout << "p1 is : " <<*p1 << endl;
	cout << "p2 is : " <<*p2 << endl;
	
	
	cout << "v1 is : " <<v1 << endl;
	cout << "v2 is : " <<v2 << endl;
	*/
	
	return 0;
}