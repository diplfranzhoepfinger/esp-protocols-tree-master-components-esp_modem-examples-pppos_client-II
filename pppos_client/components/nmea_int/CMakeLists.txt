idf_component_register(SRCS "nmea_int.c"
                    INCLUDE_DIRS "include"
                    PRIV_REQUIRES usb usb_host_cdc_acm)
