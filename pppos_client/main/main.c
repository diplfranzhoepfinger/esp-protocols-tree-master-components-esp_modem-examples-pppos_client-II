#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

extern void pppos_client_main(void);

extern void usb_cdc_example_main(void);

void app_main(void)
{


    pppos_client_main();
    vTaskDelay(pdMS_TO_TICKS(20 * 1000));
	usb_cdc_example_main();



}
