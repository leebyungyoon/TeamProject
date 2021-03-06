#pragma once
#include "GameObject.h"

//�Ѿ˱���ü 
struct tagBullet
{
	image*bulletImage;
	RECT rc; 
	float x, y;
	float fireX, fireY; 
	float speed; 
	float angle; 
	float gravity; 
	float radius;
	bool isFire;
	int count;
};



class Bullet :public GameObject
{
private:
	//const char* _imageName;
	//float _range;
	//int _bulletMax;
	//bool _isFrameImg;

	float _range; //�Ѿ˰Ÿ� 
	int _bulletMax; //�Ѿ˰��� 
	vector<tagBullet> _vBullet;
	vector<tagBullet>::iterator _viBullet; 

public:
	//�Ѿ˹߻�
	void fire(float x, float y, float angle, float speed);
	void move();

	Bullet(string name);
	~Bullet();

	virtual HRESULT Init(const char * imageName, int width, int height, int bulletMax, float range);
	//virtual HRESULT Init(const char * imageName, int width, int height, int bulletMax, float range);
	virtual void Release();
	virtual void Update();
	virtual void Render();

	vector<tagBullet> getVBullet() { return _vBullet; }
	vector<tagBullet>::iterator getViBullet() { return _viBullet; }
};

struct tagBoom
{
	image*bulletImage;//��ź�̹��� 
	RECT rc; //��ź ��Ʈ 
	float x, y;//��ź �������� 
	float speed;//��ź ���ǵ�
	float angle;//��ź�� �ޱ� 
	float gravity;//��ź�� �߷� 
	bool isFire;//��ź ������? 

};
class Boom : public GameObject
{
private:
	vector<tagBoom> _vBoom;
	vector<tagBoom>::iterator _viBoom;
	int _bulletMax;

public:
	void fire(float x, float y, float angle ,float gravity,float speed);
	void move(); 

	Boom(string name);
	~Boom();

	virtual HRESULT Init(const char* imageName, int width, int height , int bulletMax);
	virtual void Release();
	virtual void Update();
	virtual void Render();

	vector<tagBoom> getVBoom() { return _vBoom; }
	vector<tagBoom>::iterator getViBoom() { return _viBoom; }

};










