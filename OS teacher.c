
#include<stdio.h>
#include<stdbool.h>
struct required
{
 	bool pen ;
	bool paper ;
	bool question_paper ;
	bool all_three ;
};
int main()
{
	int n=3;
	struct required  p[n];
	p[0].pen=true;		
	p[0].paper = false;
	p[0].question_paper = false;
	p[0].all_three= false;
	p[1].pen=false;		
	p[1].paper = true;
	p[1].question_paper = false;
	p[1].all_three = false;
	p[2].pen=false;		
	p[2].paper = false;
	p[2].question_paper = true;
	p[2].all_three = false	;
	while(p[0].all_three==false||p[1].all_three==false||p[2].all_three==false)
	{
		int c1,c2;
		printf("\nResources:\n1.pen\n2.paper\n3.question paper\n Enter the two things which is to be placed on the shared table: ");
		scanf("%d%d",&c1,&c2);
		if(c1==1 && c2==2 && p[2].all_three==false)
		{
			p[2].all_three=true ;
			printf("\n\t*****Third Student has completed the task*****\n");
		}
		if(c1==2 && c2==3 && p[0].all_three==false)
		{
			p[0].all_three=true;
			printf("\n\t*****First Student has completed the task*****\n");
		}
		if(c1==1 && c2==3 && p[1].all_three==false)
		{
			p[1].all_three=true;
			printf("\n\t*****Second Student has completed the task*****\n");
		}
	}
	printf("\n*$*$ All the students now have completed their respective tasks succesfully *$*$\n");
	return 0;
}


