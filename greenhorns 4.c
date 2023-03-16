#include<stdio.h>
main()
{
	int bs=100,hra=10,da=5,ta=8,ans;
	
	hra=bs*hra/100;
	da=bs*da/100;
	ta=bs*ta/100;
	ans=bs+hra+da+ta;
	
	printf("gross salary=%d",ans);
}
