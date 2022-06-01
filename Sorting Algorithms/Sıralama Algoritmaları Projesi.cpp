#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(int argc, char *argv[]) {
	char islem;
	int secim;
	int siralama;
	
	printf("===================== MENU ====================\nA) Bir siralama algoritmasi secerek diziyi siralayiniz.\nB) Tum siralama algoritmalarini karsilastiriniz.");
	printf("\n\nYapilmasini istediginiz islemi giriniz: "); scanf("%c",&islem);
	
	switch(islem) 
	{
		case 'A':
			{
				printf("\n\nSiralama Algoritmasini Seciniz:\n1-Bubble Sort(Kabarcik Siralama)\n2-Selection Sort (Secmeli Siralama)\n3-Insertion Sort(Eklemeli Siralama)\n4-Shell Sort (Shell Siralamasi)\n",secim);
				scanf("%d",&secim);
				
				switch(secim)
				{
					case 1: //BUBBLE SORT//
						{
							printf("\nSiralama Sekli:\n1-Kucukten Buyuge\n2-Buyukten Kucuge\n",siralama); scanf("%d",&siralama);
							
							if(siralama==1) //KB//
							{
							
								int temp;
     							int i, j;
     							int boyut=10, dizi[10];
     								
     							srand(time(NULL));
     							printf("\nDizinin elemanlari: ");
     							
     							for(i=0;i<boyut;i++)
     							{
     								dizi[i]=rand()%100+1;
     								printf("%d ",dizi[i]);
								}
     							
     							
    								for (i=1; i<boyut; i++)
    								{
       									for (j=0; j<boyut-i; j++)
         								{
             								if(dizi[j] > dizi[j+1])
             								{
                        						temp = dizi [j];
                        						dizi [j] = dizi [j+1];
                        						dizi [j+1] = temp;
            								}
         								}
     								}
     								printf("\nDizinizin kucukten buyuge siralanmis hali: ");
     								for(i=0;i<boyut;i++)
     								{
     									printf("%d ",dizi[i]);
									}
     								
							}
								
							else if(siralama==2) //BK//
							{
							
								int temp;
     							int i, j;
     							int boyut=10, dizi[10];
     								
     							srand(time(NULL));
     							printf("\nDizinin elemanlari: ");
     							
     							for(i=0;i<boyut;i++)
     							{
     								dizi[i]=rand()%100+1;
     								printf("%d ",dizi[i]);
								}
								
								
    								for (i=1; i<boyut; i++)
    								{
       									for (j=0; j<boyut-i; j++)
         								{
             								if(dizi[j] < dizi[j+1])
             								{
                        						temp = dizi [j];
                        						dizi [j] = dizi [j+1];
                        						dizi [j+1] = temp;
            								}
         								}
     								}
     								printf("\nDizinizin buyukten kucuge siralanmis hali: ");
     								for(i=0;i<boyut;i++)
     								{
     									printf("%d ",dizi[i]);
									}
     								
							}	
							
							else printf("GECERSIZ ISLEM");
							
							break;	
							}
					
					case 2: //SELECTION SORT//
					{
						printf("\nSiralama Sekli:\n1-Kucukten Buyuge\n2-Buyukten Kucuge\n",siralama); scanf("%d",&siralama);
						
						if(siralama==1) 
						{
							int boyut=10, dizi[10];
							int i,j;
							int minindex,temp;
						
     							
     						srand(time(NULL));
     						printf("\nDizinin elemanlari: ");
     							
     						for(i=0;i<boyut;i++)
     						{
     							dizi[i]=rand()%100+1;
     							printf("%d ",dizi[i]);
							}
     						
							for(i=0;i<boyut;i++)
							{
								minindex=i;
								
								for(j=i;j<boyut;j++)
								{
									if(dizi[j]<dizi[minindex])
									{
										minindex=j;
									}
								}
								temp=dizi[i];
								dizi[i]=dizi[minindex];
								dizi[minindex]=temp;
							}
							printf("\nDizinizin kucukten buyuge siralanmis hali: ");
     								for(i=0;i<boyut;i++)
     								{
     									printf("%d ",dizi[i]);
									}
						}
						else if(siralama==2) 
						{
							int boyut=10, dizi[10];
							int i,j;
							int minindex,temp;
							
							srand(time(NULL));
							printf("\nDizinin elemanlari: ");
     						
							 for(i=0;i<boyut;i++)
     						{
     							dizi[i]=rand()%100+1;
     							printf("%d ",dizi[i]);
							}
							
							for(i=0;i<boyut;i++)
							{
								minindex=i;
								
								for(j=i;j<boyut;j++)
								{
									if(dizi[j]>dizi[minindex])
									{
										minindex=j;
									}
								}
								temp=dizi[i];
								dizi[i]=dizi[minindex];
								dizi[minindex]=temp;
							}
							printf("\nDizinizin buyukten kucuge siralanmis hali: ");
     								for(i=0;i<boyut;i++)
     								{
     									printf("%d ",dizi[i]);
									}
						
						}	
						else printf("GECERSIZ ISLEM");
							
				break;			
				}
				
				case 3: //INSERTION SORT//
					{
						printf("\nSiralama Sekli:\n1-Kucukten Buyuge\n2-Buyukten Kucuge\n",siralama); scanf("%d",&siralama);
						
						if(siralama==1) //KB//
						{
							int i,j,eleman;
							int boyut=10, dizi[10];
							
							srand(time(NULL));
							printf("\nDizinin elemanlari: ");
     						
							 for(i=0;i<boyut;i++)
     						{
     							dizi[i]=rand()%100+1;
     							printf("%d ",dizi[i]);
							}
							
							for(i=1;i<boyut;i++)
							{
								eleman=dizi[i];
								j=i-1;
								
								while (j>=0 && dizi[j]>eleman)
								{
									dizi[j+1]=dizi[j];
									j--;
								}
								dizi[j+1]=eleman;
							}
							
							printf("\nDizinizin kucukten buyuge siralanmis hali: ");
     							for(i=0;i<boyut;i++)
     							{
     								printf("%d ",dizi[i]);
								}
							
						}
						
						else if(siralama==2) //BK//
						{
							int i,j,eleman;
							int boyut=10, dizi[10];
							
							srand(time(NULL));
							printf("\nDizinin elemanlari: ");
     						
							 for(i=0;i<boyut;i++)
     						{
     							dizi[i]=rand()%100+1;
     							printf("%d ",dizi[i]);
							}
							
							for(i=1;i<boyut;i++)
							{
								eleman=dizi[i];
								j=i-1;
								
								while (j>=0 && dizi[j]<eleman)
								{
									dizi[j+1]=dizi[j];
									j--;
								}
								dizi[j+1]=eleman;
							}
							
							printf("\nDizinizin buyukten kucuge siralanmis hali: ");
     							for(i=0;i<boyut;i++)
     							{
     								printf("%d ",dizi[i]);
								}
						}
						
						else printf("GECERSIZ ISLEM");
						
					break;	
					}
				
				case 4: //SHELL SORT//
				{
					printf("\nSiralama Sekli:\n1-Kucukten Buyuge\n2-Buyukten Kucuge\n",siralama); scanf("%d",&siralama);
					
					if(siralama==1) //KB//
					{
						int i,j,temp;
						int artis=3;
						int boyut=10,dizi[10];
						
						srand(time(NULL));
						printf("\nDizinin elemanlari: ");
     						
						 for(i=0;i<boyut;i++)
     					{
     						dizi[i]=rand()%100+1;
     						printf("%d ",dizi[i]);
						}
						
						for(artis=boyut/2;artis>0;artis/=2)
						{
							for(i=artis;i<boyut;i+=1)
							{
								temp=dizi[i];
								
								for(j=i;j>=artis && dizi[j-artis]>temp;j-=artis)
									dizi[j]=dizi[j-artis];
									dizi[j]=temp;
							}
						}	
						
						printf("\nDizinizin kucukten buyuge siralanmis hali: ");
     							for(i=0;i<boyut;i++)
     							{
     								printf("%d ",dizi[i]);
								}
					}
					
					else if(siralama==2) //BK//
					{
						int i,j,temp;
						int k;
						int boyut=10,dizi[10];
						
						srand(time(NULL));
						printf("\nDizinin elemanlari: ");
     						
						for(i=0;i<boyut;i++)
     					{
     						dizi[i]=rand()%100+1;
     						printf("%d ",dizi[i]);
						}
						
						for(i=boyut/2;i>0;i/=2)
						{
							for(j=i;j<boyut;j++)
							{
								for(k=j-i;k>=0;k=k-i)
								{
									if(dizi[k+i]<=dizi[k])
										break;
									else
									{
										temp=dizi[k];
										dizi[k]=dizi[k+i];
										dizi[k+i]=temp;
									}
								}
							
							}
						}	
						
						printf("\nDizinizin buyukten kucuge siralanmis hali: ");
     							for(i=0;i<boyut;i++)
     							{
     								printf("%d ",dizi[i]);
								}
					}
					else printf("GECERSIZ ISLEM");
					
				break;
				}	
				
			}
			
				
				break;
	}

		case 'B':
			{
  				int temp;
     	 		int i, j;
     			int boyut=50000, dizi[50000];
				int minindex;
				int eleman;
				int artis=3;
				time_t start,end;
				// NOT: SÜRELERÝ GÖRMEK ÝÇÝN ENTER'A BASINIZ. BUNU HER HESAPTAN SONRA DÝÐERÝNÝ GÖRMEK ÝÇÝN YÝNELEYÝNÝZ.//
  			
			  	
				// 1- BUBBLE SORT ILE SIRALAMA: //
				printf("SIRALAMA ALGORITMALARININ HESAP SURELERI:\n\n");
     			
				time (&start);
				srand(time(NULL));
     							
     			for(i=0;i<boyut;i++)
     			{
     				dizi[i]=rand()%200000+1;
				}
     							
     							
    				for (i=1; i<boyut; i++)
    				{
       					for (j=0; j<boyut-i; j++)
         				{
             				if(dizi[j] > dizi[j+1])
             				{
                        	temp = dizi [j];
                      		dizi [j] = dizi [j+1];
                       		dizi [j+1] = temp;
            				}
         				}
     				}
  
  					getch();
  					time (&end);
  
  				printf ("\nBubble sort hesabi: %d saniye", difftime (end,start));
							
		
				// SELECTION SORT ILE SIRALAMA //
		
  				time (&start);
				srand(time(NULL));
     			for(i=0;i<boyut;i++)
     			{
     				dizi[i]=rand()%200000+1;
				}
     						
					for(i=0;i<boyut;i++)
					{
						minindex=i;
								
						for(j=i;j<boyut;j++)
						{
							if(dizi[j]<dizi[minindex])
							{
								minindex=j;
							}
						}
						temp=dizi[i];
						dizi[i]=dizi[minindex];
						dizi[minindex]=temp;
					}
  
 				getch();
  				time (&end);
  
  				printf ("\nSelection sort hesabi: %.2lf saniye", difftime (end,start));
						
							
								//INSERTION SORT HESABI//
		
  				time (&start);
				srand(time(NULL));
     						
				    for(i=0;i<boyut;i++)
     				{
     					dizi[i]=rand()%200000+1;
					}
							
					for(i=1;i<boyut;i++)
					{
						eleman=dizi[i];
						j=i-1;
								
						while (j>=0 && dizi[j]>eleman)
						{
							dizi[j+1]=dizi[j];
							j--;
						}
							dizi[j+1]=eleman;
					}	
				
  
  				getch();
  				time (&end);
  
  				printf ("\nInsertion sort hesabi: %.2lf saniye", difftime (end,start));
				
				//SIRALAMA ZAMANI EKLE//
				
  				time (&start);
				srand(time(NULL));
     						
			    for(i=0;i<boyut;i++)
     			{
     				dizi[i]=rand()%200000+1;
				}
						
				for(artis=boyut/2;artis>0;artis/=2)
				{
					for(i=artis;i<boyut;i+=1)
					{
						temp=dizi[i];
								
						for(j=i;j>=artis && dizi[j-artis]>temp;j-=artis)
						dizi[j]=dizi[j-artis];
						dizi[j]=temp;
					}
				}				
				
  
  				getch();
  				time (&end);
  
  				printf ("\nShell sort hesabi: %.2lf saniye", difftime (end,start));
						 
	}
		
		break;
	}
	
	return 0;
}
