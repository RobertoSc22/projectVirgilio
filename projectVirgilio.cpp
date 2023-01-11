#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 50
using namespace std;
int vector[N];
int insertLenghtPassword();
void printVector(int&);
void createPassword(int&);


int main(){
	cout<<" __    _  _______  _     _    _______  _______  _______  _______  _     _  _______  ______    ______  "<<endl;
	cout<<"|  |  | ||       || | _ | |  |       ||   _   ||       ||       || | _ | ||       ||    _ |  |      | "<<endl;
	cout<<"|   |_| ||    ___|| || || |  |    _  ||  |_|  ||  _____||  _____|| || || ||   _   ||   | ||  |  _    |"<<endl;
	cout<<"|       ||   |___ |       |  |   |_| ||       || |_____ | |_____ |       ||  | |  ||   |_||_ | | |   |"<<endl;
	cout<<"|  _    ||    ___||       |  |    ___||       ||_____  ||_____  ||       ||  |_|  ||    __  || |_|   |"<<endl;
	cout<<"| | |   ||   |___ |   _   |  |   |    |   _   | _____| | _____| ||   _   ||       ||   |  | ||       |"<<endl;
	cout<<"|_|  |__||_______||__| |__|  |___|    |__| |__||_______||_______||__| |__||_______||___|  |_||______| "<<endl<<endl<<endl<<endl;
	
	int choice;
	do{
		cout<<"###MENU###"<<endl;
		cout<<"1:--------Generate New Password"<<endl;
		cout<<"0:--------Shut down the program"<<endl<<endl;
		cout<<"---------------------------------Select voice: ";
		cin>>choice;
		switch(choice){
			case 1:{
				int dimPassword = insertLenghtPassword();
	
	//srand(time(NULL)) used to generate random numer each time we execute the program.
	//using only rand(), generate the same sequence of random number each time we execute it
	srand(time(NULL));

	//new vector
	for(int i=0; i<dimPassword; i++){
		vector[i]= rand() % 66; // range value 0-65
	}
	printVector(dimPassword);
	createPassword(dimPassword);
				break;
			}
			case 0:{
				break;
			}
		}
}while( choice != 0);
}

int insertLenghtPassword(){
	int lenghtPassword;
	do{
	cout<<"Lenght of the new password: ";
	cin>>lenghtPassword;
	if(lenghtPassword < 10){
		cout<<"#########################-Value Not Accepted: password too short!"<<endl<<endl;
	}
	if(lenghtPassword > 51){
		cout<<"#########################-Value Not Accepted: password too long!"<<endl<<endl;
	}
}while(lenghtPassword < 10 || lenghtPassword > 51);
	return lenghtPassword;
}

void printVector(int &dimPassword){
	cout<<"Random sequence: {  ";
	//print vector
	for(int i=0; i<dimPassword; i++){
		cout<<vector[i]<<"  ";
	}
	cout<<"}"<<endl<<endl;
}

void createPassword(int &dimPassword){
	cout<<"New Password:  ";
	//Assign Char for each value to create a new password
	for(int i=0; i<dimPassword; i++){
		if(vector[i] == 0){
			cout<<"A";
		}
		if(vector[i] == 1){
			cout<<"a";
		}
		if(vector[i] == 2){
			cout<<"B";
		}
		if(vector[i] == 3){
			cout<<"b";
		}
		if(vector[i] == 4){
			cout<<"C";
		}
		if(vector[i] == 5){
			cout<<"c";
		}
		if(vector[i] == 6){
			cout<<"D";
		}
		if(vector[i] == 7){
			cout<<"d";
		}
		if(vector[i] == 8){
			cout<<"E";
		}
		if(vector[i] == 9){
			cout<<"e";
		}
		if(vector[i] == 10){
			cout<<"F";
		}
		if(vector[i] == 11){
			cout<<"f";
		}
		if(vector[i] == 12){
			cout<<"G";
		}
		if(vector[i] == 13){
			cout<<"g";
		}
		if(vector[i] == 14){
			cout<<"H";
		}
		if(vector[i] == 15){
			cout<<"h";
		}
		if(vector[i] == 16){
			cout<<"I";
		}
		if(vector[i] == 17){
			cout<<"i";
		}
		if(vector[i] == 18){
			cout<<"J";
		}
		if(vector[i] == 19){
			cout<<"j";
		}
		if(vector[i] == 20){
			cout<<"K";
		}
		if(vector[i] == 21){
			cout<<"k";
		}
		if(vector[i] == 22){
			cout<<"L";
		}
		if(vector[i] == 23){
			cout<<"l";
		}
		if(vector[i] == 24){
			cout<<"M";
		}
		if(vector[i] == 25){
			cout<<"m";
		}
		if(vector[i] == 26){
			cout<<"N";
		}
		if(vector[i] == 27){
			cout<<"n";
		}
		if(vector[i] == 28){
			cout<<"O";
		}
		if(vector[i] == 29){
			cout<<"o";
		}
		if(vector[i] == 30){
			cout<<"P";
		}
		if(vector[i] == 31){
			cout<<"p";
		}
		if(vector[i] == 32){
			cout<<"Q";
		}
		if(vector[i] == 33){
			cout<<"q";
		}
		if(vector[i] == 34){
			cout<<"R";
		}
		if(vector[i] == 35){
			cout<<"r";
		}
		if(vector[i] == 36){
			cout<<"S";
		}
		if(vector[i] == 37){
			cout<<"s";
		}
		if(vector[i] == 38){
			cout<<"T";
		}
		if(vector[i] == 39){
			cout<<"t";
		}
		if(vector[i] == 40){
			cout<<"U";
		}
		if(vector[i] == 41){
			cout<<"u";
		}
		if(vector[i] == 42){
			cout<<"V";
		}
		if(vector[i] == 43){
			cout<<"v";
		}
		if(vector[i] == 44){
			cout<<"W";
		}
		if(vector[i] == 45){
			cout<<"w";
		}
		if(vector[i] == 46){
			cout<<"X";
		}
		if(vector[i] == 47){
			cout<<"x";
		}
		if(vector[i] == 48){
			cout<<"Y";
		}
		if(vector[i] == 49){
			cout<<"y";
		}
		if(vector[i] == 50){
			cout<<"Z";
		}
		if(vector[i] == 51){
			cout<<"z";
		}
		if(vector[i] == 52){
			cout<<"0";
		}
		if(vector[i] == 53){
			cout<<"1";
		}
		if(vector[i] == 54){
			cout<<"2";
		}
		if(vector[i] == 55){
			cout<<"3";
		}
		if(vector[i] == 56){
			cout<<"4";
		}
		if(vector[i] == 57){
			cout<<"5";
		}
		if(vector[i] == 58){
			cout<<"6";
		}
		if(vector[i] == 59){
			cout<<"7";
		}
		if(vector[i] == 60){
			cout<<"8";
		}
		if(vector[i] == 61){
			cout<<"9";
		}
		if(vector[i] == 62){
			cout<<".";
		}
		if(vector[i] == 63){
			cout<<",";
		}
		if(vector[i] == 64){
			cout<<";";
		}
		if(vector[i] == 65){
			cout<<":";
		}
	}
	cout<<endl<<endl<<endl;
}
