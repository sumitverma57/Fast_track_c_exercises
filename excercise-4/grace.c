#include <stdio.h>
#include <assert.h>
int score_board(int newscore)
{
  if(newscore>=45&& newscore<=49)
    {
      if (newscore==49)
        newscore+=1;
      else
      newscore+=2;
  }
  else if(newscore>=40&&newscore<=44)
    newscore+=3;

  else if(newscore>=35&&newscore<=39)
    newscore+=4;

  else if(newscore>=30&&newscore<=34)
    newscore+=5;

  else if(newscore>=25&&newscore<=29)
    newscore+=6;

  else if(newscore<25)
    newscore=25;
  return newscore;
}
int main()
{
  int score=0;
  int sc;
  int score1=20,score2=35,score3=46,score4=49;
  printf("enter score:");
  scanf("%d",&score);
  sc=score_board(score);
  printf("the final marks is: %d", sc);
  assert(score_board(score1)==25);
  assert(score_board(score2)==39);
  assert(score_board(score3)==48);
  assert(score_board(score4)==50);




}
