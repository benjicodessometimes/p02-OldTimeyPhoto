//Benjamin Millar csci111 p02 picture thing...
#include <iostream>
#include <string>
#include <bitmap.h>
using namespace std;

/*
This program will first need to comunicate with the use to make a file name
and save that as the name of a file that is s"aved as a Windows BMP format image.
Then we will convert the image to gray scale or black and white through some kind
of function or loop that uses a counter to go through each pixel and average out
the hue values. Lastly we save or update the existing file with the changes
we made to it.
*/
int main()
{
string imgname;
cout << "Hello this program makes photos look oldtimey, please type in the name of the image" << endl;
cin>>imgname;
void open(imgname);
vector <vector <Pixel> > imgname();
if(imgname.size()>0 && imgname[0].size()>0)
    {
       for(int i =0; i < imganame.size();i++)
       {
         for(int j =0;j<imgname[i].size();j++)
         {
           int avghue = (imgname[i][j].red + imgname[i][j].green + imgname[i][j].blue)/3
           imgname[i][j] = avghue;
         }
      }
    }
  void save(imgname);
  return 0;
}
