#ifndef __ATP_LTECMS_MSGTYPES_H__
#define __ATP_LTECMS_MSGTYPES_H__

#define ATP_CBBID_LTECMS_NAME    "lte"
#define ATP_HYBRID_LTE_IFC_NAME "rmnet0"
#define ATP_HYBRID_LTE_WAN_PATH "Device.IP.Interface.6."

/* <DTS2013081901325 xiazhongyue 20130819 begin */
#define  LTE_IFNAME_LEN 32

enum ATP_LTECMS_MSGTYPES_EN
{
    ATP_MSG_LTECMS_START = ATP_MSG_CATEGORY_DEF(ATP_MODULE_LTECMS),
    ATP_MSG_LTECMS_WAN_CHG = ATP_MSG_LTECMS_START,   /*!< LTECMS��Ϣ��ʼ */
    ATP_MSG_LTECMS_STATUS_CHG,
    ATP_MSG_LTECMS_GET_LTE_INFO,
};
typedef struct tagATP_LTE_STATUS_MSG_ST
{
    VOS_BOOL  bStatus;
    VOS_CHAR acIfname[LTE_IFNAME_LEN];
} ATP_LTE_STATUS_MSG_ST;
/* DTS2013081901325 xiazhongyue 20130819 end>   */
#endif // End of __ATP_LTECMS_MSGTYPES_H__