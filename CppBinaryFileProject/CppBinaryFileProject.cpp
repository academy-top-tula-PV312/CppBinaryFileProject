#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    char fileName[] = "file01.dat";

    int number = 1305257628;
    float real = 2078.679;
    // 4d cc a6 9c

    FILE* file = fopen(fileName, "rb");
    int n;
    float x;
    double y;
    long long l;

    /*fwrite(&number, sizeof(int), 1, file);
    fwrite(&real, sizeof(float), 1, file);*/
    fread(&l, 8, 1, file);
    //fread(&x, 4, 1, file);
    
    /*std::cout << n << "\n";
    std::cout << x << "\n";*/
    std::cout << l << "\n";

    fclose(file);
}
