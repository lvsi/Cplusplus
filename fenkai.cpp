#include<iostream>
#include<fstream>
#include<cstdlib>

#include<cstdio>

using namespace std;

int main(  )
{
    fstream infile( "original.txt" );
    
    int i = 0,limit;
    
    cout << "��������Ҫ�Ͽ��Ĵ�С"<< endl;
    cin >> limit;
    
    while( !infile.eof() )
    {
           int len = 0;
           i++;
           char num[30];
           sprintf( num,"���Ʋ��%d.txt",i );
           ofstream outfile( num );
           
           while( !infile.eof()&&len < limit )
           {
               string s;
               infile >> s;
               len += s.length();
               outfile << s << endl;
           }
           
          cout << i << endl;
           
           outfile.close();
    }
    system( "pause" );
    return 0;
}
