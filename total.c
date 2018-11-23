/*
Compile: make total-solution
Run: ./total-solution
make total-solution && ./total-solution
*/

#include "base.h"


//todo: define constants 
int price50 =50;
int price45 =45;
int price40 =40;
int delivery_charge = 500;
int margin = 2000; // margin for delivery charge


//todo: Write function total
// takes the amount of candy and computes the price in cents
int total(int amount){
	int price;
	if(amount <= 0){
		price = 0;
	}
	else if(amount < 10){
		price = amount * price50;
	}
	else if(amount < 100){
		price = amount * price45;
	}
	else{
		price = amount * price40;
	}
	if ((price < margin) && (price > 0)) {
	price = price + delivery_charge;
	}
	
	return price;
}



//todo: Write function total_test
void total_test(){
	test_equal_i(total(0), 0);
	test_equal_i(total(-2), 0);
	test_equal_i(total(44), 2480);
	test_equal_i(total(45), 2025);
	test_equal_i(total(10), 950);
	test_equal_i(total(50), 2250);
	test_equal_i(total(100), 4000);
}

int main (){
	total_test();
	return 0;
	

	//todo: call total_test Fuction
}