#include <iostream>
#include <vector>
#include <exception>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string filename;
	cout << "Please Enter then name of the file you want to read." << "\n";
	cin >> filename;
	string line;
	ifstream myfile(filename);
	int linechecker = 0;
	if (myfile.is_open())
	{

		while (getline(myfile, line))
		{
			if (linechecker == 0)
			{
				cout << "Image Format : " << line << '\n';
				linechecker = linechecker + 1;
			}
			else if (linechecker == 1)
			{
				cout << "Width: " << line.substr(0, 1) << '\n' << "Length: " << line.substr(2, 3) << '\n';
				linechecker = linechecker + 1;
			}
			else if (linechecker == 2)
			{
				cout << "Max Pixel Value : " << line << '\n' << "Data :" << '\n';
				linechecker = linechecker + 1;
			}
			else
			{
				int counter = 0;
				//Make every third item in the list 0 starting with element 0.
				for (int i = 1; i < line.length(); i++)
				{
					if (counter = 0 || counter % 3 == 1) 
					{
						cout << "0";
					}
					else 
					{
						cout << line.substr(i - 1, i);
					}
					counter = counter + 1;
				}
				cout << '\n';
			}

		}
		myfile.close();

	}

	else cout << "Unable to open file";



	return 0;
}
