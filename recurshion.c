#include<stdio.h>
int recursion(int no)
{
    int ans=0;
    if(no==10)
    {
        return 0;
    }
   ans = recursion(no-1);
   return ans;
}
int main()
{
    int ino=10;
    int ret=0;
  ret=recursion(ino);
  printf("%d\n",ret);
  return 0;
    
}