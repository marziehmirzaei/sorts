//generates the sequences

#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

main(int argc, char** argv)
{
	int length = 100;
	bool descending = false;
	bool random = true;
	string path = "";
	if(argc > 1)
		stringstream(argv[1]) >> length;
	if(argc > 2)
		if(!argv[2].compare("d"))
		{
			random = false;
			descending = true;
		}
		else if(!argv[2].compare("d"))
		{
			random = false;
			descending = false;
		}
		else if(!argv[2].compare("r"))
		{
			random = true;
			descending = false;
		}
	if(argc > 3)
	{
		path = string(argv[3]);
	}
	ofstream file(path.c_str());
	srand(clock());
	while(length > 0)
	{
		file << (rand()) << endl;
		--length;
	}
	file.close();
}