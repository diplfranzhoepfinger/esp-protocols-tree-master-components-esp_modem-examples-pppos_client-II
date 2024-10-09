#include <stdio.h>
#include "nmea_int.h"
#include "esp_log.h"

#include "usb/usb_host.h"
#include "usb/cdc_acm_host.h"

static const char * const TAG = "nmea_int";




static void handle_notif(const cdc_acm_host_dev_event_data_t *event, void *user_ctx)
{

}


static bool handle_rx(const uint8_t *data, size_t data_len, void *user_arg)
{
	return false;
}

void nmea_int(void)
{

    cdc_acm_dev_hdl_t cdc_hdl;


    ESP_LOGI(TAG, "Installing CDC-ACM driver");

    const usb_host_config_t host_config = {
        .skip_phy_setup = false,
        .intr_flags = ESP_INTR_FLAG_LEVEL1,
    };
    usb_host_install(&host_config);
    cdc_acm_host_install(NULL);

    // Open CDC-ACM device
    const cdc_acm_host_device_config_t esp_modem_cdc_acm_device_config = {
        .connection_timeout_ms = 0,
        .out_buffer_size = 512,
        .in_buffer_size = 4096,
        .event_cb = handle_notif,
        .data_cb = handle_rx,
        .user_arg = NULL
    };

	cdc_acm_host_open_vendor_specific(0x1E0E, 0x9011, 3, &esp_modem_cdc_acm_device_config, &cdc_hdl);




}
