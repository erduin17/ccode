// 2d_array_8by8.c
//open this file and rename it as  2d_8x8_rgb.cpp
// create a switch case that sets red, green, and blue integers
// base on integer values from array m[r][c]
// val = m[r][c]
// red,green, and blue range is from 0 to 255
#include <iostream>
#include <stdio.h>
int main()

{
		int r,c;//row and column
		int red, green, blue;
		int val = 0;
		int m[8][8] = {
			{5,5,5,5,5,5,5,5} ,
			{5,0,0,0,0,0,0,5} ,
			{5,0,5,5,5,5,0,5} ,
			{5,0,5,1,1,5,0,5} ,
			{5,0,5,1,1,5,0,5} ,
			{5,0,5,5,5,5,0,5} ,
			{5,0,0,0,0,0,0,5},
			{5,5,5,5,5,5,5,5}for (c = 0; c < 8; c++){
				  val = m[r][c];
					switch (val){
						case 0:
							red = 0; green = 0; blue = 0;
							break;
						case 1:
							red = 255; green = 255; blue = 0;
							break;
						case 2:
							red = 255; green = 255; blue = 0;
							break;
						case 3:
						 red = 255; green = 255; blue = 0;
							break;
						case 4:
							red = 255; green = 255; blue = 0;
							break;
						default:
							red = 255; green = 255; blue = 0;
						 break;
					}
					std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
				}
		};
			red = 0; green = 0; blue = 0;
		  for (r = 0; r < 8; r++){
				for (c = 0; c < 8; c++){
				  val = m[r][c];
					switch (val){
						case 0:
							red = 0; green = 0; blue = 0;
							break;#include <iostream>
						case 1:
							red = 255; green = 255; blue = 0;
							break;
						case 2:
							red = 255; green = 255; blue = 0;
							break;
						case 3:for (c = 0; c < 8; c++){
				  val = m[r][c];
					switch (val){
						case 0:
							red = 0; green = 0; blue = 0;
							break;
						case 1:
							red = 255; green = 255; blue = 0;
							break;
						case 2:
							red = 255; green = 255; blu#include <iostream>e = 0;
							break;
						case 3:
						 red = 255; green = 255; blue = 0;
							break;
						case 4:
							red = 255; green = 255; blue = 0;
							break;
						default:
							red = 255; green = 255; blue = 0;
						 break;#include <iostream>
					}
					std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
				}
						 red = 255; green = 255; blue = 0;
							break;
						case 4:
							red = 255; green = 255; blue = 0;
							break;
						default:
							red = 255; green = 255; blue = 0;
						 break;
					}//end c
					std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
				}
			std:cout<<end;
		}
	return 0;
}
