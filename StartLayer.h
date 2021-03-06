﻿/*!
 * \class StartLayer
 *
 * \ingroup GroupName
 *
 * \brief 开始主菜单场景
 *
 * TODO: long description
 *
 * \note 
 *
 * \author SuooL
 *
 * \version 1.0
 *
 * \date 五月 2015
 *
 * Contact: hu1020935219@gmail.com
 *
 */

#ifndef __StartLayer__H__
#define __StartLayer__H__

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;
USING_NS_CC_EXT;

class StartLayer : Layer
{
public:
	virtual bool init();
	static Scene* createScene();
	CREATE_FUNC(StartLayer);
private:
	// 开始主界面的按钮控件监控事件
	void touchSet(Ref* pSender);
	void touchLib(Ref* pSender);
	void touchMiJi(Ref* pSender);
	void touchCG(Ref* pSender);
	void touchTZ(Ref* pSender);
	void touchHelp(Ref* pSender);

	// 图片精灵
	Sprite* title;
	Sprite* bgPic;

};

#endif 