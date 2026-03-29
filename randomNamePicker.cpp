#include <random>
#include <iostream>
#include <vector>
#include <string>
#include <cstdio>;


using std::mt19937_64;
using std::vector;
using std::cin;
using std::cout;
using std::string;


int main()
{

	vector<string> nameList;


	string temporaryName;
	
	while (cin >> temporaryName)
	{

		nameList.push_back(temporaryName);

		if (temporaryName[0] >= '0' && temporaryName[0] <= '9')
			break;
	
	}


	size_t generateNameNumber;
	sscanf_s(temporaryName.c_str(), "%zu", &generateNameNumber);


	mt19937_64 randomNumberGenerator;
	
	for (size_t i = 0; i <generateNameNumber; i++)
	{
		size_t randomIndex = randomNumberGenerator();

		randomIndex %= nameList.size() - 1;

		cout << nameList[randomIndex] << "\n";
	}

}
