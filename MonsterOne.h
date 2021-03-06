﻿/*!
 * \file MonsterOne.h
 *
 * \author SuooL_振生
 * \date 四月 2015
 *
 * 第一关怪物管理器
 */

#ifndef __MonsterOne__H__
#define __MonsterOne__H__
#include "cocos2d.h"
#include "GameMap.h"

USING_NS_CC;

class Monster;
class Hero;
class GameMap;

class MonsterOne : public Node{
public:
	MonsterOne();
	~MonsterOne();
	void updateMonster(float delta);
	void showSecMon(float delta);
	void showThrMon(float delta);
	static MonsterOne* createWithMapAndHero(GameMap* map, Hero* hero);
	bool initMonster(GameMap* map, Hero* hero);
private:
	GameMap* m_pMap;
	Hero* m_pHero;
};

#endif 