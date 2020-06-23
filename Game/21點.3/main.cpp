#include <time.h>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char** argv)
{
	system("color a");
	int t,b,c,d,f,f1,f2,i,i1,e,g;i1=1;
	srand((unsigned)time(NULL));
	printf("請輸入籌碼:");
	scanf("%d",&i);
	printf("\n\n");
	while(i>0)
	{
		printf("請下注:");
		scanf("%d",&i1);
		printf("\n\n");
		c = rand()%10+1;
		d = rand()%10+1;	
		f = rand()%10+1;
		f1 = rand()%10+1;
		f2 = rand()%10+1;
		printf("你的牌是:%d   %d  \n\n",c,d);
		printf("是否加牌?y/n\n\n");
		char yn[5];
		scanf("%s",&yn);
		printf("\n\n");
		if(strcmp(yn,"y")==0)
		{
			if((c+d+f)>21)
			{
				printf("你的牌是 %d %d %d    你輸了!\n\n",c,d,f);
				i=i-i1;
				printf("剩餘籌碼:%d\n\n",i);
			}
			else
			{
			printf("你的牌是 %d %d %d    \n\n",c,d,f);
			printf("是否加牌?y/n\n\n");
			scanf("%s",&yn);
			printf("\n\n");
			if(strcmp(yn,"y")==0)
			{
				if((c+d+f+f1)>21)
				{	
					printf("你的牌是 %d %d %d %d   你輸了!\n\n",c,d,f,f1);
					i=i-i1;
					printf("剩餘籌碼:%d\n\n",i);
				}
				else
				{
					printf("你的牌是 %d %d %d %d   \n\n",c,d,f,f1);
					printf("是否加牌?y/n\n\n");
					scanf("%s",&yn);
					printf("\n\n");
					if(strcmp(yn,"y")==0)
					{
						if((c+d+f+f1+f2)>21)
						{
							printf("你的牌是 %d %d %d %d %d   你輸了!\n\n",c,d,f,f1,f2);
							i=i-i1;
							printf("剩餘籌碼:%d\n\n",i);
						}
						else
						{
							printf("你的牌是 %d %d %d %d %d  ( 五 龍 ) 你贏了!\n\n",c,d,f,f1,f2);
							i=i+i1;
							printf("剩餘籌碼:%d\n\n",i);
						}
					}
					else
					{
						t=c+d+f+f1;
						printf("你的牌是 %d %d %d %d  共%d點\n\n",c,d,f,f1,t);
						int com;
						com= rand()%21+1;
						if(com<16)
						{
							com=com+6;
						}
						if(com<16)
						{
							com=com+6;
						}
						printf("你的點數是%d    電腦的點數是:%d\n\n",t,com);
						if((c+d+f+f1)<com)
						{
							printf("你輸了\n\n");
							i=i-i1;
							printf("剩餘籌碼:%d\n\n",i);
						}
						else if((c+d+f+f1)>com)
						{
							printf("你贏了\n\n");
							i=i+i1;
							printf("剩餘籌碼:%d\n\n",i);
						}
						else
						{
							printf("平手\n\n");
						}
					}
				}
			}
			else
			{
				t=c+d+f;
				printf("你的牌是 %d %d %d  共%d點\n\n",c,d,f,t);
				int com;
				com= rand()%21+1;
				if(com<16)
				{	
					com=com+6;
				}
				if(com<16)
				{
					com=com+6;
				}
				printf("你的點數是%d    電腦的點數是:%d\n\n",t,com);
				if((c+d+f)<com)
				{
					printf("你輸了\n\n");
					i=i-i1;
					printf("剩餘籌碼:%d\n\n",i);
				}
				else if((c+d+f)>com)
				{
					printf("你贏了\n\n");
					i=i+i1;
					printf("剩餘籌碼:%d\n\n",i);
				}
				else
				{
					printf("平手\n\n");
				}
			}	
			}
		}
		else
		{
			t=c+d;
			printf("你的牌是 %d %d   共%d點\n\n",c,d,t);
			t=c+d;
			int com;
			com= rand()%5;
			if(com<6)
			{	
				com=com+17;
			}	
			t=c+d;
			printf("你的點數是%d    電腦的點數是:%d\n\n",t,com);
			if((c+d)<com)
			{
				printf("你輸了\n\n");
				i=i-i1;
				printf("剩餘籌碼:%d\n\n",i);
			}
			else if((c+d)>com)
			{
				printf("你贏了\n\n");
				i=i+i1;
				printf("剩餘籌碼:%d\n\n",i);
			}
			else
			{
			printf("平手\n\n");
 			}
		}
	}
system("pause");
return 0;
} 

