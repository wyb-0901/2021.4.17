#include <stdio.h>
  int play()
	{
		int x=5;
		int number=0;
		printf("����������\n");
	again_:	
		{
			scanf("%d",&number);
			while(number != x){
				if(number > x)
				{
					printf("Big\n");goto again_;
				}
				else printf("Small\n");goto again_;
			}
			    printf("Right!\n");
		}
	}
	int main()
	{
		int  choice;
	{
		printf("��ʼ��Ϸ\n1.��ʼ\n");
		scanf_s("%d", &choice);
		switch (choice)		
		{		
		case 1: play();	
			break;		
		default:			
			printf("ѡ�����\n");	
			break;		
		} 
	}
	while (choice);
	return 0;
	}

 