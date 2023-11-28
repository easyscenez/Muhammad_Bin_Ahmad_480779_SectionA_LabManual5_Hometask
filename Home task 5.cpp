#include <iostream>
using namespace std;
int main()	{


int num,b1,b2,b3,b4,b5,b6,b7,b8;
	cout<<"Enter a number between 0 and 255.\n";
	cin>>num;
	if(num%2==0){
		b1=0;
	}
	else{
		b1=1;
	}
	num=num/2;
	if(num%2==0){
		b2=0;
	}
	else{
		b2=1;
	}
	num=num/2;
	if(num%2==0){
		b3=0;
	}
	else{
		b3=1;
	}
	num=num/2;
	if(num%2==0){
		b4=0;
	}
	else{
		b4=1;
	}
	num=num/2;
	if(num%2==0){
		b5=0;
	}
	else{
		b5=1;
	}
	num=num/2;
	if(num%2==0){
		b6=0;
	}
	else{
		b6=1;
	}
	num=num/2;
	if(num%2==0){
		b7=0;
	}
	else{
		b7=1;
	}
	num=num/2;
	if(num%2==0){
		b8=0;
	}
	else{
		b8=1;
	}
	num=num/2;
	cout<<b8<<b7<<b6<<b5<<b4<<b3<<b2<<b1;


//	int num1,num2,remainder,quotient,LCM,num1copy,num2copy;
//	cout<<"Enter two numbers.\n";
//	cin>>num1>>num2;
//	num1copy=num1;
//	num2copy=num2;
//	remainder=num1%num2;
//	quotient=num1/num2;
//	if(remainder!=0){
//		while(remainder !=0){
//			num1=num2;
//			num2=remainder;
//			remainder=num1%num2;
//		
//		}
//		cout<<"The HCF is "<<num2<<endl;
//	
//	}
//	else{
//		cout<<"The HCF is "<<num2<<endl;
//	}
//	LCM=(num1copy*num2copy)/num2;
//	cout<<"The LCM is "<<LCM<<endl;
//		end of task 1

//	float difference,term1,n,sum,last_term;
//	char known;
//	cout<<"To find the sum of an arithmetic series, provide the following information.\n";
//	cout<<"Is the last term of the sequence known?\n";
//	cout<<"Press y for yes, press any other key for no.\n";
//	cin>>known;
//	if(known=='y' || known=='Y'){
//		cout<<"First number of the series: ";
//		cin>>term1;
//		cout<<"Last term of the series: ";
//		cin>>last_term;
//		cout<<"The number of terms for which the sum is required: ";
//		cin>>n;
//		sum= (n/2)*(term1+last_term);
//		cout<<sum;
//	}
//	else{
//		cout<<"First number of the series: ";
//		cin>>term1;
//		cout<<"Common difference between the terms: ";
//		cin>>difference;
//		cout<<"The number of terms for which the sum is required: ";
//		cin>>n;
//		sum= (n/2)*((2*term1)+ difference*n - difference);
//		cout<<sum;
//	}
	//	end of task 2
	
//	int rows=5;
//	int spaces=4;
//	int stars=1;
//	for(int i=1;i<=rows;i++){
//		for(int j=0;j<spaces;j++){
//			cout<<" ";
//		}
//		for(int k=0;k<stars;k++){
//			cout<<"*";
//		}
//		cout<<endl;
//		spaces--;
//		stars+=2;
//	}
//	spaces=1;
//	stars=7;
//	for(int i=1;i<rows;i++){
//		for(int j=0;j<spaces;j++){
//			cout<<" ";
//		}
//		for(int k=0;k<stars;k++){
//			cout<<"*";
//		}
//		cout<<endl;
//		spaces++;
//		stars-=2;
//	}
}
