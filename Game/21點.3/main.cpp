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
	printf("�п�J�w�X:");
	scanf("%d",&i);
	printf("\n\n");
	while(i>0)
	{
		printf("�ФU�`:");
		scanf("%d",&i1);
		printf("\n\n");
		c = rand()%10+1;
		d = rand()%10+1;	
		f = rand()%10+1;
		f1 = rand()%10+1;
		f2 = rand()%10+1;
		printf("�A���P�O:%d   %d  \n\n",c,d);
		printf("�O�_�[�P?y/n\n\n");
		char yn[5];
		scanf("%s",&yn);
		printf("\n\n");
		if(strcmp(yn,"y")==0)
		{
			if((c+d+f)>21)
			{
				printf("�A���P�O %d %d %d    �A��F!\n\n",c,d,f);
				i=i-i1;
				printf("�Ѿl�w�X:%d\n\n",i);
			}
			else
			{
			printf("�A���P�O %d %d %d    \n\n",c,d,f);
			printf("�O�_�[�P?y/n\n\n");
			scanf("%s",&yn);
			printf("\n\n");
			if(strcmp(yn,"y")==0)
			{
				if((c+d+f+f1)>21)
				{	
					printf("�A���P�O %d %d %d %d   �A��F!\n\n",c,d,f,f1);
					i=i-i1;
					printf("�Ѿl�w�X:%d\n\n",i);
				}
				else
				{
					printf("�A���P�O %d %d %d %d   \n\n",c,d,f,f1);
					printf("�O�_�[�P?y/n\n\n");
					scanf("%s",&yn);
					printf("\n\n");
					if(strcmp(yn,"y")==0)
					{
						if((c+d+f+f1+f2)>21)
						{
							printf("�A���P�O %d %d %d %d %d   �A��F!\n\n",c,d,f,f1,f2);
							i=i-i1;
							printf("�Ѿl�w�X:%d\n\n",i);
						}
						else
						{
							printf("�A���P�O %d %d %d %d %d  ( �� �s ) �AĹ�F!\n\n",c,d,f,f1,f2);
							i=i+i1;
							printf("�Ѿl�w�X:%d\n\n",i);
						}
					}
					else
					{
						t=c+d+f+f1;
						printf("�A���P�O %d %d %d %d  �@%d�I\n\n",c,d,f,f1,t);
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
						printf("�A���I�ƬO%d    �q�����I�ƬO:%d\n\n",t,com);
						if((c+d+f+f1)<com)
						{
							printf("�A��F\n\n");
							i=i-i1;
							printf("�Ѿl�w�X:%d\n\n",i);
						}
						else if((c+d+f+f1)>com)
						{
							printf("�AĹ�F\n\n");
							i=i+i1;
							printf("�Ѿl�w�X:%d\n\n",i);
						}
						else
						{
							printf("����\n\n");
						}
					}
				}
			}
			else
			{
				t=c+d+f;
				printf("�A���P�O %d %d %d  �@%d�I\n\n",c,d,f,t);
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
				printf("�A���I�ƬO%d    �q�����I�ƬO:%d\n\n",t,com);
				if((c+d+f)<com)
				{
					printf("�A��F\n\n");
					i=i-i1;
					printf("�Ѿl�w�X:%d\n\n",i);
				}
				else if((c+d+f)>com)
				{
					printf("�AĹ�F\n\n");
					i=i+i1;
					printf("�Ѿl�w�X:%d\n\n",i);
				}
				else
				{
					printf("����\n\n");
				}
			}	
			}
		}
		else
		{
			t=c+d;
			printf("�A���P�O %d %d   �@%d�I\n\n",c,d,t);
			t=c+d;
			int com;
			com= rand()%5;
			if(com<6)
			{	
				com=com+17;
			}	
			t=c+d;
			printf("�A���I�ƬO%d    �q�����I�ƬO:%d\n\n",t,com);
			if((c+d)<com)
			{
				printf("�A��F\n\n");
				i=i-i1;
				printf("�Ѿl�w�X:%d\n\n",i);
			}
			else if((c+d)>com)
			{
				printf("�AĹ�F\n\n");
				i=i+i1;
				printf("�Ѿl�w�X:%d\n\n",i);
			}
			else
			{
			printf("����\n\n");
 			}
		}
	}
system("pause");
return 0;
} 

