#include <stdio.h>

/*네트워크 라이브러리*/
#ifndef _NETWORK_H_
#define _NETWORK_H_
#include "../../KSF_NET/ksf_net_lib.h"
#endif

/*커맨드 라이브러리*/
#include "../lib/command_controller_lib/led_lib.h"
#include "../lib/command_controller_lib/sprinkler_lib.h"

#define true 1
#define false 0

void send_sprinkler_signal(int socket, int sig);

void send_led_signal(int socket, int sig);
