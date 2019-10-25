float qualityPoints()
{
int Avg;
printf("Enter average marks : ");
scanf("%d",&Avg);
if(Avg>=90 && Avg<=100)
return 4;
else if(Avg>=80)
return 3;
else if (Avg>=70)
return 2;
else if (Avg>=60)
return 1;
else
return 0;
}
int main()
{
return qualityPoints();
}
