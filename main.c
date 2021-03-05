#include <stdio.h>

struct Person{
    int umur;
    char* nama;
};
// Person Yodha;
// Person Rishang;
// Yodha.umur = 9;
// Yodha.nama ="muhammad yodha bomantara";
// Rishang.umur = 5;
// Rishang.nama ="muhammad rishang andaru";

int main()
{
 struct Person Yodha;
//Person Rishang;
Yodha.umur = 9;
Yodha.nama = "muhammad yodha bomantara";
//Rishang.umur = 5;
//Rishang.nama ="muhammad rishang andaru";

    printf("%s\n%d\ntahun",Yodha.nama,Yodha.umur);
    return 0;
}
