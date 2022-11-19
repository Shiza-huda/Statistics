// DATA STRUCTURES AND ALGORITHM

#include <stdio.h>

#include <math.h>


int main() 
{
    
// Initializing the variables
 
  float Info[50];

  int  i, Number, Num;

  float Mean, Variance, VarianceS, SD, SDS, Sum=0, Varsum=0;
  
  
// Taking input from the user
  
printf("\nPlease Enter the N Value\n");
 
 scanf("%d", &Number);

 
 printf("\nPlease Enter %d real numbers\n",Number);

  for(i=0; i<Number; i++)
 
  {
    
 scanf("%f", &Info[i]);
  
 }
  
 // Calculating Mean
 
 for(i=0; i<Number; i++)
  
 {
   
  Sum = Sum + Info[i];
 
  }
 
 
  Mean = Sum /(float)Number;
  

  //Calculating Variance of Population
 
 for(i=0; i<Number; i++)
  
 {
    
 Varsum = Varsum + pow((Info[i] - Mean),2);
 
  }

  Num = Number - 1;
 
 Variance = Varsum / Number;

  VarianceS = Varsum / Num;
 
 //Calculating Standard Deviation 
 
 SD = sqrt(Variance);
 
 SDS = sqrt (VarianceS);
 
 printf("Mean                             = %.2f\n", Mean);
 
 printf("Variance of Poupulation          = %.2f\n", Variance);
 
 printf("Variance of Sample               = %.2f\n", VarianceS);
 
 printf("Standard deviation of Population = %.2f\n", SD);

 printf("Standard deviation of Sample     = %.2f\n", SDS);  


    
    
    
    return 0;

}
