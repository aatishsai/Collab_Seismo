
int mod1(int a, int b)
{
   if(b < 0) 
   return mod1(-a, -b);   
   int ret = a % b;
   if(ret < 0)
     ret+=b;
   return ret;
}