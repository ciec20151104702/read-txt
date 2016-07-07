#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
  
using namespace std;
  
int coutFile(char * filename,char * outfilename)
{
  ifstream filein;
  filein.open(filename,ios_base::in);
  ofstream fileout;
  fileout.open(outfilename,ios_base::out);
  string strtemp;
  int count=0;
  while(getline(filein,strtemp))
  {
    count++;
    cout<<strtemp<<endl;
    fileout<<count<<" "<<strtemp<<endl;
  }
  filein.close();
  fileout.close();
  return count;
}
  
  
int main()
{
  cout<<coutFile("C:\\export.gpx","c:abc.txt")<<endl;
}
