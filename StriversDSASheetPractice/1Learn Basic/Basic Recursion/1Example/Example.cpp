#include<bits/stdc++.h>
using namespace std;

// print name n times using recursion

// void printName(int i, int number){
// 	if ( i > number) return;
// 	cout<<"Hello "<<i<<endl;
// 	printName(i + 1, number);
// }

// int main(){
// 	int n;
// 	cin >> n;
// 	printName(1,n);
// }


//print upto n from 1 using recursion

// void printNumber(int i, int number) {
// 	if(i > number) return;
// 	cout<<i<<endl;
// 	printNumber(i+1, number);
// }
// int main() {
// 	int n;
// 	cin >> n;
// 	printNumber(1, n);
// }


// print from n to 1 using recursion
 // void printNumber (int number ,int i) {
 // 	if(number < i) return;
 // 	cout<<number<<endl;
 // 	printNumber(number-1,1);
 // }


 // int main() {
 // 	int n;
 // 	cin>> n;
 // 	printNumber(5,1);
 // }


//Alternatively ,

// void printNumber(int i, int number){
// 	if(i<1) return;
// 	cout<<i<<endl;
// 	printNumber(i-1, number);
// }
// int main() {
// 	int n;
// 	cin>>n;
// 	printNumber(n,n);
// }




 //print number from 1 to n
//  void printNumber(int number, int i){
//  	if(i > number) return;
//  	cout<<i<<endl;
//  	printNumber(number, i + 1);
//  }

// int main() {
// 	int n;
// 	cin >> n;
// 	printNumber(n,1);
// }





// Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.

// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in increasing order from 1 to n.



// void printNumbers(int n) {
//     // Your code goes here
//     if(n == 0) return;
//     printNumbers( n- 1);
//     cout<<n<<endl;
 	
    
// }

// int  main(){
// 	int n;
// 	cin>> n;
// 	printNumbers(n);
// }



//parameterised recursion and functional recursion
//parameterized recursion

// int sumofn(int n, int sum){
// 	if(n == 0){
// 		return sum;
// 	}
// 	sumofn(n-1, sum+n);
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	cout<<sumofn(n,0);
// }


//functional recursion

// int sumofn(int n){
// 	if (n == 0) return 0;

// 	return (n + sumofn(n-1));
// }
// int main(){
// 	int n;
// 	cin >> n;
// 	cout<<sumofn(n);
// }



//task: factorial of n

// long factorialofn(int n){
// 	if( n == 1) return 1;
// 	return n * factorialofn( n-1);
// }

// int main() {
// 	int n;
// 	cin >> n;
// 	cout<<factorialofn(n);
// }

//alternatively,
// int factorialofn(int n, int fact){
// 	if (n == 1) return fact;
// 	return factorialofn(n-1, fact * n);
// }

// int main() {
// 	int n; 
// 	cin >> n;
// 	cout<<factorialofn(n,1);
// }
