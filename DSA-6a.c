#include<stdio.h>
struct stuinfo
{
	int regno,m1,m2,m3,m4,m5,total;
	float avg;
	char name[20],dept[20];
};

int total(struct stuinfo a)
{
	int tot;
	tot=a.m1+a.m2+a.m3+a.m4+a.m5;
	return tot;
}
float average(struct stuinfo b)
{
	float avg;
	avg=(b.m1+b.m2+b.m3+b.m4+b.m5)/5;
	return avg;
}

int main()
{
	struct stuinfo list[20];
	int n;
	printf("Enter number of students:");
	scanf("%d",&n);
    int i;
	float avgsum,class_avg;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Information for Student #%d", i + 1);

        printf("\n Enter name:");
		scanf("%s",&list[i].name);
		printf("\n Enter register no:");
		scanf("%d",&list[i].regno);
		printf("\n Enter department:");
		scanf("%s",&list[i].dept);
		printf("\n Enter the marks in the 5 subjects:");
		scanf("\n%d\n%d\n%d\n%d\n%d",&list[i].m1,&list[i].m2,&list[i].m3,&list[i].m4,&list[i].m5);
        list[i].total=0;
		list[i].avg=0;
		list[i].total=total(list[i]);
		list[i].avg=average(list[i]);
		avgsum+=list[i].avg;
	}
		class_avg=avgsum/n;
		printf("\n\n Class Average = %f",class_avg); 
	
	
    printf("\n\nStudent No\t\tName\t\tReg No\t\tDepartment\t\tMark 1\t\tMark 2\t\tMark 3\t\tMark 4\t\tMark 5\t\tTotal\t\tAverage\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t\t%s\t\t%d\t\t%s\t\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%f\n",i+1,list[i].name,list[i].regno,list[i].dept,list[i].m1,list[i].m2,list[i].m3,list[i].m4,list[i].m5,list[i].total,list[i].avg);
    }
}

