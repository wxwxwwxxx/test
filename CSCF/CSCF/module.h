#pragma once
/*����ģ�鹫�ø�ͷ�ļ�
*�����ģ��ʱ�밴���²��裺
*1������ģ���c�ļ�
*2���ڸ�ͷ�ļ�������ģ�鼰ģ��ĺ���
*3����register_module���������ģ���ע��
*/
#include "pj.h"
//ע��ģ��
extern pjsip_module module_registrar;
//logģ��
extern pj_bool_t logging_on_rx_msg(pjsip_rx_data *rdata);
extern pj_status_t logging_on_tx_msg(pjsip_tx_data *tdata);
extern pjsip_module module_log;
//proxyģ��
extern pjsip_module module_proxy;

//ģ��ע�ắ��
extern pj_status_t register_module();