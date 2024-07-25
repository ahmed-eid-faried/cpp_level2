#pragma once
#include<iostream>
using namespace std;
void FormatIntger() {
	int Page = 1, TotalPages = 10;
	// print string and int variable   
	printf("The page number = %d \n", Page);
	printf("The page Num = %d \n", Page);
	printf("You are in Page %d of %d \n", Page, TotalPages);
	//Width specification  
	printf("The Page Number =  %0*d \n", 6, Page);
	printf("The Page Number =  %0*d \n", 5, Page);
	printf("The Page Number =  %0*d \n", 4, Page);
	printf("The Page Number =  %0*d \n", 3, Page);
	printf("The Page Number =  %0*d \n", 2, Page);
	printf("The Page Number =  %0*d \n", 1, Page);
	int Number1 = 20, Number2 = 30;
	printf("The Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);
	printf("%d * %d = %d", Number1, Number2, Number1 * Number2);
}


