#ifndef binaryAndDecimalConversions
#define binaryAndDecimalConversions

#include <math.h>

char* fromDecimalToBinary (int number)
{
 static char result[32];
  if(number<0) 
    result[0]='1';
  else{
    result[0]='0';}
  int contor=31;
  while(number!=0)
  {
    int remeinder=number%2;
    if(remeinder==0)
    result[contor]='0';
    else 
result[contor]='1';
    number/=2;
    contor--;
  }
  while(contor!=0)
  {
    result[contor]='0';
    contor--;
  }
  return result;
}
int fromBinaryToDecimal(char number[32])
{
  int result=0;
  int powerOfTwo=1;
  for(int i=31;i!=0;i--)
  {
    if(number[i]=='0')
    result+=powerOfTwo*0;
    else
    result+=powerOfTwo*1;
    powerOfTwo*=2;
  }
  if(number[0]=='0')
  result*=-1;
  
  return result;
}
char* fromDoubleToBinary(double number,int* contorReal)
{
  static char result[64];
  int integerNumber=(int)(floor(number));
  char *resutInt=fromDecimalToBinary(integerNumber);
   for(int i=0;i<32;i++)
  {
    result[i]=*(resutInt+i);
  }
  double parteaFractionara=number-integerNumber;
  int contor=32;
  while(parteaFractionara!=0.0&&contor<64)
  {
    parteaFractionara*=2;
    int rest=(int)(floor(parteaFractionara));
    rest=rest%2;
    if(rest==0)
    result[contor]='0';
    else 
result[contor]='1';
    contor++;
  }
  *contorReal=contor;
 
  return result;
}
//HOW TO CALL ALL THESE FUNCTIONS

 /* int number=155;
  char* result;
  result=fromDecimalToBinary(number);
  printf("nummber in binary: ");
  for(int i=0;i<32;i++){
    if((i%4)==0)
    {
      printf(" ");
    }
  printf("%c",*(result+i));
  }
  printf("\n");
  int result1=fromBinaryToDecimal(result);
  printf("number from binary to decimal is  %d",result1);
  double number=3.1415920000;
  char* result;
  
  int contor;
  result=fromDoubleToBinary(number,&contor);
  for(int i=0;i<contor;i++)
  {
    if((i%4)==0)
    {
      printf(" ");
    }
    if(i==32)
    printf(".");
  printf("%c",*(result+i));
  }*/
#endif
