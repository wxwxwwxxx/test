#include "cscf.h"
#include "pj.h"
//ע�����ģ��ʱ��༭�ú���������ģ���ע��
pj_status_t register_module()
{
	pj_status_t status;
	status = pjsip_endpt_register_module(app.sip_endpt, &module_proxy);
	CHECK_STATUS();
	status = pjsip_endpt_register_module(app.sip_endpt, &module_registrar);
	CHECK_STATUS();
	status = pjsip_endpt_register_module(app.sip_endpt, &module_log);
	CHECK_STATUS();
	return PJ_SUCCESS;
}