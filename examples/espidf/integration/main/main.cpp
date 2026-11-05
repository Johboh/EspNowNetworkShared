// Copyright (c) Johan Böhlin
// SPDX-License-Identifier: GPL-3.0-or-later

#include <esp-now-structs.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

extern "C" {
void app_main();
}

void app_main(void) { EspNowMessageHeaderV1 headerv1; }
