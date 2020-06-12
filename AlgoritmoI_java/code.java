/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.PrintWriter;
/**
 * Importante: debe tener el archivo Inventario.txt para poder ejecutar
 * @author César
 */
class NewClass {
    static String copiac[] =new String [3];
    static int copian[]=new int [2];//copia auxiliar del archivo numeros	//guardado de los datos numericos
    static int Carro[][]=new int [15][8];
    static  int articulon[][][]=new int [15][8][2];
    static int a,c,buy;
    static String articuloc[][][]=  new String [15][8][3];
    static Scanner op=new Scanner(System.in);
    static boolean h=false,x=false,p=false,k=false;
static void alphac() throws FileNotFoundException{
        for(int j=0;j<15;j++){
            for(int i=0;i<8;i++){
		Carro[j][i]=0;
		articulon[j][i][1]=-1;
}}
        File Inventario= new File("Inventario.txt");
        Scanner lectura = null;
        lectura =new Scanner(Inventario);
        while (lectura.hasNext()){      
        int b=lectura.nextInt();
        copiac[0]=lectura.next();
        copiac[1]=lectura.next();
        copiac[2]=lectura.next();
        copian[0]=lectura.nextInt();
        copian[1]=lectura.nextInt();
        int t=0;
        do{
            t++;		
        	}while(articulon[b][t][1]>0);{
                    articulon[b][t][0]=copian[0];//copiador de prec
                    articulon[b][t][1]=copian[1];//copiador de existencias
                    for(int j=0;j<3;j++){//transformador para agregar espacios
                        copiac[j]=copiac[j].replace('_',' ');
                        articuloc[b][t][j]=copiac[j];
                    }
		}
        }
        lectura.close()
        ;
}
static void guardar() throws FileNotFoundException{
System.out.flush();
File Inventario= new File("Inventario.txt");
k=false;
        try (PrintWriter wr = new PrintWriter(Inventario)) {
            for(int j =1;j<15;j++){
                for(int i=1;i<8;i++){
                    if(articulon[j][i][1]>0){
                        for(int t=0;t<3;t++){//transformador para agregar espacios
                        articuloc[j][i][t]=articuloc[j][i][t].replace(' ','_');
                    }
                        wr.printf(j+"\t"+articuloc[j][i][0]+"\t"+articuloc[j][i][1]+"\t"+articuloc[j][i][2]+"\t"+articulon[j][i][0]+"\t"+articulon[j][i][1]+"\n");
                        
                    }
                }
            }
        }
}
static void bienvenida() throws IOException{
System.out.println("Este es el programa Sisteme de Venta. atte. CANC");
System.in.read();
}
static void caja() throws IOException{
    buy=0;
    int q=0;
    System.out.printf("\t\tBienvenido al sistema de caja\n\n");
    for(int j=1;j<Carro.length;j++){
        for(int i=1;i<Carro[j].length;i++){
            if(Carro[j][i]>0){
                q++;
                System.out.println(q+".-"+articuloc[j][i][0]+"\t"+articuloc[j][i][1]+"\tPrecio: "+articulon[j][i][0]+"\tcantidad: "+Carro[j][i]);
		buy+=(articulon[j][i][0]*Carro[j][i]);
                Carro[j][i]=0;
            }
        }
    }
    h=false;
    System.out.println("El total a pagar es de "+buy+"\n");
    System.in.read();
    guardar();
}
static void Sistema_Administracion() throws IOException{
System.out.println("Este es el Sistema Administrativo. atte. CANC");
System.in.read();
}
static void menu_compras() throws IOException{
   int b,i,o=0,q;
   inicio:
   
while(true){
    System.out.flush();
    if(p==true){// solo cuando esta en el SA
        System.out.printf("Seleccione uno para modificar\n");
    }
    x=false;
    for(i=1;i<8;i++){
        if(articulon[a][i][1]>0){
            o=i;
            System.out.println(i+".- "+articuloc[a][i][0]+" \tTipo: "+articuloc[a][i][1]+" \nDetalles: "+articuloc[a][i][2]+" \nPrecio: "+articulon[a][i][0]+" \t Existencia: "+articulon[a][i][1]+" \n\n");
            x|=true;
        }else if (articulon[a][i][1]==0){
            System.out.println(i+".- "+articuloc[a][i][0]+" \tTipo: "+articuloc[a][i][1]+" \nDetalles: "+articuloc[a][i][2]+" \nPrecio: "+articulon[a][i][0]+" \t Existencia:  Agotado\n\n");
        }
    }
    if(!x){
        System.out.printf("\n\n\tNo hay inventario disponible,");
        if(p!=true){
            System.out.printf(" consulte con el administrador.\n\n\n");}
            System.in.read();
            break;
    }
    if(h==true){
        System.out.printf("8.-Pasar a Caja\n\n");
    }else if(p==true){
        System.out.printf("8.-Guardar\n\n");
    }
    
    System.out.printf("9.-Atras\n\n");
    System.out.printf("0.-Salir\n");
    b=op.nextInt();
    if ((p==true)&&(b<o)&&(b>0)){
    System.out.print("Usted a seleccionado "+articuloc[a][b][0]+"\n");
    System.out.print("Ingrese la adicion de existencia:");
    q=op.nextInt();
    articulon[a][b][1]+=q;
    System.out.print("Total de existencia:"+articulon[a][b][1]);
    k=true;
    }else if ((p==true)&&(b>o)&&(b<8)){
        o++;
    System.out.print("Ingrese el nombre del nuevo articulo:");
    op.nextLine();
    articuloc[a][o][0]=op.nextLine();
    System.out.print("Ingrese el tipo del nuevo articulo:");
    articuloc[a][o][1]=op.nextLine();
    System.out.print("Ingrese los detalles del nuevo articulo:");
    articuloc[a][o][2]=op.nextLine();
    System.out.print("Ingrese el precio del nuevo articulo:");
    articulon[a][o][0]=op.nextInt();
    System.out.print("Ingrese la existencia del nuevo articulo:");
    articulon[a][o][1]=op.nextInt();
    k=true;
    }
    else if ((b<8)&&(b!=0)){
    if(articulon[a][b][1]>0){
	articulon[a][b][1]--;
	Carro[a][b]++;
	System.out.println("Tiene "+Carro[a][b]+" "+articuloc[a][b][0]+" en su compra\n");
	h=true;
    }else if(articulon[a][b][1]==0){
	System.out.printf("\t\tExistencia Agotada\n\n");}
    }else{
	switch (b){
            case 8:
		if(h==true){
                   
                    caja();
                    break inicio;
                }else if(p==true){
                    guardar();
                    break inicio;
                }
            case 9:
		break inicio;
            case 0: 
		System.exit(0);
            default:
		System.out.printf("\t\tOpcion no valida\n\n");
		System.in.read();
		continue;
        }
    }
	System.in.read();
	
    }
}
static void menu_piezas(int a) throws IOException{
inicio:

while(true){
    System.out.flush();
    System.out.printf("1.-Chasis\n");
    System.out.printf("2.-Fuente de Poder\n");
    System.out.printf("3.-Procesador\n");
    System.out.printf("4.-Tarjeta de Video\n");
    System.out.printf("5.-Tarjeta Madre\n");
    System.out.printf("6.-Unidad de Lectura\n");
    System.out.printf("7.-Unidades de Almacenamiento\n");
    if(h==true){
        System.out.printf("8.-Pasar a Caja\n");}
    else if(k==true){
        System.out.printf("8.-Guardar");//solo cuando esta en el SA y hay cambios
    }
    System.out.printf("9.-Atras\n");
    System.out.printf("0.-Salir\n\n");
    a=op.nextInt();
    if((a>0)&&(a<=7)){
	menu_compras();
    }else{
	switch (a){
            case 8:
		if(h==true){
                    
                    caja();
                    continue inicio;
                }
		else if(k==true){
			guardar();
                        continue inicio;
                }
            case 9:
                break inicio;
            case 0: 
                System.exit(0);
            default:
		System.out.printf("Opcion no valida");
		
        }
    }
}}
public static void main(String[] args)throws FileNotFoundException, IOException{
    bienvenida();
    alphac();
    inicio:
while(true){
    System.out.flush();
    if(p==false){
        System.out.println("\tSeleccione la Forma de Compra\n");}
    else{
        System.out.println("\tSeleccione la categoria a modificar\n");
    }
    System.out.println("1.-Piezas ");
    System.out.println("2.-Perifericos");
    System.out.println("3.-Accesorios");	
    System.out.println("4.-Tablets");
    System.out.println("5.-SmartPhone");
    if(h==true){// solo se muestra cuando se lleva (IC)invnetario en el carro
        System.out.printf("9.-Pasar a Caja\n");}
    else if(k==true){// solo se muestra cuando se tiene (CI)cambios en el inventario
        System.out.printf("9.-Guardar");
    }
    else if(p!=true){// aparece de forma predeterminada para permitir la entrada al (SA) sistema de adaministracion
        System.out.printf("9.-Administrador\n");
    }else if(p==true){
    System.out.printf("9.-Salir del Sistema de Administrador\n");
    }
    System.out.printf("0.-Salir\n\n");
    a=op.nextInt();
    if((a>1)&&(a<6)){
    a+=7;
    menu_compras();
    }else{
        switch (a){
            case 1: 
                menu_piezas(a);
                continue;        
            case 9:
                if(h==true){//para llevar a caja solo se muestra cuando se tiene IC
                    caja();
                }else if(k==true){//solo cuando se tiene CI
                    guardar();
                }else if(p!=true){
                    p=true;
                    Sistema_Administracion();
                    continue;//solo se muestra cuando no tiene IC y no se esta en el SA
                }else if(p==true){
                    p=false;
                    bienvenida();
                    continue;
                }
            case 0: 
                System.exit(0);
            default:
                System.out.printf("Opcion no valida");
        }
    }
    System.in.read();
}
}      
}
