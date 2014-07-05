// Credits goes to Professor Brailsford for sharing the knowledge with us at http://youtu.be/i7sm9dzFtEI

#include <stdlib.h>
#include <stdio.h>

int ack(int m, int n) {
  int ans;
  if(m == 0) ans = n + 1;
  else if(n == 0) ans  = ack(m-1,1);
  else ans = ack (m-1, ack(m,n-1));
  return ans;
}

int main(int argc, char ** argv){
  int i,j;
  for(i=0; i<6; i++)
  for(j=0; j<6; j++)
    printf("ackermann (%d,%d) is: %d\n", i, j, ack(i,j));
}
