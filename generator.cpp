//generates the sequences

#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <cstring>
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
		if(strcmp(argv[2], "d")==0)
		{
			random = false;
			descending = true;
		}
		else if(strcmp(argv[2], "r")==0)
		{
			random = true;
			descending = false;
		}
		else
		{
			random = false;
			descending = false;
		}
	if(argc > 3)
	{
		path = string(argv[3]);
	}
	ofstream file(path.c_str());
	srand(clock());
	file<<length<<" ";
	while(length > 0)
	{
		file << (rand())<<" "<< endl;
		--length;
	}
	file.close();
}