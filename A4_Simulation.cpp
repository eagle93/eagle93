#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;


double Negative_Exponential (double p)
{
    int U = rand()  % 100;
    double U = (double)U / 100;
    return ( -log(U) / p );
}

int main()
{
    srand(time(NULL));
    int M, N, MAX, ARR, LINK, CLOCK, BUSY, TOT, COMP, BLOCK;
    ARR = LINK = CLOCK = BUSY = TOT = COMP = BLOCK = 0;
    puts("Enter the number of links in system");
    cin >> M;
    puts("Enter the number of lines in system");
    cin >> N;
    bool *Lines = new bool[N];
    for(int i=0 ; i<N ; i++)
        Lines[i] = (rand()%2)%2;
//    for(int i=0 ; i<N ; i++)
//        cout << Lines[i] << " ";
    puts("Enter the max number of calls per simulation run");
    cin >> MAX;
    double X = Negative_Exponential(2.0); // mean = 0.5, lamda = 2.0;
    ARR = CLOCK +X;

    if(LINK<M)
    {
       LIN[CAL1]=rand()%10;
       LIN[CAL2]=rand()%10;
    if (LIN[CAL1] == 0 && LIN[CAL2] == 0) // what’s CAL1 ???
         {
             	SERT=rand()%10; 
              	}
}
 	   else
 	    {
      	   BUSY += 1;
      	   TOT += 1;
                  	 
 	}
}

  //        LIN[CAL1]=rand()%10;
//        LIN[CAL2]=rand()%10;
//    }
    delete Lines;
    return 0;
}



