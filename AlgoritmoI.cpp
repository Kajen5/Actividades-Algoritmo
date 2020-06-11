#include<stdlib.h>
#include<stdio.h>
int a,buy;
int e1=31000,e2=40000,e3=35000,e4=29000,e5=34000,e6=31500,e7=36000;
int p1=4,p2=5,p3=5,p4=5,p5=15,p6=8,p7=10;
int f1=60000,f2=65000,f3=55000,f4=67000,f5=45000,f6=57000,f7=63000;
int q1=15,q2=5,q3=10,q4=53,q5=2,q6=9,q7=6;
int u1=2,u2=3,u3=4,u4=1;
int k1=15000,k2=40000,k3=20000,k4=50000;
int r1=4,r2=5,r3=1,r4=2,r5=1,r6=2,r7=3;
int h1=90000,h2=60000,h3=75000,h4=65000,h5=78000,h6=50000,h7=40000;
int s1=1,s2=4,s3=2,s4=4,s5=3,s6=1;
int i1=30000,i2=37000,i3=50000,i4=54000,i5=65000,i6=112000;
int t1=1,t2=2,t3=4;
int j1=23000,j2=22000,j3=30000;
int v1=3,v2=4,v3=10,v4=7;
int l1=30000,l2=25000,l3=31000,l4=40000;

void bienvenida(){
system ("color 3B");
printf("\n\n\n\t\t\tBienvienidos\n\n\n\n");
system ("pause");
system("cls");
}
void menu_final(){
printf("8.-Atras\n");
if(buy>0){
	printf("9.-Comprar\n");
	}
printf("0.-Salir\n");
}
void caja(){
system ("cls");
system ("color 6A");
printf("\n\n\tEl total a pagar es de %i\n\n\n",buy);
buy=0;
system ("pause");
}
void chasis(){
inicio:
	system ("cls");
	printf("1.NOX NX200\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",e1,p1);
	printf("2.NOX Coolbay MX USB 3.0\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",e2,p2);
	printf("3.NOX Pax\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",e3,p3);
	printf("4.Tacens Mars Gaming\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",e4,p4);
	printf("5.Aerocool V3X Advance\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",e5,p5);
	printf("6.Aerocool QS-182\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",e6,p6);
	printf("7.Aerocool GT Advance\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",e7,p7);
	menu_final();
	scanf("%i",&a);
	switch (a){
		case 1:
			if(p1>0){
				buy+=e1;
				p1--;
				printf("Se ha añadido NOX NX200 a su compra\n");}
			else{
				printf("Existencia Agotada\n");
			}
			break;
		case 2:
			if(p2>0){
				buy+=e2;
				p2--;
				printf("Se ha añadido NOX Coolbay a su compra\n");}
			else {
				printf("Existencia Agotada\n");
			}
			break;
		case 3:
			if(p3>0){
				buy+=e3;
				p3--;
				printf("Se ha añadido NOX Pax a su compra\n");}
			else {
				printf("Existencia Agotada\n");
			}
			break;
		case 4:
			if(p4>0){
				buy+=e4;
				p4--;
				printf("Se ha añadido Tacens Mars Gaming a su compra\n");}
			else {
				printf("Existencia Agotada\n");
			}
			break;
		case 5:if(p5>0){
		buy+=e5;
		p5--;
		printf("Se ha añadido Aerocool V3X Advance a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 6:if(p6>0){
		buy+=e6;
		p6--;
		printf("Se ha añadido Aerocool QS-182 a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 7:if(p7>0){
		buy+=e7;
		p7--;
		printf("Se ha añadido Aerocool GT Advance a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 8:
		goto fin;
	case 9:	
		if(buy>0){
			caja();
		goto fin;
		}
		break;
	case 0:
			exit(0);
	default:
		printf("Opcion invalida\n");
		break;
	}
	system ("pause");
	goto inicio;
fin:
	system("cls");
}
void fuente(){
inicio:
	system ("cls");
	printf("1. Corsair CX750M 80 PLUS Bronze 600w ATX\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",f1,q1);
	printf("2.Acteck AF-B600P 600w ATX\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",f2,q2);
	printf("3.EVGA 500B 80 PLUS Bronze 500w ATX\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",f3,q3);
	printf("4.EVGA SuperNOVA 850 B2 80 PLUS Bronze 850w ATX\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",f4,q4);
	printf("5.Corsair CX600 80 PLUS Bronze 600w ATX\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",f5,q5);
	printf("6.Acteck GAFU-031 ATX 500w\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",f6,q6);
	printf("7.Corsair RM850i 80 PLUS Gold 850w ATX\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",f7,q7);
	menu_final();
	scanf("%i",&a);
	switch (a)
	{
	case 1:if(q1>0){
		buy+=f1;
		q1--;
		printf("Se ha añadido Corsair CX750M 80 PLUS Bronze 600w ATX a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 2:
		if(q2>0){
			buy+=f2;
			q2--;
			printf("Se ha añadido Acteck AF-B600P 600w ATX a su compra\n");
		}else{
			printf("Existencia Agotada\n");
		}
		break;
	case 3:
		if(q3>0){
			buy+=f3;
			q3--;
			printf("Se ha añadido EVGA 500B 80 PLUS Bronze 500w ATX a su compra\n");
		}else{
			printf("Existencia Agotada\n");
		}
		break;
	case 4:
		if(q4>0){
			buy+=f4;
			q4--;
			printf("Se ha añadido EVGA SuperNOVA 850 B2 80 PLUS Bronze 850w ATX a su compra\n");}
		else{
			printf("Existencia Agotada\n");
		}
		break;
	case 5:
		if(q5>0){
			buy+=f5;
			q5--;
			printf("Se ha añadido Corsair CX600 80 PLUS Bronze 600w ATX a su compra\n");
		}else{
			printf("Existencia Agotada\n");
		}
		break;
	case 6:
		if(q6>0){
			buy+=f6;
			q6--;
			printf("Se ha añadido Acteck GAFU-031 ATX 500w a su compra\n");}
		else {
		   printf("Existencia Agotada\n");
		}
		break;
	case 7:
		if(q7>0){
			buy+=f7;
			q7--;
			printf("Se ha añadido Corsair RM850i 80 PLUS Gold 850w ATX a su compra\n");
		}else{
		   printf("Existencia Agotada\n");
		}
		break;
	case 8:
		goto fin;
	case 9:	
		if(buy>0){
			caja();
			goto fin;
		}
		break;
	case 0:
			exit(0);
	default:
		printf("Opcion invalida\n");
		break;
	}
	system ("pause");
	goto inicio;
fin:
	system("cls");
}
void ram(){inicio:
system ("cls");
	printf("1. Kingston HyperX Fury DDR3 2x4gb\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",k1,u1);
	printf("2.Corsair Vengeance Low Profile DDR3 2x8gb\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",k2,u2);
	printf("3.HyperX Savage DDR3 2x4gb\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",k3,u3);
	printf("4.G.Skill F3-17000CL11Q-16GBZL DDR3 4x4gb\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",k4,u4);
	menu_final();
	scanf("%i",&a);
	switch (a)
	{
	case 1:if(u1>0){
		buy+=k1;
		u1--;
		printf("Se ha añadido Kingston HyperX Fury DDR3 2x4gb a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 2:
		if(u2>0){
			buy+=k2;
			u2--;
			printf("Se ha añadido Corsair Vengeance Low Profile DDR3 2x8gb 2x8gb a su compra\n");
		}else{
			printf("Existencia Agotada\n");
		}
		break;
	case 3:
		if(u3>0){
			buy+=k3;
			u3--;
			printf("Se ha añadido HyperX Savage DDR3 2x4gb a su compra\n");
		}else{
			printf("Existencia Agotada\n");
		}
		break;
	case 4:
		if(u4>0){
			buy+=k4;
			u4--;
			printf("Se ha añadido G.Skill F3-17000CL11Q-16GBZL DDR3 4x4gb a su compra\n");}
		else{
			printf("Existencia Agotada\n");
		}
		break;
	case 8:
		goto fin;
	case 9:	
		if(buy>0){
			caja();
			goto fin;
		}
		break;
	case 0:
			exit(0);
	default:
		printf("Opcion invalida\n");
		break;
	}
	system ("pause");
	goto inicio;
fin:
	system("cls");
};
void proce(){
inicio:
	system ("cls");
	printf("1.Intel Core i7-6850K\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",h1,r1);
	printf("2.Core i7 4790K\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",e2,r2);
	printf("3.Intel Core i7-5820K\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",h3,r3);
	printf("4.Intel Core i7-6700\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",h4,r4);
	printf("5.Intel Core i7-6800K\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",h5,r5);
	printf("6.Core i5 6600\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",h6,r6);
	printf("7.AMD FX-8350\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",h7,r7);
	menu_final();
	scanf("%i",&a);
	switch (a){
	case 1:
		if(r1>0){
			buy+=h1;
			r1--;
			printf("Se ha añadido Intel Core i7-6850K a su compra\n");}
		else{
		   printf("Existencia Agotada\n");
		}
		break;
	case 2:if(r2>0){
		buy+=h2;
		r2--;
		printf("Se ha añadido Core i7 4790K a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 3:if(r3>0){
		buy+=h3;
		r3--;
		printf("Se ha añadido Intel Core i7-5820K a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 4:
		if(r4>0){
			buy+=h4;
			r4--;
			printf("Se ha añadido Intel Core i7-6700 a su compra\n");}
		else {
			printf("Existencia Agotada\n");
		}
		break;
	case 5:
		if(r5>0){
			buy+=h5;
			r5--;
			printf("Se ha añadido Intel Core i7-6800K a su compra\n");}
		else {
			printf("Existencia Agotada\n");
		}
		break;
	case 6:
		if(r6>0){
			buy+=h6;
			r6--;
			printf("Se ha añadido Core i5 6600 a su compra\n");
		}else{
			printf("Existencia Agotada\n");
		}
		break;
	case 7:
		if(r7>0){
			buy+=h7;
			r7--;
			printf("Se ha añadidoAMD FX-8350 a su compra\n");
		}else{
		   printf("Existencia Agotada\n");
		}
		break;
	case 8:
		goto fin;
	case 9:	
		if(buy>0){
			caja();
			goto fin;
		}
		break;
	case 0:
			exit(0);
	default:
		printf("Opcion invalida\n");
		break;
	}
	system ("pause");
	goto inicio;
fin:
	system ("cls");
}
void video(){
inicio:
	system ("cls");
	printf("1.MSI GTX750Ti OC 2GB\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",i1,s1);
	printf("2.Sapphire R9 280 Dual-X 3GB\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",i2,s2);
	printf("3.Asus R9 290 DirectCU II 4GB\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",i3,s3);
	printf("4.Asus Strix GTX 970 DirectCU II 4GB\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",i4,s4);
	printf("5.Gigabyte GTX 980 WindForce 3X 4GB\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",i5,s5);
	printf("6.GTX TITAN X\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",i6,s6);
	menu_final();
	scanf("%i",&a);
	switch (a){
	case 1:
		if(s1>0){
			buy+=i1;
			s1--;
			printf("Se ha añadido MSI GTX750Ti OC 2GB a su compra\n");}
		else{
		   printf("Existencia Agotada\n");
		}
		break;
	case 2:if(s2>0){
		buy+=i2;
		s2--;
		printf("Se ha añadido Sapphire R9 280 Dual-X 3GB a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 3:if(s3>0){
		buy+=i3;
		s3--;
		printf("Se ha añadido Asus R9 290 DirectCU II 4GB a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 4:
		if(s4>0){
			buy+=i4;
			s4--;
			printf("Se ha añadido Asus Strix GTX 970 DirectCU II 4GB a su compra\n");}
		else {
			printf("Existencia Agotada\n");
		}
		break;
	case 5:
		if(s5>0){
			buy+=i5;
			s5--;
			printf("Se ha añadido Gigabyte GTX 980 WindForce 3X 4GB a su compra\n");}
		else {
			printf("Existencia Agotada\n");
		}
		break;
	case 6:
		if(s6>0){
			buy+=i6;
			s6--;
			printf("Se ha añadido GTX TITAN X a su compra\n");
		}else{
			printf("Existencia Agotada\n");
		}
		break;
	case 8:
		goto fin;
	case 9:	
		if(buy>0){
			caja();
			goto fin;
		}
		break;
	case 0:
			exit(0);
	default:
		printf("Opcion invalida\n");
		break;
	}
	system ("pause");
	goto inicio;
fin:
	system ("cls");
}
void madr(){
inicio:
	system ("cls");
	printf("1.MSI 970A SLI Krait Edition cn USB 3.1\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",h1,r1);
	printf("2.Gigabyte F2A88XN  Wifi\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",h2,r2);
	printf("3.IAsrock H170M Pro4\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",h3,r3);
	menu_final();
	scanf("%i",&a);
	switch (a){
	case 1:
		if(r1>0){
			buy+=e1;
			r1--;
			printf("Se ha añadido MSI 970A SLI Krait Edition cn USB 3.1 a su compra\n");}
		else{
		   printf("Existencia Agotada\n");
		}
		break;
	case 2:if(r2>0){
		buy+=e2;
		r2--;
		printf("Se ha añadido Gigabyte F2A88XN  Wifi a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 3:if(r3>0){
		buy+=e3;
		r3--;
		printf("Se ha añadido IAsrock H170M Pro4 a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 8:
		goto fin;
	case 9:	
		if(buy>0){
			caja();
			goto fin;
		}
		break;
	case 0:
			exit(0);
	default:
		printf("Opcion invalida\n");
		break;
	}
	system ("pause");
	goto inicio;
fin:
	system ("cls");
}
void alma(){
inicio:
	system ("cls");
	printf("1.OCZ ARC 100 240 GB\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",l1,v1);
	printf("2.Sandisk SSD Plus 120GB\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",l2,v2);
	printf("3.Samsung 850 EVO 250 GB\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",l3,v3);
	printf("4.Crucial MX200 250 GB\n");
	printf("\tPrecio:%i\tExistencia:%i\n\n",l4,v4);
	menu_final();
	scanf("%i",&a);
	switch (a)
	{
	case 1:if(v1>0){
		buy+=l1;
		v1--;
		printf("Se ha añadido OCZ ARC 100 240 GB a su compra\n");}
		   else {
		   printf("Existencia Agotada\n");
		   }
		break;
	case 2:
		if(v2>0){
			buy+=l2;
			v2--;
			printf("Se ha añadido Sandisk SSD Plus 120GB a su compra\n");
		}else{
			printf("Existencia Agotada\n");
		}
		break;
	case 3:
		if(v3>0){
			buy+=l3;
			v3--;
			printf("Se ha añadido Samsung 850 EVO 250 GB a su compra\n");
		}else{
			printf("Existencia Agotada\n");
		}
		break;
	case 4:
		if(v4>0){
			buy+=l4;
			v4--;
			printf("Se ha añadido Crucial MX200 250 GB a su compra\n");}
		else{
			printf("Existencia Agotada\n");
		}
		break;
	case 8:
		goto fin;
	case 9:	
		if(buy>0){
			caja();
			goto fin;
		}
		break;
	case 0:
			exit(0);
	default:
		printf("Opcion invalida\n");
		break;
	}
	system ("pause");
	goto inicio;
fin:
	system("cls");
}
void main(){
bienvenida();
inicio:
system ("color 3B");
system ("cls");
printf("\tSelecione la compra que \n\n\n");
printf("1.-Chasis\n");
printf("2.-Fuente de Poder\n");
printf("3.-Memoria RAM\n");
printf("4.-Procesador\n");
printf("5.-Tarjeta de Video\n");
printf("6.-Tarjeta Madre\n");
printf("7.-Unidades de Almacenamiento\n");
if(buy>0){
	printf("9.-Comprar\n");
	}
printf("0.-Salir\n");
scanf("%i",&a);
system("cls");
switch (a)
{
case 1:
	chasis();
	break;
case 2:
	fuente();
	break;
case 3:
	ram();
	break;
case 4:
	proce();
	break;
case 5:
	video();
	break;
case 6:
	madr();
	break;
case 7:
	alma();
case 9:	
	if(buy>0){
		caja();
	}
	break;
case 0:
	exit(0);
default:
	break;
}
goto inicio;
}
