#include<iostream>
using namespace std;

int main(){
	for(int a = 0; a <= 9; a++){
		for(int b = 0; b <= 9; b++){
			if(a==0||a==3||a==6||a==9||b==0||b==3|b==6||b==9){
			cout << " _";
		}else{
			cout << "  ";
		}
		}
		cout << endl;
	}
}
	
