#include <iostream>
#include <vector>
#include <exception>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string filename;
	string outputname;
	cout << "Please Enter the name of the input file \n";
	cin >> filename;
	cout << "Please enter the name of the output file \n";
	cin >> outputname;
	string line;
	ifstream myfile(filename);
	fstream output(outputname);
	int linechecker = 0;
	if (myfile.is_open())
	{
		//This just puts everything into output.ppm
		while (getline(myfile, line))
		{
			output << line << '\n';
		}
		myfile.close();
		//Now I just have to print out the output file
		if (output.is_open()) {
			while (getline(output, line))
			{	
				cout << line << '\n';
			}
			output.close();

		}



	}
	else {

	}
	return 0;
}



