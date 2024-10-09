#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


extern void pppos_client_main(void);

extern void nmea_int(void);

void app_main(void)
{


	nmea_int();

    pppos_client_main();

}
