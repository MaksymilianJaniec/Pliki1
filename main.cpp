#include <iostream>
#include <fstream>
using namespace std;


int main()
{
fstream plik;

string linia;
int x;
int y;
int licznik=0;
plik.open("wsp.txt", ios::in);	

if(plik.good()==true)
{
while(!plik.eof())
{
licznik++;
plik >> x >> y;
cout<<"\n x=\t"<<x<<"\t y=\t"<<y;

}
plik.close();
}



plik.open("wynik.txt", ios::out);
for(int i=1; i<=licznik; i++)
{
if(x>0 && y>0)
{
plik <<"\n x=\t"<<x<<"\t y=\t"<<y<<" 1 - cwiartka"<<endl;
}
else if (x>0 && y<0)
{
plik <<"\n x=\t"<<x<<"\t y=\t"<<y<<" 4 - cwiartka"<<endl;
}
else if (x<0 && y<0)
{
plik <<"\n x=\t"<<x<<"\t y=\t"<<y<<" 3 - cwiartka"<<endl;
}
else if(x<0 && y>0)
{
plik <<"\n x=\t"<<x<<"\t y=\t"<<y<<" 2 - cwiartka"<<endl;
}

}



plik.close();

return 0;
}



