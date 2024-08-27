#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int cid,pid,qty,total,price;
 	char cname[20],pname[20];
 	float cgst,sgst,finalAmt;
 	printf("\nEnter product id:");
 	scanf("%d",&pid);
 	printf("\nEnter product name:");
 	scanf("%s",pname);
 	printf("\nEnter customer id:");
 	scanf("%d",&cid);
 	printf("\nEnter customer name:");
 	scanf("%s",cname);
 	printf("\nEnter product price:");
 	scanf("%d",&price);
 	printf("\nEnter product quantity:");
 	scanf("%d",&qty);
 	total=qty*price;
 	cgst=total*.18;
 	sgst=total*0.08;
 	finalAmt=total+cgst+sgst;
 	printf("\n                           Rajesh Electronic                                  ");
 	printf("\n                              Bill Receipt                                    ");
 	printf("\nSr.No");
 	printf("\n  01.\tProduct id is                :%d",pid);
 	printf("\n  02.\tProduct name is              :%s",pname);
 	printf("\n  03.\tCustomer id is               :%d",cid);
 	printf("\n  04.\tCustomer name is             :%s",cname);
 	printf("\n  05.\tProduct price is             :%d",price);
 	printf("\n  06.\tQuantity of product is       :%d",qty);
 	printf("\n  07.\tTotal price is               :%d",total);
 	printf("\n  08.\tTotal CGST is                :%.2f",cgst);
 	printf("\n  09.\tTotal SGST is                :%.2f",sgst);
 	printf("\n........................................................................ ");
 	printf("\n  10.\tFinal amount to be paid is  :%.2f",finalAmt);
 	
	return 0;
}
