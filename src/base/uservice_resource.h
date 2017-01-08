#ifndef _USERVICE_RESOURCE_H_
#define _USERVICE_RESOURCE_H_
/*
	微服务资源管理类
*/
class CUserviceResource
{
public:
	CUserviceResource();
	~CUserviceResource();
	//资源初始化
	virtual void init() = 0;
	//资源释放
	virtual void finish() = 0;
private:
	// 资源
};

#endif