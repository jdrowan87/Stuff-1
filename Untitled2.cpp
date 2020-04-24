#include <iostream>
#include <string>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;

void decryptVigenere(string input,int startSize, int endSize,char letter);

const int END = 10;

const int TESTMODE =0;
void TESTER(int X);
void TESTER(char X);
void TESTER(string X);

int main(){
	int CONTRUN =1;
	
	char Lang;
	
	cout<<"Welcome to Vigenere Cipher Multiple Language Decryptor!\n";
	
while( CONTRUN == 1){ // start while run loop
	Lang=-1;
	cout<<"Please select the language the cipher text is expected to be\n";
	cout<<"1.English 2.Spansih 3.Italian 4.Russian\n0.Will attempt all languages  'q' to quit\n ::> ";
	cin>>Lang;
	
	int Selected = Lang - 48;
	
	//CONTRUN=0;
	
	//
	switch(Selected){
		case 1: cout<<"English has been chosen.\n";
			break;
		case 2: cout<<"Spanish has been chosen.\n";
			break;
		case 3: cout<<"Italian has been chosen.\n";
			break;
		case 4: cout<<"Russian has been chosen.\n";
			break;
		case 0: cout<<"All languages will be attemped. This will take longest.\n";
			break;
		case 65: cout<<"Ending Program.\n"; Lang=0; return 0;
			break;
		default: cout<<"No valid value entered\n"; continue;		
	}
	
}//end while run loop
return 0;
}

void decryptV(string input){
	int inputLength = input.length();
	
	
} 
