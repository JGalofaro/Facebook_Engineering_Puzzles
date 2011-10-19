#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

class person
{
public:
    person();
    ~person();
    string getName();
    int getAccused();
    void setAccused(int n);
    void setName( string name );
private:
    string user;
    int accused;
};

person::person()
{
    user = "";
    accused = 0;
}

person::~person()
{
    //Deconstructor
}

string person::getName(){ return user; }

int person::getAccused(){ return accused; }

void person::setAccused(int n)
{
    accused += n;
}

void person::setName( string name )
{
	user = name;
}
int main( int argc, char *argv[] )
{
	ifstream input;
	input.open(argv[1]);
	string line;
	int vet;	//number of veteran users
	bool header = true;

	if( input.is_open() )
	{
		getline( input, line );
		vet = atoi( line.c_str() );
	}
	person *people = new person[vet];

	for( int i = 0; i < vet; i++ )
	{
		people[i].setName("Empty");
	}

	if( input.is_open() )
	{
		int m = 2;	//number of users being accused

		while( !input.eof() )
		{
			getline( input, line );
			cout << line << endl;
			if( header )	//May not be needed
			{
				//split line up into accuser and <m>
				header = false;
			}
			for( int i = 0; i < m; i++ )
			{
				getline( input, line );
				cout << line << endl;
				//Check if user has already been archived
				//if no:
				//create a new person at first "empty" slot, enter name
				//increase accused var. by 1
				//If yes:
				//increase accused var. by 1
			}
			header = true;
		}
		input.close();
	}

    return 1;
}
