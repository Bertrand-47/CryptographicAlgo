#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int Salting_variable;
int b=0; 
char message[100]; // The Message to Be Encrypted;
int encryption_loop,i;// here I declared Variable I for for-loop and ecnryption_loop for number of times for encryption process
char letter_index; // a Variable to take a Letter on a Specific Index of the ARRAY(message)
void encryption(char message[100])
{
	while(b++<10000)
{
	Salting_variable=(rand())+1;
}
	cout<<"|";
	cout<<endl;
	cout<<"|"<<endl;
	cout<<"|"<<endl;
	cout<<"|"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++";
	cout<<endl;
	cout<<" Your Message::"<<message;
	cout<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++";
	for(i=0; message[i]!='\0'; i++)
	{
		letter_index=message[i];
		
		if(letter_index=='a')
		{
			letter_index='*';
		}
		else if(letter_index=='b')
		{
			letter_index='#';
		}
		else if(letter_index=='c')
		{
			letter_index='}';
		}
		else if(letter_index=='d')
		{
			letter_index='{';
		}
		else if(letter_index=='e')
		{
			letter_index=='(';
		}
		else if(letter_index=='f')
		{
			letter_index='!';
			
		}
		else if(letter_index=='g')
		{
			letter_index='$';
		}
		else if(letter_index=='h')
		{
			letter_index='%';
		}
		else if(letter_index=='i')
		{
			letter_index=')';
		}
		else if(letter_index=='j')
		{
			letter_index='|';
		}
		else if(letter_index=='k')
		{
			letter_index='a';
		}
		else if(letter_index=='l')
		{
			letter_index='+';
		}
		else if(letter_index=='m')
		{
			letter_index='-';
		}
		else if(letter_index=='n')
		{
			letter_index='p';
		}
		else if(letter_index=='o')
		{
			letter_index='b';
		}
		else if(letter_index=='p')
		{
			letter_index='c';
		}
		else if(letter_index=='q')
		{
			letter_index='m';
		}
		else if(letter_index=='r')
		{
			letter_index='/';
		}
		else if(letter_index=='s')
		{
			letter_index='g';
		}
		else if(letter_index=='t')
		{
			letter_index='f';
		}
		else if(letter_index=='u')
		{
			letter_index='[';
		}
		else if(letter_index=='v')
		{
			letter_index='^';
		}
		else if(letter_index=='w')
		{
			letter_index='@';
		}
		else if(letter_index=='x')
		{
			letter_index='&';
		}
		else if(letter_index=='y')
		{
			letter_index='~';
		}
		else if(letter_index=='z')
		{
			letter_index='`';
		}
	message[i]=letter_index;
}
	cout<<endl;
	cout<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"Your Encrypted Message::";
	cout<<message<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"Thanks For Using This Algorithm. You Really Matters!!"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
}
void decryption(char message[100])
{
	cout<<"++++++++++++++++++++++++++++++++++++++";
	cout<<endl;
	cout<<" Your Message::"<<message;
	cout<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++";
	for(i=0; message[i]!='\0'; i++)
	{
		letter_index=message[i];
		if(letter_index=='*')
		{
			letter_index='a';
		}
		else if(letter_index=='#')
		{
			letter_index='b';
		}
		else if(letter_index=='}')
		{
			letter_index='c';
		}
		else if(letter_index=='{')
		{
			letter_index='d';
		}
		else if(letter_index=='(')
		{
			letter_index='e';
		}
		else if(letter_index=='!')
		{
			letter_index='f';
		}
		else if(letter_index=='$')
		{
			letter_index='g';
		}
		else if(letter_index=='%')
		{
			letter_index='h';
		}
		else if(letter_index==')')
		{
			letter_index='i';
		}
		else if(letter_index=='|')
		{
			letter_index='j';
		}
		else if(letter_index=='a')
		{
			letter_index='k';
		}
		else if(letter_index=='+')
		{
			letter_index='l';
		}
		else if(letter_index=='-')
		{
			letter_index='m';
		}
		else if(letter_index=='p')
		{
			letter_index='n';
		}
		else if(letter_index=='b')
		{
			letter_index='o';
		}
		else if(letter_index=='c')
		{
			letter_index='p';
		}
		else if(letter_index=='m')
		{
			letter_index='q';
		}
		else if(letter_index=='/')
		{
			letter_index='r';
		}
		else if(letter_index=='g')
		{
			letter_index='s';
		}
		else if(letter_index=='f')
		{
			letter_index='t';
		}
		else if(letter_index=='[')
		{
			letter_index='u';
		}
		else if(letter_index=='^')
		{
			letter_index='v';
		}
		else if(letter_index=='@')
		{
			letter_index='w';
		}
		else if(letter_index=='&')
		{
			letter_index='x';
		}
		else if(letter_index=='~')
		{
			letter_index='y';
		}
		else if(letter_index=='`')
		{
			letter_index='z';
		}
		message[i]=letter_index;
	}
	cout<<endl;
	cout<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"Your Decrypted Message::";
	cout<<message<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"Thanks For Using This Algorithm. You Really Matters!!"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
}
main()
{
	int choice;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<"Instructions."<<endl;
	cout<<"----------------"<<endl;
	cout<<"Enter a Message You Want an After You'll choose what to Do!"<<endl;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<endl;
	cout<<"Now Enter Your Message::"<<endl;
	gets(message);
	cout<<endl;
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	cout<<"1. Enter 1 If It's a Plain Text Message You want to Encrypt"<<endl;
	cout<<"2. Enter 2 if It's Cipher Characters You Want to Decrypt"<<endl;
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	cout<<"Your Response:>";
	cin>>choice;

	
	switch(choice)
	{
		case 1:
			encryption(message);
			break;
		case 2:
			decryption(message);
			break;
	}
	

}

