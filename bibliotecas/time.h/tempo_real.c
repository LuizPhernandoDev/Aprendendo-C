#include <stdio.h>
#include <time.h>

int main () {
	struct tm t0, tf;
	time_t t0_seg, tf_seg;
	double dif_seg;
	
	// 08:30:10 01/06/2021
	t0.tm_sec = 15;   //segundo
	t0.tm_min = 14;   //minuto
    t0.tm_hour = 14;   //hora
    t0.tm_mday = 16;   //dia
    t0.tm_mon = 4;   //mes(0 - 11)
    t0.tm_year = 125;   //ano(1900+tm_year = ano pretendido)
    t0.tm_wday = 5;   //dia da semana(0 = domingo)
    t0.tm_yday = 136;   //dia do ano
    t0.tm_isdst = 0;   //horario de verao(=0 = nao; >0 = sim; <0 = nao sei)
	
	// conversao de struct tm para time_t
	t0_seg = mktime(&t0);
	
	// tempo corrente da execucao
	time(&tf_seg); //mesmo que: tf_seg = time (NULL);
	
	// conversao de time_t para struct tm
	tf = *localtime(&tf_seg);
	
	//diferenca de tempo em segundos:
	dif_seg = difftime (tf_seg, t0_seg);
	printf("%.0lf (seg)\n", dif_seg);
	
	return 0;
}