#include<stdio.h>
struct stuinfo
{
	char name[20],dept[20];
	int regno,m1,m2,m3,m4,m5,total,avg;
};
int total(struct stuinfo *a)
{
	int total;
	total=a->m1+a->m2+a->m3+a->m4+a->m5;
	return total;
}
int avg(struct stuinfo *b)
{
	int avg;
	avg=(b->m1+b->m2+b->m3+b->m4+b->m5)/5;
	return avg;
}
int main()
{
	int n,i;
	float class_avg,avgsum=0;
	printf("Enter number of students:");
	scanf("%d",&n);
	struct stuinfo data[n];
	for(i=0;i<n;i++)
	{
		printf("Enter details of student #%d\n",(i+1));
		printf("Enter name:");
		scanf("%s",&data[i].name);
		printf("Enter register no:");
		scanf("%d",&data[i].regno);
		printf("Enter department:");
		scanf("%s",&data[i].dept);
		printf("Enter the marks in the 5 subjects:");
		scanf("%d %d %d %d %d",&data[i].m1,&data[i].m2,&data[i].m3,&data[i].m4,&data[i].m5);
		data[i].total=0;
		data[i].avg=0;
		data[i].total=total(&data[i]);
		data[i].avg=avg(&data[i]);
		avgsum+=data[i].avg;
	}
	class_avg=avgsum/n;
	printf("\nClass average=%f",class_avg);
	for(i=0;i<n;i++)
	{
		printf("\nStudent%d:\nName : %s\nRegNo : %d\nDepartment : %s\nSUBJECT 1 = %d\nSUBJECT 2 = %d\nSUBJECT 3 = %d\nSUBJECT 4 = %d\nSUBJECT 5 = %d\ntotal = %d\naverage = %d\n\n",(i+1),data[i].name,data[i].regno,data[i].dept,data[i].m1,data[i].m2,data[i].m3,data[i].m4,data[i].m5,data[i].total,data[i].avg);
	}

}
