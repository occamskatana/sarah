#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fin("data.dat");
	ofstream fout("report.txt");
	int counter = 0;
	int total = 0;

	if(fin.fail())
	{
		cerr << "Could not open file";
		exit(1);
	}

	if(fout.fail())
	{
		cerr << "Could not open output file";
		exit(1);
	}

	string data;

	while(data != "-99"){ 
		getline(fin, data);
		int rawr = atoi(data.c_str());
		if(rawr != -99)
		{
			total += rawr;
			counter++;
		}

	}

	float avg = total / counter;
	

	fout << counter << " Counter" << endl;
	fout << total << " Total" << endl;
	fout << avg << " Average" << endl;
	

	cout << avg << " average written to" << fout << endl;
	return 0;
}

