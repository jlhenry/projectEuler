//Find the greatest product of five consecutive
//digits in the 1000-digit number.
#include <stdio.h>

int
main() {
	FILE *fp = fopen("number.txt","r");
	int a,b,c,d,e,currentProduct;
	int largestProduct = 0;

	a = fgetc(fp) - '0';
	b = fgetc(fp) - '0';
	c = fgetc(fp) - '0';
	d = fgetc(fp) - '0';
	e = fgetc(fp);

	while (e != EOF)
	{
		if (e != '\n')
		{
			e = e - '0';
			currentProduct = a*b*c*d*e;
			if (currentProduct > largestProduct) largestProduct = currentProduct;
			a = b;
			b = c;
			c = d;
			d = e;
		}

		e = fgetc(fp);
	}

	fclose(fp);

	printf("%d\n",largestProduct);

	return 0;
}
