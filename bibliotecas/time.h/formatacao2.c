#include <stdio.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    time_t t_seg;
	struct tm t_info;
    struct tm t_utc;
	char str [100];
	
	time (&t_seg);
	t_info = * localtime (&t_seg);
    
	
	printf ("Data e hora atual: \n\n");
	printf ("%s \n", ctime (&t_seg ));
	printf ("%s \n", asctime(&t_info));
	strftime(str, sizeof(str), "Dia %j da semana %W de %Y, mes %m e dia %d" , &t_info);
	printf ("%s \n\n", str);
    
    // Transforma a mesma timestamp em UTC (GMT)
    t_utc = *gmtime(&t_seg);

    printf ("Data e hora UTC Formatada: \n\n");
	printf ("%s \n", ctime (&t_seg ));
	printf ("%s \n", asctime(&t_utc));
	strftime(str, sizeof(str), "Dia %j da semana %W de %Y, mes %m e dia %d" , &t_utc);
	printf ("%s \n", str);
	
	return 0;
}