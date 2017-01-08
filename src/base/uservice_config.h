#ifndef _USERVICE_CONFIG_H_
#define _USERVICE_CONFIG_H_

class CUserviceConfig
{
public:
	CUserviceConfig();
	~CUserviceConfig();
	//配置加载
	virtual void load() = 0;
	//配置重新加载
	virtual void reload() = 0;
};

#endif