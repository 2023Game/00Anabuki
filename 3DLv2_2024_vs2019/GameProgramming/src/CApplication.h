#pragma once
#include "CTexture.h"
#include "CCharacter3.h"
#include "CBullet.h"
#include "CEnemy.h"
#include "CPlayer.h"
#include "CInput.h"
#include "CFont.h"
#include <vector>

#include "CSound.h"

#include "CVector.h"
#include "CModel.h"

#include "CTaskManager.h"

#include "CColliderTriangle.h"

#include "CColliderMesh.h"

#include "CUi.h"

#include "CModelX.h"

#include "CXPlayer.h"
#include "CXEnemy.h"

#include "CPaladin.h"

#include "CActionCamera.h"

#include "CShadowMap.h"

class CApplication
{
private:
	CShadowMap mShadowMap;

	//CActionCamera
	CActionCamera mActionCamera;

	CPaladin* mpPaladin;
//	CModelX mKnight;
//	CXEnemy mXEnemy;
	//�L�����N�^�̃C���X�^���X
//	CXPlayer mXPlayer;

	CMatrix mMatrix;
	CModelX mModelX;

	static CUi* spUi;	//UI�N���X�̃|�C���^
	//���f������R���C�_�𐶐�
	CColliderMesh mColliderMesh;

	//�O�p�R���C�_�̍쐬
	//CColliderTriangle mColliderTriangle;
	//CColliderTriangle mColliderTriangle2;

	//���f���r���[�̋t�s��
	static CMatrix mModelViewInverse;

	//C5���f��
	CModel mModelC5;

	//static CTaskManager mTaskManager;
	//CPlayer mPlayer;

	CModel mBackGround; //�w�i���f��
	CModel mModel;
	CVector mEye;

	CSound mSoundBgm;	//BGM
	CSound mSoundOver;	//�Q�[���I�[�o�[

	enum class EState
	{
		ESTART,	//�Q�[���J�n
		EPLAY,	//�Q�[����
		ECLEAR,	//�Q�[���N���A
		EOVER,	//�Q�[���I�[�o�[
	};
	EState mState;
//	CCharacter mRectangle;
	CPlayer* mpPlayer;
	static CTexture mTexture;
	CEnemy* mpEnemy;
//	CBullet* mpBullet;
	CInput mInput;
	CFont mFont;

	//CCharacter�̃|�C���^�̉ϒ��z��
//	std::vector<CCharacter*> mCharacters;
public:
	~CApplication();
	static CUi* Ui();	//UI�N���X�̃C���X�^���X���擾
	//���f���r���[�s��̎擾
	static const CMatrix& ModelViewInverse();
	//static CTaskManager* TaskManager();

	static CTexture* Texture();
	//�ŏ��Ɉ�x�������s����v���O����
	void Start();
	//�J��Ԃ����s����v���O����
	void Update();
};