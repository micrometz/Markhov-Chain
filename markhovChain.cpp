#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
int arry[15][15] = {0};

arry[0][0]=50;
arry[0][1]=50;
arry[2][2]=12;
arry[2][1]=44;
arry[2][3]=44;
arry[3][3]=12;
arry[3][2]=44;
arry[3][4]=44;
arry[4][2]=12;
arry[4][5]=44;
arry[4][3]=44;
arry[5][5]=12;
arry[5][4]=44;
arry[5][6]=44;
arry[6][6]=12;
arry[6][7]=44;
arry[6][5]=44;
arry[7][7]=12;
arry[7][8]=44;
arry[7][6]=44;
arry[8][8]=12;
arry[8][9]=44;
arry[8][7]=44;
arry[9][9]=12;
arry[9][10]=44;
arry[9][8]=44;
arry[10][10]=12;
arry[10][9]=44;
arry[10][11]=44;
arry[11][11]=12;
arry[11][12]=44;
arry[11][10]=44;
arry[12][12]=12;
arry[12][13]=44;
arry[12][11]=44;
arry[13][13]=12;
arry[13][14]=44;
arry[13][12]=44;
arry[14][14]=12;
arry[14][15]=44;
arry[14][13]=44;

srand(time(NULL));
int node=0;
int test = 1000;//number of times we test
int total[test]= {0};
size_t s = 0; // numeber of step
int randN = srand() % 100; //random gen 
for(int i = 0; i < test; i++)
{
	while(node != 15)
	{
		int totalP = 0;
		randN = srand() % 100;
		for(int j=0;j<15;j++)
		{
			totalP = totalP + arry[node][j];
			if(randN<totalP)
			{
				node = j;
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

std::cout << "Mean: " << meanTotal << std::endl;
std::cout << "Max: " << maxTotal << std::endl;
std::cout << "Min: " << minTotal << std::endl;

return 0;
}
