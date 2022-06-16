#include <freertos/queue.h>
#include <driver/gpio.h>

int main(){
    gpio_set_direction(15, GPIO_MODE_INPUT);
    adc1_config_width(ADC_WIDTH_BIT_10);
    adc1_config_channel_atten(AC1_CHANNEL_0, ADC_ATTEN_DB_0);

    while (1){
        aux = adc1_get_raw(ADC1_CHANNEL_0)
        temp = (100*aux/1023)*1.3;
        delay_ms(5000);
    }
    

}