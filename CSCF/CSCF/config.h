#pragma once
#include "pj.h"
//����app�������
struct network_config_t
{
	int				sip_af;
	int				sip_port;
	pj_bool_t		sip_tcp;
} network_config;
extern pj_status_t init_config();
