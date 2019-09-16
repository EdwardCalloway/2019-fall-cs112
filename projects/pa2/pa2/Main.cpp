#include <iostream>
#include <vector>
#include <exception>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string line;
	ifstream myfile ("tinypix.ppm");
	int linechecker = 0;
	if (myfile.is_open())
	{

		while ( getline (myfile, line) )
		{
			if (linechecker == 0)
			{
				cout << "Image Format : " << line << '\n';
				linechecker = linechecker + 1;
			}
			else if (linechecker == 1)
			{
				cout << "Width: " << line.substr(0,1) << '\n' << "Length: " << line.substr(2,3) << '\n';
				linechecker = linechecker + 1;
			}
			else if (linechecker == 2)
			{
				cout << "Max Pixel Value : " << line << '\n' << "Data :" << '\n';
				linechecker = linechecker + 1;
			}
			else
			{
				cout << line << '\n';
			}
		
		}
		myfile.close();
	
	}

	else cout << "Unable to open file";



	return 0;
}
