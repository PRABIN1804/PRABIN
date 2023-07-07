

#include <stdio.h>
#include<math.h>
int main ()
{
float unit,unit_a,unit_b,unit_c,bill;
printf("Enter the total unit:\n");
scanf("%f", &unit);
if (unit<=50)
{
bill=((50/100)*unit);
}
else if (50<unit<=150)
{
unit_a = unit - 50;
bill = ((50/100)*50)+((75/100)*unit_a);
}
else if (150<unit<=250)
{
unit_b = unit - 150;
bill = ((50/100)*50)+((75/100)*100)+((120/100)*unit_b);
}
else
{
unit_c = unit - 250;
bill = ((50/100)*50)+((75/100)*100)+((120/100)*100)+((150/100)*unit_c);
}
printf("the total bill is %f", bill);
return 0;
}