#include<stdio.h>
int main()
{int x,y;
	char grade,menu;
printf("1������ȼ��������\n");
 printf("2�������������ȼ�\n");
 printf("3���˳�\n");
scanf("%c",&menu);    //����ѡ��Ĳ˵���
switch(menu)
 {
  case  '1':
    // ����ɼ��ȼ��������Ӧ���������
   {
   	printf("��������ĵȼ�:");
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
  // ����ɼ������������Ӧ�ȼ������ 
  {printf("��������ĳɼ���");
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
	printf("��ĳɼ��ȼ���:%c\n",grade);}
  case  '3': {printf("end\n");break;} 

  default:printf("�˵�����������!\n");    
} //switch menu
} //main
