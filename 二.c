#include<stdio.h>
int main()
{int x,y;
	char grade,menu;
printf("1、输入等级输出分数\n");
 printf("2、输入分数输出等级\n");
 printf("3、退出\n");
scanf("%c",&menu);    //接收选择的菜单号
switch(menu)
 {
  case  '1':
    // 输入成绩等级，输出相应分数程序段
   {
   	printf("请输入你的等级:");
    scanf(" %c",&grade);
    switch(grade)
    {
    	case 'A':printf("90~100\n");break;
    	case 'B':printf("80~90\n");break;
    	case 'C':printf("70~80\n");break;
    	case 'D':printf("60~70\n");break;
    	case 'E':printf("<60\n");break;
  	 }
  	 return 0;}
     
  case  '2':
  // 输入成绩分数，输出相应等级程序段 
  {printf("请输入你的成绩：");
	scanf("%d",&x);
	if(x>100||x<0)
	{printf("ERROR!"); }
	y=x/10;
	switch(y)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:grade='E';break;
	case 6:grade='D';break;
	case 7:grade='C';break;
	case 8:grade='B';break;
	case 9:
	case 10:grade='A';break;
	}
	printf("你的成绩等级是:%c\n",grade);}
  case  '3': {printf("end\n");break;} 

  default:printf("菜单号输入有误!\n");    
} //switch menu
} //main
