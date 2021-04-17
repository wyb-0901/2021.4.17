#include <stdio.h>
  int play()
	{
		int x=5;
		int number=0;
		printf("请输入数字\n");
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
		printf("开始游戏\n1.开始\n");
		scanf_s("%d", &choice);
		switch (choice)		
		{		
		case 1: play();	
			break;		
		default:			
			printf("选择错误\n");	
			break;		
		} 
	}
	while (choice);
	return 0;
	}

 