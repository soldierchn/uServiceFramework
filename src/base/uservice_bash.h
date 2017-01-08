#ifndef _USERVICE_BASE_H_
#define _USERVICE_BASE_H_

/*
	微服务基础类
*/
class CUserviceBase
{
public:
	CUserviceBase();
	~CUserviceBase();
	// 初始化
	virtual void init() = 0;
	// 结束，释放资源
	virtual void finish() = 0;
	//微服务运行
	virtual void run() = 0;
protected:
private:

};
#endif