#include <fstream>
#include <iostream>
#include<string.h>
#include<sstream>
#include<cstring>
#include<algorithm>
#include <limits>
#include <cstdlib>
#include <list>
#include<vector>

using namespace std;

 void remove_blank(string filename)
{


ifstream fin(filename.c_str());
vector<string> vs;
string s;
while(getline(fin,s))
    vs.push_back(s);
fin.close();

ofstream fout(filename.c_str());
for(vector<string>::iterator it = vs.begin(); it != vs.end(); ++it)
{
    if(it != vs.begin())
        fout << '\n';
    fout << *it;
}

}
bool is_empty(string filename)
{
ifstream read(filename.c_str());
bool isEmpty = read.peek() == EOF;

return isEmpty;
}

int file_lines(string filename )
{
	int numLines = 0;
	ifstream in(filename.c_str());
	std::string unused;
	while ( std::getline(in, unused) )
		++numLines;

	return numLines;
}

void sortfile(string filename)
{
        ifstream outstream ;
	string line;int i=0 ;int id_p[1000];
	outstream.open(filename.c_str());
        while(getline(outstream, line))
		{
			string firstCharacter;
			stringstream ssin(line);
			ssin>>firstCharacter;
                         id_p[i]=atoi(firstCharacter.c_str());
                         i++;

             }
sort(  id_p,   id_p+file_lines(filename));


outstream.close();

string line_3;int j=0;
ofstream op_new;
op_new.open("temp.txt", std::ios_base::app | std::ios_base::out);

while(j<=file_lines(filename))
{
ifstream op;
op.open(filename.c_str());
 while(getline(op, line_3))
		{
			string first;
			stringstream ssin(line);
			ssin>>first;
                         if(id_p[j]==atoi(first.c_str()))
                         {op_new <<line_3;
                              
                             op.close();
                            op.clear();
                             break;
                  }
                      

             }
j++;
}
op_new.close();
remove(filename.c_str());
rename("temp.txt", filename.c_str());





         
}

void removelastline(string  filename)
{      fstream outstream ;
	string line_1;
	string line_2;
	outstream.open(filename.c_str());
	int num=file_lines(filename);
	cout <<num<<"lines"<<endl;
	while(! outstream.eof())
	{
		getline( outstream,line_1);
	}
	cout <<"line_1"<<line_1<<endl;
	outstream .close();
	outstream.clear();
	ifstream outstrea ;
	outstrea.open(filename.c_str(), std::ios_base::out );
	ofstream   outfile;  
	outfile.open("temp.txt",ios::app);
	//deletedlogs.open("deletedlogs.txt",ios::app);
	while(getline(outstrea, line_2))
	{       
		cout <<"line_2"<<line_2<<endl;

		if (line_1!= line_2 ||  num>1)
		{
			outfile<< line_2<< endl;
			//   cout <<"line_2"<<line_2<<endl;
		}
		else
		{     

			//deletedlogs<<line;
		}
		num=num-1;
	}

	outstrea.close();

	outfile.close();
	remove(filename.c_str());

	rename("temp.txt", filename.c_str());
}





/*fstream& GotoLine(fstream& file, unsigned int num){
  file.seekg(std::ios::beg);
  for(int i=0; i < num - 1; ++i){
  file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  }
  return file;
  }*/