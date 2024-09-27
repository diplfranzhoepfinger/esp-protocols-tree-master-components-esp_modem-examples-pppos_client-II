idf_component_register(SRCS "pppos_client_main.c"
                       PRIV_REQUIRES esp_netif mqtt esp_modem esp_modem_usb_dte
                       INCLUDE_DIRS ".")
