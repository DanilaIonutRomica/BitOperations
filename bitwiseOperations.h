#ifndef bitwiseOperation
#define bitwiseOperation

#include "binaryAndDecimalConversions.h"
int toggleABit(int bitPosition,int number)
{
  int a=1;
  a=a<<(bitPosition-1);
  number=number^a;
  return number;
}
int allBits1(int number)
{
  int a=1<<31;
  a=~a;
  number=number|a;
  return number;
}
int allBits0(int number)
{
  number=number&0;
  return number;
}
int setABit(int bitPosition,int number)
{
  number=number|(1<<(bitPosition-1));
  return number;
}
int clearABit(int bitPosition,int number)
{
  number=number&(~(1<<(bitPosition-1)));
  return number;
}
int getABit(int bitPosition,int number)
{
  int bitStatus;
  bitStatus=(number>>(bitPosition-1))&1;
  return bitStatus;

}
int getHighestBitPosition(int number)
{
  int order=-1;
  int i;
   for(i=0; i<32; i++)
    {
      if((number>>i) & 1)
        order = i;
    }
  return order;
}

#endif