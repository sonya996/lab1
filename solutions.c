#include "lab1.h"
#include <math.h>
#include <stdio.h>

// Задача 1 - Чётное или нечётное
int is_even(int n) {
    // TODO: реализовать
        #define mod 2
    #define ziro 0
    if (n%mod==ziro)
    return 1;
    else
    return 0;
}

// Задача 2 - Максимум из трёх чисел
int max_of_three(int a, int b, int c) {
    // TODO: реализовать
    if(a>=b && a>=c)
    return a;
    else
    if(b>=a && b>=c)
    return b;
    else
    return c;
}

// Задача 3 - Знак числа
int sign_of_number(int n) {
    // TODO: реализовать
    #define ziro 0
    if(n>ziro)
    return 1;
    else
    if(n<ziro)
    return -1;
    else
    return 0;
}

// Задача 4 - Абсолютное значение
int absolute_value(int n) {
    // TODO: реализовать
    #define minus_one -1
    if(sign_of_number(n)==minus_one)
    return -n;
    else
    return n;
}

// Задача 5 - Треугольник существует
int triangle_exists(int a, int b, int c) {
    // TODO: реализовать
    if(a+b>c && a+c>b && b+c>a)
    return 1;
    else
    return 0;
}

// Задача 6 - Класс оценок
const char* get_grade(int score) {
    // TODO: реализовать
    #define two_or_three 60
    #define three_or_four 74
    #define Four_or_five 90
    if(score<two_or_three)
    return "неудовлетворительно";
    else
    if (score>=two_or_three && score<three_or_four)
    return "удовлетворительно";
    else
    if (score> Four_or_five)
    return "отлично";
    else
    return "хорошо";
}

// Задача 7 - Евклидово расстояние
double euclidean_distance(double x1, double y1, double x2, double y2) {
    // TODO: реализовать
    int distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return distance;
}

// Задача 8 - Манхэттенское расстояние
int manhattan_distance(int x1, int y1, int x2, int y2) {
    // TODO: реализовать
    int distance=abs(x2-x1)+abs(y2-y1);
    return distance;
}

// Вспомогательная функция для проверки простоты (можно писать сразу в задаче 9, но это плохой тон)
int is_prime(int n) {
    // TODO: реализовать
    #define one 1
    #define two 2
    #define three 3
    #define six 6
    #define ziro 0
    int number=5;
    if (n<=one)
    return 0;
    else
    if (n<=3)
    return 1;
    else
    if(n%two==ziro || n%three==ziro)
    return 0;
    while (pow(number,2)<=n)
    {
        if (n%number==ziro || n%(number+2)==0)
        return 0;
        number+=six;
    }
    return 1;
}

// Задача 9 - Среднее арифметическое простых чисел в интервале
double average_primes_in_interval(int a, int b) {
    // TODO: реализовать
    int sum=0, count=0;
    for(int i=a; i<=b;i++)
    {
        if(is_prime(i)==1)
        {sum+=i;
        count++;}
    }
return sum/count;
}

// Задача 10 - Кратные числа в интервале
int count_multiples(int start, int end, int k) {
    // TODO: реализовать
    #define ziro 0
    int count=0;
    for (int i=start; i<=end; i++)
    {if(i%k==ziro)
    count++;}
    return count;
}

// Задача 11 - Високосный год
int is_leap_year(int year) {
    // TODO: реализовать
    #define four 4
    #define hundred 100
    #define four_hundred 400
    if(year%four==ziro)
    {if(year%hundred==ziro)
    {if(year%four_hundred==ziro)
    return 1;
    else
    return 0;}
    else
    return 1; }
    else
    return 0;
}

// Задача 12 - Сезон по номеру месяца
const char* season_by_month(int month) {
    // TODO: реализовать
    #define one 1
    #define two 2
    #define three 3
    #define four 4
    #define five 5
    #define six 6
    #define seven 7
    #define eight 8
    #define nine 9
    #define ten 10
    #define nowember 11
    #define twelve 12
    switch (month) {
    case 'one':
    return "зима\n";
    break;
    case 'two':
    return "зима\n";
    break;
    case 'three':
    return "весна\n";
    break;
    case 'four':
    return "весна\n";
    break;
    case 'five':
    return "весна\n";
    break;
    case 'six':
    return "лето\n";
    break;
    case 'seven':
    return "лето\n";
    break;
    case 'eight':
    return "лето\n";
    break;
    case 'nine':
    return "осень\n";
    break;
    case 'ten':
    return "осень\n";
    break;
    case 'nowember':
    return "осень\n";
    break;
    case 'twelve':
    return "зима\n";
    break;
    default:
    return "некорректно\n";}

}

// Задача 13 - День недели
const char* day_of_week(int day_num) {
    // TODO: реализовать
    #define one 1
    #define two 2
    #define three 3
    #define four 4
    #define five 5
    #define six 6
    #define seven 7
    switch (day_num) {
    case 'one':
    return "понедельник\n";
    break;
    case 'two':
    return "вторник\n";
    break;
    case 'three':
    return "среда\n";
    break;
    case 'four':
    return "четверг\n";
    break;
    case 'five':
    return "пятница\n";
    break;
    case 'six':
    return "суббота\n";
    break;
    case 'seven':
    return "воскресенье\n";
    break;
    default:
    return "некорректно\n";}
}

// Задача 14 - Подсчёт цифр в числе
int count_digits(int n) {
    // TODO: реализовать
    #define ten 10
    int count=0;
    do{
        n=n/ten;
        count++;
    }while (n!=0);
return count;

}

// Задача 15 - Реверс числа
int reverse_number(int n) {
    // TODO: реализовать
    #define ten 10
    int count=10, reverse_n=0, exp=0;
    do{
        count=pow(count,exp);
        exp++;
        int figure = n%ten;
        reverse_n+=figure*count;
        n=n/ten;
    }while (n!=0);
}
