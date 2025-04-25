# OperatingSystemsStuff

## Added Petersons Solution 
```c
volatile bool flag[2] = {false, false};  // This is the intent of both processes. I.E when true they want to enter the critical section
volatile int turn = 0; // Which processes' turn it is

void enter_critical_section(int self) { // self if the process. I didn't bother writing the processes part
    int other = 1 - self; // Sets other to the oposite of the process 1 - 1 = 0; 1 - 0 = 1;
    flag[self] = true; //Sets the intent flag to true
    turn = other;
    while (flag[other] && turn == other);  //The busy waiting part of it.
}

void exit_critical_section(int self) {
    flag[self] = false;
}
```
This program ensures mutual exclusion.
