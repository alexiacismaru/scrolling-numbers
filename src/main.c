#include <util/delay.h>
#include <avr/io.h>
#include <usart.h>
#include <display.h>


int main(){
    initUSART();
    initDisplay();
    int counter = 1;
    long number = 0;
    while(1)
    {printf("%d\t%d\n",number,counter);
        writeNumberAndWait(number,500);

        if (counter ==10)
        {
          number = number*10;
            counter = 1;
        }
        number = number*10 + counter;
        number = number%10000;
        counter++;
    }
}