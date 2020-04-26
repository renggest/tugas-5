#include <iostream>
#include"kalkulator.h"
using namespace std;
 
int main(){
	Kalkulator kalkulator; 
	int sum = kalkulator.perkalian(33, 25);
	double sum_double = kalkulator.perkalian(1.23, 3.9);
	double sum_double3 = kalkulator.perkalian(7.54, 4.98, 3.21);
	
	cout<<sum<<endl;
	cout<<sum_double<<endl;	
    cout<<sum_double3<<endl;
    return 0;
}