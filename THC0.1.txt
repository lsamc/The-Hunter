#include<conio.h>
#include<stdio.h>

int isID(char *s){
			int flag=0;
		int i=0;
		for(i=0;s[i];i++){
			if(!isdigit(s[i])) return 0;
		}
		return 1;
}

int timeIsAvailable（int y,int m）{
    if()return 0;
  	else return 1;
}
void main()
{
    printf("————————欢迎来到《潜杀猎航》————————\n*********************************\n");
    printf("哨兵前台:这里是大德意志大西洋海军司令部，请出示身份证明(姓名或ID):\n");

	char player[50];
    scanf("%s",&player);
			
	  	if(isID(player))
	 		{
	    			printf("哨兵前台:你好,%s指挥官",player);
	 		}
  		else 
  		    {
	     		printf("哨兵前台:哦！是%s先生啊，你终于来了，Wilson部长在等你!\n",player);
      		    printf("        进门左转，将会有人带你去见部长先生\n");
        
        		getch();
     		    getch();
      		    clrscr();
       
      		    printf("咚咚咚...\n");sleep(3);
	     		printf("Wilson:请进\n");sleep(1);
      		    printf("%s前来报道!\n",player);
        
      		    printf("press any key to continue.(Maybe two time)")getch（）;getch（）;
      		    clrscr（）;
        
				printf("————————部长办公室————————\n");
				printf("Wilson:哦？是%d先生啊，欢迎欢迎，请坐。\n");sleep(1);
				printf("Wilson:元首向我提到过你，一名优秀的海军军官，现在想做一名U艇指挥官了？\n");sleep(1);
				printf("\n你想什么时间加入我们潜艇计划？（1939.09-1943.06）\n");
			
				int year,month;
				
					if(0)loop1: printf("(如果这是第2次及以上问你，那应该是你之前输入了不合要求的时间)\n")；
					
					printf("年份？（1939-1943）:");
					scanf("%d",&year);
					printf("\n月份？（1-12,注意从1939年9月开始，至1943年6月结束）:");
					scanf("%d",&month);
				
				//while(year<1939||year>1943||(year==1939&&month<9)||(year==1943&&month>6))
				
				switch(year)
				{
					case 1939:
						{
							if(month<9||month>12)goto(loop1);
							
							printf("Wilson:这么心急？好！帝国正需要你这样的热心人才！\n");sleep(1);
							printf("Wilson:你正是我所期盼的那样！那么，稍作休整，就出征吧。帝国以你为傲！\n");sleep(1);
							printf("%s:Heil Hitler!（高举左手）\n"，player);
							printf("press any key to continue.(Maybe two time)");getch();getch();
							clrscr();
							if(month>9)printf("%d个月后...",month-9);sleep(1);
							
							if(0) loop2: printf("(如果这是第2次及以上问你，那应该是你之前输入了不合要求的时间)\n")；
					
							printf("————————（难得的晴天）船坞里————————");
							printf("Wilson：准备好了，我的朋友？选一艘你喜欢的潜艇吧！\n");
							printf("船坞里有三种型号的潜艇：VIIA，VIIB，IXA\n");sleep(1);
							printf("(1.VIIA	2.VIIB	3.IXA)\n");
							
							int choose;
							char type[6];
							scanf("%d",&choose);
							switch(choose)
							{
								case 1:{type="VIIA";break;}
								case 2:{type="VIIB";break;}
								case 3:{type="IXA";break;}
								default：{goto(loop2);}
							)
							
							clrscr();
							printf("————————（难得的晴天）船坞里————————");
							printf("Wilson：准备好了，我的朋友？选一艘你喜欢的潜艇吧！\n");
							printf("%s：我要Type %s的！这艘怎么样？(指向旁边的一艘U艇）\n",player,);
							printf("Wilson:好嘛我的朋友，你挺有眼光的嘛，我也很喜欢Type %s的艇。这艘船归你了我的艇长\n");
							
							break;
						}
					case 1940:
						{
							if(month<1||month>12)goto(loop1);
							break;
						}
					case 1941:
						{
							if(month<1||month>12)goto(loop1);
							break;
						}
					case 1942:
						{
							if(month<1||month>12)goto(loop1);
							break;
						}
					case 1943:
						{
							if(month>6||month>12)goto(loop1);
							
							break;
						}
					default: goto(loop1);
				}
  		    }
}