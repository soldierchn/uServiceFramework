##ifndef _USERVICE_MANAGER_H_
#define _USERVICE_MANAGER_H_

/*
	微服务管理器
*/
class CUserviceManager
{
public:
	CUserviceManager();
	~CUserviceManager();
	//注册微服务线程
	void registerUservice(bool detchZombie = true);
	
	
};

#endif