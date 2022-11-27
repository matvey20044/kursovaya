#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

struct monitor
{
	char manufacturer[40];
	char diagonal[40];
	char resolution[40];
	char matrix[40];
	char screen[40];
	char connection[40];
};

typedef struct monitor Monitor;

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "Rus");
	Monitor x;
	x = (Monitor){ ' ', ' ', ' ', ' ', ' ', ' ' };
	int n = 1;
	printf("Производитель - 1\nВид диагонали - 2\nРазрешение - 3\nТип матрицы - 4\nИзонгнутый экран - 5\nПодключение монитора - 6\nВывод данных о мониторе - 7\n");
	while (n != 0)
	{
		scanf("%d", &n);
		switch (n)
		{
		case(1):
			printf("Выберите производителя\n");
			scanf("%s", &x.manufacturer);
			break;
		case(2):
			printf("Выберите вид диагоанли\n");
			scanf("%s", &x.diagonal);
			break;
		case(3):
			printf("Выберите разрешение\n");
			scanf("%s", &x.resolution);
			break;
		case(4):
			printf("Выберите тип матрицы\n");
			scanf("%s", &x.matrix);
			break;
		case(5):
			printf("Наличие изогнутого экрана(Да/Нет)\n");
			scanf("%s", &x.screen);
			break;
		case(6):
			printf("Выберите вид подключения монитора(hdmi/dp/vga)\n");
			scanf("%s", &x.connection);
			break;
		case(7):
			printf("Производитель: %s\nДиагональ: %s\nРазрешение: %s\nМатрица: %s\nИзогнутый экран: %s\nВид подключения монитора: %s\n", x.manufacturer, x.diagonal, x.resolution, x.matrix, x.screen, x.connection);
			break;
		}
	}

}