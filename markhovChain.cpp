#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
int arry[15][15] = {0};

arry[0][0]=50;
arry[0][1]=50;

arry[2][1]=50;
arry[2][3]=50;

arry[3][2]=50;
arry[3][4]=50;

arry[4][5]=50;
arry[4][3]=50;

arry[5][4]=50;
arry[5][6]=50;

arry[6][7]=50;
arry[6][5]=50;

arry[7][8]=50;
arry[7][6]=50;

arry[8][9]=50;
arry[8][7]=50;
/*
arry[9][10]=50;
arry[9][8]=50;

arry[10][9]=50;
arry[10][11]=50;

arry[11][12]=50;
arry[11][10]=50;

arry[12][13]=50;
arry[12][11]=50;

arry[13][14]=50;
arry[13][12]=50;

arry[14][15]=50;
arry[14][13]=50;
*/
srand(time(NULL));
int node=0;
int test = 100;//how many times we run it
int total[test]= {0};
size_t s = 0; // numeber of step
int d = rand() % 100; //random gen 
for(int i = 0; i < test; i++)
{
	while(node != 10)
	{
		int totalP = 0;
		d = rand() % 100;
		for(int n=0;n<10;n++)
		{
			totalP = totalP + arry[node][n];
			if(d<totalP)
			{
				node = n;
				s++;
				break;
			}
		}
	}
	total[i]=s;
	node=0;
	s=0;
}
int maxTotal=0;
int minTotal=0;
int mean=0;
for (int i = 0; i < test; i++)
{
	int temp = total[i];
	mean += total[i]; 

	if(temp > maxTotal)
	{
		maxTotal = temp;
	}

	if(temp < maxTotal)
	{
		minTotal = temp;
	}
}
int meanTotal = (mean/test); 

std::cout << "Max: " << maxTotal << std::endl;
std::cout << "Min: " << minTotal << std::endl;
std::cout << "Mean: " << meanTotal << std::endl;

return 0;
}
