/*https://en.wikipedia.org/wiki/Peterson%27s_algorithm
Implementation of a Peterson's Algorithm


Works for two processes P0 and P1• 
Critical region control:enter_region(process);
critical_region();
leave_region(process);

*/

#define int n = 2;  // Number of processes 

int turn;
int flag[n];
int process = 0;

void enterRegion(process)
{
    int other;
    other = 1 - process;
    flag[process] = 1;
    turn = process
    while(turn == process && flag[other] == 1)

}


