#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h> 
using namespace std;
void delay_sec(int sec)
{
	time_t start_time,cur_time;
	time(&start_time);
	do
	{
		time(&cur_time);
	} while((cur_time - start_time) < sec);
}
void endly()
{
	system("cls");
	cout<<endl<<endl<<endl<<"                        -------Thanks for using-------"<<endl;
	cout<<endl<<endl<<endl<<"                           produce by DARKSTALKING"<<endl<<endl<<"                              IP£º10.110.167.46"<<endl;
	cout<<endl<<"                                  2019.3.23"<<endl<<endl<<"                    ¡ï¡ï¡ï¡ï¡ï                  ¡î¡î¡î¡î¡î"<<endl<<endl<<endl; 
	cout<<endl<<endl;
	cout<<"                 Reproduction is prohibited without permission"<<endl<<endl<<endl;
	delay_sec(5);
	
	return;
}
int main()
{
		int min;int sec;int hour;
		cout<<endl<<endl<<endl<<"                   Which kind of function do you want to use?"<<endl;
		cout<<"                   Press 1 for stopwatch and 2 for countdown." <<endl<<endl<<"                                       ";
		char ch1;
		scanf(" %c",&ch1);
		if(ch1==49)
		{
			min=0;
			sec=-1;
			hour=0;
			while(1)
			{
				if (_kbhit())
				{
					char ch;
					ch=_getch();
					if(ch==69||ch==101)
					{
						endly();
						return 0;
					}
					if (ch==80||ch==112)
					{
						int kkk=0;
						while(!_kbhit()&&kkk==0)
						{
							system("cls");
							cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                              "<<hour<<" hour "<<min<<" min "<<sec<<" sec"<<endl;
							cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                             press 'k' to continue"; 
							delay_sec(1);
							if(_kbhit())
							{
								ch=_getch();
								if(ch==69||ch==101)
								{
									endly();
									return 0;
								}
								if(ch==107||ch==75)	
								{
									kkk=1;	
									system("cls");						
								}
		
							}
						}	
					}
				}
				sec+=1;
				if(sec==60)
				{
					min+=1;
					sec=0;
				}
				if(min==60)
				{
					hour+=1;
					min=0;
				}
				system("cls");
				cout<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<endl<<endl;
				cout<<"                              "<<hour<<" hour "<<min<<" min "<<sec<<" sec"<<endl;
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                              press 'p' to pause";
				cout<<endl<<endl<<endl<<"                               press 'e' to quit"<<endl;
				delay_sec(1);
			}
		}
		if(ch1==50)	
		{
			cout<<endl<<endl<<"                   Please input minute at here ";
			cin>>min;
			cout<<"                   Please input second at here ";
			cin>>sec;
			if(sec>60)
			{
				min+=sec/60;
				sec=sec%60;
			}
			if(MessageBox(NULL,"        Start counting down now?","                           Tips",MB_OKCANCEL)==1)
			while(min>=0)
			{
				char ch;
				system("cls");
				if(_kbhit())
				{
					ch=_getch();
					if(ch==69||ch==101)
					{
						endly();
						return 0;
					}
					if (ch==80||ch==112)
					{
						int kkk=0;
						while(!_kbhit()&&kkk==0)
						{
							system("cls");
							cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                "<<min<<" min "<<sec<<" sec left"<<endl;
							cout<<endl<<endl<<endl<<endl<<endl<<endl<<"                              press 'k' to continue"; 
							cout<<endl<<endl<<endl<<"                                press 'e' to quit"<<endl;
							delay_sec(1);
							if(_kbhit())
							{
								ch = _getch();
								if(ch==69||ch==101)
								{
									endly();
									return 0;
								}
								if(ch==107||ch==75)	
								{
									kkk=1;	
									system("cls");						
								}
		
							}
						}	
					}
				}
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                "<<min<<" min "<<sec<<" sec left"<<endl;
				cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                               press 'p' to pause";
				cout<<endl<<endl<<endl<<"                               press 'e' to quit"<<endl;
				delay_sec(1);
				if(sec==0)
				{
					min-=1;
					sec=60;
				}	
				sec-=1;
			}
			system("cls");
			for(int i=0;i<5;i+=1)
			{
				delay_sec(1);
				system("cls");
				cout<<"\a";
				cout<<endl<<endl<<endl<<endl<<endl<<"                          Your countdown is over!"<<endl;	
				delay_sec(1); 
				cout<<"\a"<<"\a";
			}
			delay_sec(5); 
			endly();
			return 0;
		}
		else
		{
			endly();
			delay_sec(6);
		}
	return 0;
}
