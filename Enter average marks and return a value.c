float qualityPoints()
{
int avg;
printf("Enter average marks : ");
scanf("%d",&avg);
if(avg>=90 && avg<=100)
return 4;
else if(avg>=80)
return 3;
else if (avg>=70)
return 2;
else if (avg>=60)
return 1;
else
return 0;
}
int main()
{
return qualityPoints();
}
