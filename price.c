#include<stdio.h>

int income(int);
int cost(int);
int profit(int);
int attend(int);

int attend(int price){
	return 120 + ((15-price)/5 *20);
	
}

int income(int price){

	return price*attend(price);	
}

int cost(int price){
	return 500 + 3*attend(price);
}

int profit(int price){
	return income(price) - cost(price);
}

int main(){
	int price;
	

	for(price = 5; price <50; price+=5){
		printf("price: %d, profit: %d\n",price,profit(price));

	}

	return 0;
}

