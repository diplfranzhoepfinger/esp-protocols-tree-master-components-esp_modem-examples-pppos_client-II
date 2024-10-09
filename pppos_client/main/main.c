#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


extern void pppos_client_main(void);

extern void usb_cdc_example_main(void);

void app_main(void)
{


    pppos_client_main();
	usb_cdc_example_main();



}
