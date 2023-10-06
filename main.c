
// Deferents Number Of Sum , into , Devision --------

          #include<stdio.h>
          int main(){

          int num1,num2,result;
          printf("Enter a Number: ");
          scanf("%d %d",&num1,&num2);

           result = num1 + num2;
          printf(" Sum is: %d\n",result);

            result = num1 - num2;
          printf(" Minus is: %d\n",result);


            result = num1 * num2;
          printf(" into is: %d\n",result);


            result = num1 / num2;
          printf(" Devision is: %d\n",result);

            result = num1 % num2;
          printf(" Multiple  is: %d\n",result);

          return 0;
       }
    

     // Floating average Number -----------------


          #include<stdio.h>

          int main()
          {

            int num1,num2,sum;
            float avg;
            printf("Enter a Number: ");
            scanf("%d %d",&num1,&num2);

            sum = num1 + num2;
            printf("The sum is : %d\n",sum);

            avg = (float)sum/2;
            printf("The average is = %f\n",avg);

            return 0;
          }


        
          // Float is Two Character -------------------

             
              
          #include<stdio.h>

          int main()
          {

            int num1,num2,sum;
            float avg;
            printf("Enter a Number: ");
            scanf("%d %d",&num1,&num2);

            sum = num1 + num2;
            printf("The sum is : %d\n",sum);

            avg = (float)sum/2;
            printf("The average is = %.2f\n",avg);

            return 0;
          }

            





