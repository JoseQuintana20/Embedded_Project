#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
    unsigned char id = 0;
    int hum = 90;
    int temp = 21;
    char json[150] = {};

    sprintf(json,"POST /save HTTP/1.1\ncontent-type: application\ncontent-length: 37\n\n{\n\"id\":\"%d\", \n\"humedad\":\"%d\", \n\"temperatura\":\"%d\"\n}\n",id++,hum,temp);
    //sprintf(json,"POST /save HTTP/1.1\ncontent-type:\n\n{\n\"id\":\"%d\", \n\"humedad\":\"%d\", \n\"temperatura\":\"%d\"\n}\n",id++,hum,temp);
    printf(json);

}