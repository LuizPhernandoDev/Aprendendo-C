#include <stdio.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	struct tm tempo;
	
    printf(" Especificadores |                     definicao                    |       Intervalo     \n");
	printf("   de formato    |                                                  |\n");
	printf("-----------------|--------------------------------------------------|---------------------\n");
	printf("      %%d         |            Dia do mês com dois dígitos           |       01 a 31      \n");
	printf("      %%e         |         Dia do mês com um ou dois dígitos        |        1 a 31      \n");
	printf("      %%a         |          Nome do dia da semana abreviado         |      Dom a Sab     \n");
	printf("      %%A         |           Nome do dia da semana completo         |  Domingo a Sabado  \n");
	printf("      %%w         |         Dia da semana como número decimal        |   0 a 6 (0 = Dom)  \n");
	printf("      %%u         |          Dia da semana no padrão ISO 8601        |   1 a 7 (1 = Seg)  \n");
	printf("      %%j         |           Dia do ano como número decimal         |      001 a 366     \n");
	
	printf("      %%m         |               Mês com dois dígitos               |       01 a 12      \n");
	printf("      %%b         |               Nome do mês abreviado              |      Jam a Dez     \n");
	printf("      %%B         |                Nome do mês completo              | Janeiro a Dezembro \n");
	printf("      %%y         |        Ano com dois dígitos, sem o século        |       00 a 99      \n");
	printf("      %%Y         |          Ano completo com quatro dígitos         |     1970 a ...     \n");
	printf("      %%C         |  O século do ano como um número de dois dígitos  |       01 a 31      \n");
	
	printf("      %%H         |             Hora no formato 24 horas             |       00 a 23      \n");
	printf("      %%I         |             Hora no formato 12 horas             |        1 a 12      \n");
	printf("      %%M         |             Minuto com dois dígitos              |       00 a 59      \n");
	printf("      %%S         |             Segundo com dois dígitos             |       00 a 60      \n");
	printf("      %%p         |       Indicador de período AM/PM do sistema      |          -         \n");
	
	printf("      %%H         |              Número da semana do ano             |  00 a 53 (Dom = 1) \n");
	printf("      %%I         |              Número da semana do ano             |  00 a 53 (Seg = 1) \n");
	printf("      %%M         |        Número da semana no padrão ISO 8601       |       01 a 53      \n");
	printf("      %%S         |  Ano de dois dígitos baseado na semana ISO 8601  |       00 a 99      \n");
	printf("      %%p         | Ano de quatro dígitos baseado na semana ISO 8601 |     1970 a ...     \n");
	
	printf("      %%F         |         Data completa no formato ISO 8601        |     %%Y-%%m-%%d    \n");
	printf("      %%T         |         Hora completa no formato ISO 8601        |     %%H:%%M:%%S    \n");
	printf("      %%R         |        Hora e minutos em formato 24 horas        |       %%H:%%M      \n");
	printf("      %%D         |           Formato americano tradicional          |     %%m/%%d/%%y    \n");
	printf("      %%c         |  Representação padrão de data e hora do sistema  |          -         \n");
	printf("      %%x         |  Representação padrão apenas da data do sistema  |          -         \n");
	printf("      %%X         |  Representação padrão apenas da hora do sistema  |          -         \n");
	printf("      %%z         |  Deslocamento do fuso horário em relação ao UTC  |      ex: -0300     \n");
	printf("      %%Z         |        Nome ou abreviação do fuso horário        |       ex: BRT      \n");

    return 0;
}