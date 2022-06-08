//    Copyright 2022 SUBHADIP JANA

//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at

//        http://www.apache.org/licenses/LICENSE-2.0

//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.




#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void delay(int sec){
    int milis= 1000* sec;
    clock_t start_time = clock();
    while (clock() < start_time + milis)
    {
        ;
    }
    
}
int main(){
    float mr, mp, coep, nop, au, ycsm, ciy;
    float  PM, LTV, CLV, ARPU, CAC;
    printf("Welcome Friend !");
    delay(2);
    printf("\nI need some information about your venture to create realistic data.");
    delay(2);
    printf("\nEnter the amount of monthly revenue :");
    scanf("%f",&mr);
    printf("\nEnter the amount of monthly profit :");
    scanf("%f",&mp);
    printf("\nEnter the cost of each product/service :");
    scanf("%f",&coep);
    printf("\nEnter the number of products/service each customer will buy throughout a year :");
    scanf("%f",&nop);
    printf("\nEnter the estimated number of costomers in a year :");
    scanf("%f",&au);
    printf("\nEnter the monthly cost of sales and marketing :");
    scanf("%f",&ycsm);
    printf("\nEnter the number of new customers gain after marketing and sales in a year :");
    scanf("%f",&ciy);
    delay(1);
    printf("Processing");
    delay(1);
    printf(".");
    delay(1);
    printf(".");
    delay(1);
    printf(".");
    PM = ((mp/mr)*100);
    LTV = (coep*nop*1);
    CLV = (LTV*PM);
    ARPU = ((mr*12)/au);
    CAC = ((ycsm*12)/ciy);
    
    printf("\nThanks for sharing those information !");
    delay(1);
    printf("\nYour profit margin is : %f percent",PM);
    printf("\nThe value of LTV = %f INR",LTV);
    printf("\nThe value of CLV = %f INR",CLV);
    printf("\nThe value of ARPU = %f INR",ARPU);
    printf("\nThe value of CAC = %f INR",CAC);
    delay(1);
    printf("\nThanks for co-operating with me !");
    return 0;
}