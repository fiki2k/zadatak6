// Zadataka je naci proste brojeve u intervalu kojeg korisnik zada.

#include <stdio.h>
int main()
{
   int br1, br2, flag, i, j;
 
   //Korisnik unesi brojeve koji su pocetak i kraj intervala.
   printf("Unesi 2 prirodna broja:");
   scanf("%d %d", &br1, &br2);
 
   //Prikaz prostih brojeva u zadanom intervalu.
   printf("Prosti brojevi od %d do %d su:\n", br1, br2);
   for(i=br1+1; i<br2; ++i)
   {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }
      if(flag==0)
         printf("%d\n",i);
  }
  return 0;
}
