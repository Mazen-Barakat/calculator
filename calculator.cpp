#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	while (true)
	{
		int system;
		cout << "enter 1 for mathematical calculations" << endl;
		cout << "enter 2 for ASCII" << endl;
		cout << "enter 3 for square root" << endl; //choose your system
		cout << "enter 4 for power" << endl;
		cout << "enter 5 for conversion between numerical systems" << endl;
		cout << "enter 6 for operations on numerical systems" << endl;
		cin >> system;
		if (system == 1)
		{
			cout << "enter your operation" << endl;
			double op1, op2, result;
			char operation;
			cin >> op1 >> operation >> op2;
			if (operation == '+') //sum operation
			{
				result = op1 + op2;
				cout << result << endl << endl;
			}
			else if (operation == '-') //subtraction operation
			{
				result = op1 - op2;
				cout << result << endl << endl;
			}
			else if (operation == '*') //multiplication operation
			{
				result = op1 * op2;
				cout << result << endl << endl;
			}
			else if (operation == '/') //divide operation
			{
				result = op1 / op2;
				cout << result << endl << endl;
			}
			else
			{
				cout << "Wrong operation" << endl << endl;
			}
		}
		else if (system == 2)
		{
			int m;
			cout << "do you want 1- ASCII CODE , 2- ASCII CHARACTER " << endl;
			cin >> m;
			if (m == 1) //ascii code
			{
				cout << "ENTER CHARACTER" << endl;
				char c;
				cin >> c;
				cout << "ASCII CODE OF " << c << " IS " << int(c) << endl << endl;
			}
			else //ascii character
			{
				cout << "ENTER CODE" << endl;
				int c;
				cin >> c;
				cout << "ASCII CHARACTER OF " << c << " IS " << char(c) << endl << endl;
			}
		}
		else if (system == 3)
		{
			float u;
			cout << "enter a positive number ";
			cin >> u;
			cout << "square root of " << u << " =" << sqrt(u) << endl << endl; //square root
		}
		else if (system == 4)
		{
			float b, o, p;
			char op;
			cout << "enter your number like 2^2 " << endl; //power operation
			cin >> b >> op >> o;
			if (op == '^')
			{
				p = pow(b, o);
				cout << "result of" << b << "^" << o << "=" << p << endl << endl;
			}
		}
		else if (system == 5)
		{
			int ch; //numerical system
			cout << " choose your system " << endl;
			cout << " 1- binary to decimal \t 2- binary to octal \t 3-binary to Hexadecimal \t 4- decimal to binary \t " << endl << endl;
			cout << " 5- decimal to octal \t 6- decimal to Hexadecimal \t 7- octal to binary \t 8- octal to decimal \t " << endl << endl;
			cout << " 9- octal to Hexadecimal\t 10- Hexadecimal to binary\t 11-Hexadecimal to decimal\t 12-Hexadecimal to octal \t" << endl;
			cin >> ch;
			if (ch == 1)
			{
				long bin;
				long dic = 0;
				int rem;
				cout << "enter your binary number" << endl; //binary to decimal
				cin >> bin;
				for (int i = 1; bin > 0; i = i * 2)
				{
					rem = bin % 10;
					bin = bin / 10;
					dic = (rem * i) + dic;
				}
				cout << "your decimal number is " << dic << endl << endl;
			}
			else if (ch == 2)
			{
				long bin, dec = 0;
				int rem;
				cout << "Enter Your Binary Number ";
				cin >> bin;
				for (int i = 1; bin > 0; i = i * 2) //convert binary to decimal
				{
					rem = bin % 10;
					bin = bin / 10;
					dec = dec + (rem * i);
				} //now our number is decimal
				long oct = 0; //convert decimal to octal
				for (int i = 1; dec > 0; i = i * 10)
				{
					rem = dec % 8;
					dec = dec / 8;
					oct = oct + (rem * i);
				}
				cout << "Your Octal Number Is " << oct << endl << endl;
			}
			else if (ch == 3)
			{
				long bin, dec = 0;
				int rem;
				cout << "Enter Your Binary Number ";
				cin >> bin;
				for (int i = 1; bin > 0; i = i * 2) //convert binary to decimal
				{
					rem = bin % 10;
					bin = bin / 10;
					dec = dec + (rem * i);
				} //now our number is decimal
				int i; //convert decimal to Hexadecimal
				long hexa[100];
				for (i = 0; dec > 0; i++)
				{
					hexa[i] = dec % 16;
					dec = dec / 16;
				}
				cout << "Your Hexadecimal Number Is ";
				for (int x = i - 1; x >= 0; x--)
				{
					if (hexa[x] >= 10)
						cout << char(hexa[x] + 55);
					else
						cout << hexa[x];
				}
				cout << endl << endl;
			}
			else if (ch == 4)
			{
				int i = 0, k, dec; //convert decimal to binary
				int bin[50];
				cout << "Enter Your Decimal Number ";
				cin >> dec;
				if (dec <= 0) //check our number is positive op negative
					cout << "Wrong Syntax" << endl;
				else
				{
					for (i; dec > 0; i++)
					{
						bin[i] = dec % 2; //enter number to array
						dec = dec / 2;
					}
					cout << "Your Binary Number Is ";
					for (k = i - 1; k >= 0; k--)
						cout << bin[k];
				}
				cout << endl << endl;
			}
			else if (ch == 5) //convert decimal to octal
			{
				long dec;
				long oct = 0;
				int rem;
				cout << "enter your decimal number" << endl;
				cin >> dec;
				for (int i = 1; dec > 0; i = i * 10)
				{
					rem = dec % 8;
					dec = dec / 8;
					oct = oct + (rem * i);
				}
				cout << "your octal number is " << oct << endl << endl;
			}
			else if (ch == 6) //convert decimal to hexadecimal
			{
				long long hexa[100], dec = 0;
				int i = 0;
				cout << "enter your decimal number" << endl;
				cin >> dec;
				for (dec; dec > 0; i++)
				{
					hexa[i] = dec % 16; //enter number to array
					dec = dec / 16;
				}
				cout << "your hexadecimal number is ";
				for (int x = i - 1; x >= 0; x--)
				{
					if (hexa[x] >= 10)
						cout << (char)(hexa[x] + 55); //use ascii to covert 10 to A
					else
						cout << hexa[x];
				}
				cout << endl << endl;
			}
			else if (ch == 7)
			{
				long oct, dec = 0; //first convert octal to decimal
				int rem;
				cout << "enter your octal number ";
				cin >> oct;
				for (int i = 1; oct > 0; i = i * 8)
				{
					rem = oct % 10;
					oct = oct / 10;
					dec = dec + (rem * i);
				}
				int i = 0, k; //second convert decimal to binary
				int bin[50];
				for (i; dec > 0; i++)
				{
					bin[i] = dec % 2;
					dec = dec / 2;
				}
				cout << "Your Binary Number Is ";
				for (k = i - 1; k >= 0; k--)
					cout << bin[k];
				cout << endl << endl;
			}
			else if (ch == 8)
			{ //convert octal to decimal
				long oct, dec = 0;
				int rem;
				cout << "enter your octal number ";
				cin >> oct;
				for (int i = 1; oct > 0; i = i * 8)
				{
					rem = oct % 10;
					oct = oct / 10;
					dec = dec + (rem * i);
				}
				cout << "your decimal number is " << dec << endl << endl;
			}
			else if (ch == 9)
			{
				long oct, dec = 0; //first convert octal to decimal
				int rem;
				cout << "enter your octal number ";
				cin >> oct;
				for (int i = 1; oct > 0; i = i * 8)
				{
					rem = oct % 10;
					dec = dec + (rem * i);
					oct = oct / 10;
				}
				long long hexa[100]; //second convert decimal to hexadecimal
				int i = 0;
				for (i; dec > 0; i++)
				{
					hexa[i] = dec % 16;
					dec = dec / 16;
				}
				cout << "your hexadecimal number is ";
				for (int x = i - 1; x >= 0; x--)
				{
					if (hexa[x] >= 10)
						cout << (char)(hexa[x] + 55); //use ascii to convert 10 to A
					else
						cout << hexa[x];
				}
				cout << endl << endl;
			}
			else if (ch == 10)
			{
				char hexa[100]; //first convert Hexadecimal to decimal
				long dec = 0;
				cout << "Enter Hexadecimal Number From The Right ";
				cin >> hexa;
				for (int x = 0; hexa[x] > 0; x++)
				{
					if (hexa[x] == 'A' || hexa[x] == 'B' || hexa[x] == 'C' || hexa[x] == 'D' || hexa[x] == 'F')
					{
						dec += (int(hexa[x]) - 55) * pow(16, x);
					}
					else if (hexa[x] == 0 || hexa[x] == 1 || hexa[x] == 2 || hexa[x] || hexa[x] == 3 || hexa[x] == 4 || hexa[x] == 5 || hexa[x] == 6 || hexa[x] == 7 || hexa[x] == 8 || hexa[x] == 9)
						dec += (int(hexa[x]) - 48) * pow(16, x);
				}
				int i = 0, k; //second convert decimal to binary
				int bin[50];
				if (dec <= 0)
					cout << "Wrong Syntax" << endl;
				else
				{
					for (i; dec > 0; i++)
					{
						bin[i] = dec % 2;
						dec = dec / 2;
					}
					cout << "Your Binary Number from the left Is ";
					for (k = i - 1; k >= 0; k--)
						cout << bin[k];
				}
				cout << endl << endl;
			}
			else if (ch == 11)
			{
				char hexa[100]; //convert Hexadecimal to decimal
				long dec = 0;
				cout << "Enter Hexadecimal Number From The Right ";
				cin >> hexa;
				for (int x = 0; hexa[x] > 0; x++)
				{
					if (hexa[x] == 'A' || hexa[x] == 'B' || hexa[x] == 'C' || hexa[x] == 'D' || hexa[x] == 'F') //use ascii to convert A to 10
					{
						dec += (int(hexa[x]) - 55) * pow(16, x);
					}
					else if (hexa[x] == 0 || hexa[x] == 1 || hexa[x] == 2 || hexa[x] || hexa[x] == 3 || hexa[x] == 4 || hexa[x] == 5 || hexa[x] == 6 || hexa[x] == 7 || hexa[x] == 8 || hexa[x] == 9)
						dec += (int(hexa[x]) - 48) * pow(16, x);
				}
				cout << "Your Decimal Number From The Left " << dec << endl << endl;
			}
			else if (ch == 12)
			{
				char hexa[100]; //first convert Hexadecimal to decimal
				long dec = 0;
				cout << "Enter Hexadecimal Number From The Right ";
				cin >> hexa;
				for (int x = 0; hexa[x] != 0; x++)
				{
					if (hexa[x] == 'A' || hexa[x] == 'B' || hexa[x] == 'C' || hexa[x] == 'D' || hexa[x] == 'F')
					{
						dec += (int(hexa[x]) - 55) * pow(16, x); //use ascii to convert A to 10
					}
					else if (hexa[x] == 0 || hexa[x] == 1 || hexa[x] == 2 || hexa[x] || hexa[x] == 3 || hexa[x] == 4 || hexa[x] == 5 || hexa[x] == 6 || hexa[x] == 7 || hexa[x] == 8 || hexa[x] == 9)
						dec += (int(hexa[x]) - 48) * pow(16, x);
				}
				long oct = 0; //second convert decimal to octal
				int rem;
				for (int i = 1; dec > 0; i = i * 10)
				{
					rem = dec % 8;
					dec = dec / 8;
					oct = oct + (rem * i);
				}
				cout << "your octal number from the left is " << oct << endl << endl;
			}
			else
				cout << " syntax error" << endl;
		}
		else if (system == 6)
		{
			int ch;
			cout << "choose your system" << endl;
			cout << " 1-binary 2-octal 3-Hexadecimal " << endl;
			cin >> ch;
			if (ch == 1)
			{
				long bin1, bin2;
				long dic1 = 0, dic2 = 0;
				int rem1, rem2;
				cout << "enter your first binary number "; //first convert first number from binary to decimal
				cin >> bin1;
				cout << "enter your second binary number "; //first convert second number from binary to decimal
				cin >> bin2;
				for (int i1 = 1; bin1 > 0; i1 = i1 * 2)
				{
					rem1 = bin1 % 10;
					bin1 = bin1 / 10;
					dic1 = dic1 + (rem1 * i1);
				}
				for (int i2 = 1; bin2 > 0; i2 = i2 * 2)
				{
					rem2 = bin2 % 10;
					dic2 = dic2 + (rem2 * i2);
					bin2 = bin2 / 10;
				}
				int op, result; //then do our operation in decimal
				cout << " choose your operation 1-sum 2-multiply 3-subtraction " << endl;
				cin >> op;
				if (op == 1)
					result = dic1 + dic2;
				else if (op == 2)
					result = dic1 * dic2;
				else if (op == 3)
					result = dic1 - dic2;
				int i = 0, k, dec; //final convert decimal to binary
				dec = result;
				int bin[50];
				if (dec < 0)
					cout << "Wrong Syntax" << endl;
				else if (dec == 0)
					cout << "0000000000" << endl;
				else
				{
					for (i; dec > 0; i++)
					{
						bin[i] = dec % 2;
						dec = dec / 2;
					}
					cout << "Your Binary Number Is ";
					for (k = i - 1; k >= 0; k--)
						cout << bin[k];
				}
				cout << endl << endl;
			}
			else if (ch == 2)
			{
				long oct1, dec1 = 0;
				int rem1, rem2;
				long oct2, dec2 = 0;
				cout << "enter your first binary number "; //first convert first number from binary to decimal
				cin >> oct1;
				cout << "enter your second binary number "; //first convert second number from binary to decimal
				cin >> oct2;
				for (int i = 1; oct1 > 0; i = i * 8)
				{
					rem1 = oct1 % 10;
					dec1 = dec1 + (rem1 * i);
					oct1 = oct1 / 10;
				}
				for (int i = 1; oct2 > 0; i = i * 8)
				{
					rem2 = oct2 % 10;
					dec2 = dec2 + (rem2 * i);
					oct2 = oct2 / 10;
				}
				int op, result; //then do our operation in decimal
				cout << " choose your operation 1-sum 2-multiply 3-subtraction " << endl;
				cin >> op;
				if (op == 1)
					result = dec1 + dec2;
				else if (op == 2)
					result = dec1 * dec2;
				else if (op == 3)
					result = dec1 - dec2;
				long dec;
				dec = result;
				long oct = 0;
				int rem;
				for (int i = 1; dec > 0; i = i * 10) //final convert decimal to octal
				{
					rem = dec % 8;
					dec = dec / 8;
					oct = oct + (rem * i);
				}
				cout << "your octal number is " << oct << endl << endl;
			}
			else if (ch == 3)
			{
				char hexa1[100];
				char hexa2[100];
				long dec1 = 0;
				long dec2 = 0;
				cout << "Enter your first Hexadecimal Number From The Right "; //first convert first number from binary to decimal
				cin >> hexa1;
				cout << "Enter your second Hexadecimal Number From The Right "; //first convert second number from binary to decimal
				cin >> hexa2;
				for (int x = 0; hexa1[x] != 0; x++)
				{
					if (hexa1[x] == 'A' || hexa1[x] == 'B' || hexa1[x] == 'C' || hexa1[x] == 'D' || hexa1[x] == 'F')
					{
						dec1 += (int(hexa1[x]) - 55) * pow(16, x);
					}
					else if (hexa1[x] == 0 || hexa1[x] == 1 || hexa1[x] == 2 || hexa1[x] || hexa1[x] == 3 || hexa1[x] == 4 || hexa1[x] == 5 || hexa1[x] == 6 || hexa1[x] == 7 || hexa1[x] == 8 || hexa1[x] == 9)
						dec1 += (int(hexa1[x]) - 48) * pow(16, x);
				}
				for (int x = 0; hexa2[x] != 0; x++)
				{
					if (hexa2[x] == 'A' || hexa2[x] == 'B' || hexa2[x] == 'C' || hexa2[x] == 'D' || hexa2[x] == 'F')
					{
						dec2 += (int(hexa2[x]) - 55) * pow(16, x);
					}
					else if (hexa2[x] == 0 || hexa2[x] == 1 || hexa2[x] == 2 || hexa2[x] || hexa2[x] == 3 || hexa2[x] == 4 || hexa2[x] == 5 || hexa2[x] == 6 || hexa2[x] == 7 || hexa2[x] == 8 || hexa2[x] == 9)
						dec2 += (int(hexa2[x]) - 48) * pow(16, x);
				}
				int op, result; //then do our operation in decimal
				cout << " choose your operation 1-sum 2-multiply 3-subtraction " << endl;
				cin >> op;
				if (op == 1)
					result = dec1 + dec2;
				else if (op == 2)
					result = dec1 * dec2;
				else if (op == 3)
					result = dec1 - dec2;
				long long hexa[100], dec = 0;
				dec = result;
				int i = 0;
				for (dec; dec > 0; i++) //final convert decimal to hexadecimal
				{
					hexa[i] = dec % 16;
					dec = dec / 16;
				}
				cout << "Your hexadecimal number From The Left is ";
				for (int x = i - 1; x >= 0; x--)
				{
					if (hexa[x] >= 10)
						cout << (char)(hexa[x] + 55);
					else
						cout << hexa[x];
				}
				cout << endl << endl;
			}
		}
	}

	return 0;
}