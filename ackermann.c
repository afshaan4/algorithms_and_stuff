/*
 Ackermann's function in c.
 Faster than the one I wrote in python and it doesn't crash
 after calculating ackermann of 4, 1
 */

#include <stdio.h>

// does all the calculations
int ack(int m, int n) {
	int ans;
	
	if (m == 0) ans = n+1;
	else if (n == 0) ans = ack(m-1,1);
	else ans = ack(m-1, ack(m,n-1));
	return (ans);
}

// increments i and j and passes them as args to ack()
int main (int argc, char ** argv) { 
	int i,j;

	for (i=0; i<6; i++)
	for (j=0;j<6; j++)

	printf ("ackerman (%d,%d) is: %d\n",i,j, ack(i,j));
}

