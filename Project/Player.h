#pragma once

#include "GameDefine.h"
#include "PlayerShot.h"

	//‹Ê‚Ì”­ËŒÀŠE”
#define m_PlayerShotCount  (40)
	//”­ËŠÔŠu
#define m_PlayerShotWait  (5)

class CPlayer{
private:
	CMeshContainer	m_Mesh;
	CVector3		m_Pos;
	float			m_RotZ;
	// ˆÚ“®‘¬“x
	float m_Speed = 0.1f;



	CMeshContainer	m_ShotMesh;
	CPlayerShot	m_ShotArray[m_PlayerShotCount];
	int			m_ShotWait;
public:
	CPlayer();
	~CPlayer();
	bool Load();
	void Initialize();
	void Update();
	void Render();
	void RenderDebugText();
	const CVector3 GetPosition(){ return m_Pos; }
	void Release();
};