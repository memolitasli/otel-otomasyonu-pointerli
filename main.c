#include <stdio.h>
#include <stdlib.h>

int odadizisi[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
int kat1 = 0,kat2 = 0,kat3 = 0,kat4 = 0,kat5 = 0;

int main(int argc, char *argv[]) {
	int i,j,katsecimi,odasecimi,*pt_kat,*pt_oda;
	int gun,*pt_gun,borc;
	char onay;
	while (1 == 1)
	{
		printf(" 1. kat 20 TL \n 2. kat 30 TL \n 3. kat 40 TL \n 4. kat 50 TL \n 5. kat 100 TL \n");
		printf(" istediginiz kat numarasini giriniz :");
		scanf("%d",&katsecimi);
		pt_kat = &katsecimi;
		switch(*pt_kat)
		{
			case 1 :
				{
					if(kat1 < 5)
					{
					
					for(i = 0;i<5;i++)
					{
						printf("  %d  ",odadizisi[0][i]);
					}
					printf("\n");
					printf("istediginiz odayi seciniz :");
					scanf("%d",&odasecimi);
					pt_oda = &odasecimi;
					if(odadizisi[0][*pt_oda - 1] != 0)
						{
							odadizisi[0][*pt_oda -1] = 0;
							printf("\n");
							printf("kac gun kalmak istersiniz :");
							scanf("%d",&gun);	
							pt_gun = &gun;
							borc = (*pt_gun) * 20;
							printf("borcunuz : %d TL",borc); 
							printf("\n");
							printf("islemi onayliyor musunuz E veya H tusuna basiniz :");
							scanf("%s",&onay);	
							if(onay == 'E' || onay == 'e')
							{
								printf("isleminiz basari ile tamamlandi");
								kat1++;
								break;
										}			
										if(onay == 'H' || onay == 'h')
										{
											odadizisi[0][*pt_oda -1] = *pt_oda -1;
											printf("isleminiz iptal edilmistir...\n");
											break;
											
										}
										else
										{
											printf("yanlis bir tusa bastiniz baslangica yonlendiriliyorsunuz...\n");
											odadizisi[0][*pt_oda -1] = *pt_oda -1;
											break;
										}
						}
					}
					else
					{
						printf("sectiginiz katta bos odamiz kalmamistir lutfen baska bir kat seciniz...\n");
						break;
					}
				}
					case 2 :
			{
				if(kat2 < 5)
				{
					for(i = 5 ;i< 10;i++)
					{
						printf("  %d  ",odadizisi[1][i]);
					}
					printf("\n");
					printf("istediginiz oda numarasini giriniz :");
					scanf("%d",&odasecimi);
					pt_oda = &odasecimi;
					if(odadizisi[1][*pt_oda -1] != 0)
					{
						odadizisi[1][*pt_oda -1] = 0;
						printf("odaniz basari ile sectiniz ...\n");
						printf("odada kac gun kalmak istiyorsunuz :");
						scanf("%d",&gun);
						borc = (*pt_gun) * 30;
						printf("\n");
						printf("borcunuz %d TL ",borc);
						printf("\n");
						printf("isleminizi onayliyor musunuz E veya H tusuna basiniz :");
						scanf("%s",&onay);
						if(onay == 'E' || onay == 'e')
						{
							printf("isleminiz basari ile tamamlanmistir...");
							kat2++;
							break;
							
						 }		
						 if(onay == 'H' || onay == 'h')
						 {
						 	printf("isleminiz iptal edilmistir...");
						 	odadizisi[1][*pt_oda -1] = *pt_oda;
						 	break;
										  
						}
						else
						{
							printf("hatali giris yaptiniz...");
							break;
							
						}				 
					}
				}
			}
		}
		case 3 :
			{
				if(kat3 < 5)
				{
					for(i = 10;i<15;i++)
					{
						printf("  %d  ",odadizisi[2][i]);
					}
					printf("\n");
					printf("istediginiz oda numarasini giriniz :");
					scanf("%d",&odasecimi);
					pt_oda = &odasecimi;
					if(odadizisi[2][*pt_oda -1] != 0)
					{
						odadizisi[2][*pt_oda -1] = 0;
						printf("odaniz basari ile sectiniz ...\n");
						printf("odada kac gun kalmak istiyorsunuz :");
						scanf("%d",&gun);
						borc = (*pt_gun) * 40;
						printf("\n");
						printf("borcunuz %d TL ",borc);
						printf("\n");
						printf("isleminizi onayliyor musunuz E veya H tusuna basiniz :");
						scanf("%s",&onay);
						if(onay == 'E' || onay == 'e')
						{
							printf("isleminiz basari ile tamamlanmistir...");
							kat2++;
							break;
							
						 }		
						 if(onay == 'H' || onay == 'h')
						 {
						 	printf("isleminiz iptal edilmistir...");
						 	odadizisi[2][*pt_oda -1] = *pt_oda;
						 	break;
										  
						}
						else
						{
							printf("hatali giris yaptiniz...");
							break;
							
						}				 
					}
					
				}
			}
			
			case 4 :
				{
				if(kat4 < 5)
				{
					for(i = 15;i<20;i++)
					{
						printf("  %d  ",odadizisi[3][i]);
					}
					printf("\n");
					printf("istediginiz oda numarasini giriniz :");
					scanf("%d",&odasecimi);
					pt_oda = &odasecimi;
					if(odadizisi[3][*pt_oda -1] != 0)
					{
						odadizisi[3][*pt_oda -1] = 0;
						printf("odaniz basari ile sectiniz ...\n");
						printf("odada kac gun kalmak istiyorsunuz :");
						scanf("%d",&gun);
						borc = (*pt_gun) * 50;
						printf("\n");
						printf("borcunuz %d TL ",borc);
						printf("\n");
						printf("isleminizi onayliyor musunuz E veya H tusuna basiniz :");
						scanf("%s",&onay);
						if(onay == 'E' || onay == 'e')
						{
							printf("isleminiz basari ile tamamlanmistir...");
							kat2++;
							break;
							
						 }		
						 if(onay == 'H' || onay == 'h')
						 {
						 	printf("isleminiz iptal edilmistir...");
						 	odadizisi[3][*pt_oda -1] = *pt_oda;
						 	break;
										  
						}
						else
						{
							printf("hatali giris yaptiniz...");
							break;
							
						}				 
					}
					
				}	
				}
				case 4 :
					{
							if(kat5 < 5)
				{
					for(i = 20;i<25;i++)
					{
						printf("  %d  ",odadizisi[4][i]);
					}
					printf("\n");
					printf("istediginiz oda numarasini giriniz :");
					scanf("%d",&odasecimi);
					pt_oda = &odasecimi;
					if(odadizisi[4][*pt_oda -1] != 0)
					{
						odadizisi[4][*pt_oda -1] = 0;
						printf("odaniz basari ile sectiniz ...\n");
						printf("odada kac gun kalmak istiyorsunuz :");
						scanf("%d",&gun);
						borc = (*pt_gun) * 60;
						printf("\n");
						printf("borcunuz %d TL ",borc);
						printf("\n");
						printf("isleminizi onayliyor musunuz E veya H tusuna basiniz :");
						scanf("%s",&onay);
						if(onay == 'E' || onay == 'e')
						{
							printf("isleminiz basari ile tamamlanmistir...");
							kat2++;
							break;
							
						 }		
						 if(onay == 'H' || onay == 'h')
						 {
						 	printf("isleminiz iptal edilmistir...");
						 	odadizisi[4][*pt_oda -1] = *pt_oda;
						 	break;
										  
						}
						else
						{
							printf("hatali giris yaptiniz...");
							break;
							
						}				 
					}
					
				}	
					}
		
	}
	return 0;
}
