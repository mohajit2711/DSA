#include<cmath>
int totalSalary(int basic, char grade) 
{
   float a;
   if(grade=='A')
       a = 1700;
   else if(grade == 'B')
       a = 1500;
   else
       a = 1300;
   return round(basic*1.59 + a);
}
