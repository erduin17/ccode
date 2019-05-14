//switch_2d0
#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
		int r,c;//row and column
		string word = "ProsDontTalk";
		int val = 0;
		int m[8][8] = {
			{1,1,1,1,1,1,1,1} ,
			{1,0,0,0,0,0,0,1} ,
			{1,0,2,2,2,2,0,1} ,
			{1,0,2,3,3,2,0,1} ,
			{1,0,2,3,3,2,0,1} ,
			{1,0,2,2,2,2,0,1} ,
			{1,0,0,0,0,0,0,1},
			{1,1,1,1,1,1,1,1}
		};

		  for (r = 0; r < 8; r++){
				for (c = 0; c < 8; c++){
			  	val = m[r][c];
					switch ( val ) {
					case 1:            // Note the colon, not a semicolon
						word = "***";
						break;
						case 2:            // Note the colon, not a semicolon
						word = "%%%";
						break;
					case 3:            // Note the colon, not a semicolon
						word = "$$$";
						break;
					default:            // Note the colon, not a semicolon
						word = " 0 ";
						break;
					}
					cout<<word;
				}
				cout<<"\n";
		}
return 0;
}
