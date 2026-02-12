
#include <stdio.h>
#include <math.h>

/*
 * Potrfolio submission
 * Name:Saloni Pradhan
 * ID: 201829493
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary = 24000.0;
    float NI_contribution = 8;
    float tax_contribution = 20;
    float deductions;
    float take_home_salary;

    float NI_percent;
    float tax_percent;

    float deposit = 120.0;
    float rate = 0.05;
    int term = 5;
    float final_amount;
    float gain;

    // calculate the deductions and final take-home salary
    NI_percent = (NI_contribution/100);
    tax_percent = (tax_contribution/100);

    NI_contribution = salary * NI_percent;

    tax_contribution = ((salary - NI_contribution)-12500)*tax_percent;

    take_home_salary = salary - NI_contribution - tax_contribution;




    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NI_contribution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%.2f\n",take_home_salary);


    /*
     * Implement the formula for compound interest.
     * Print out the final amount and the gain compared to the initial deposit.
     */
    
    final_amount = deposit * pow(( 1 + rate ),term);
    gain = final_amount - deposit;

    printf("The final amount is %f\n",final_amount);
    printf("The final gain is %f\n",gain);

    return 0;
 }