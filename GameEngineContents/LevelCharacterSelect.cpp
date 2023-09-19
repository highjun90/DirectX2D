#include "PreCompile.h"
#include "LevelCharacterSelect.h"
#include "CharacterSelectImage.h"

LevelCharacterSelect::LevelCharacterSelect()
{
}

LevelCharacterSelect::~LevelCharacterSelect()
{
}

void LevelCharacterSelect::Start()
{
	//ĳ���ͼ��� ȭ�鸮�ҽ� (�ִϸ��̼�)��������
	{
		GameEngineDirectory Dir;
		Dir.MoveParentToExistsChild("MegamanX5Resources");
		Dir.MoveChild("MegamanX5Resources");
		Dir.MoveChild("BackGround");
		Dir.MoveChild("ZeroSelect");
		GameEngineSprite::CreateFolder(Dir.GetStringPath());

		Dir.MoveParentToExistsChild("XSelect");
		Dir.MoveChild("XSelect");
		GameEngineSprite::CreateFolder(Dir.GetStringPath());
	}

	float4 HalfWindowScale = GameEngineCore::MainWindow.GetScale().Half();
	GetMainCamera()->Transform.SetLocalPosition({ HalfWindowScale.X, -HalfWindowScale.Y, -500.0f });
	GetMainCamera()->SetProjectionType(EPROJECTIONTYPE::Orthographic);
	{
		std::shared_ptr<CharacterSelectImage> Object0 = CreateActor<CharacterSelectImage>(ContentsObjectType::Player);
	}

}



void LevelCharacterSelect::Update(float _Delta)
{
	//�����ٲٱ�
	if (GameEngineInput::IsPress(VK_F1))
	{
		GameEngineCore::ChangeLevel("LevelTitle");
	}
	if (GameEngineInput::IsPress(VK_F3))
	{
		GameEngineCore::ChangeLevel("LevelJungle");
	}


}

void LevelCharacterSelect::LevelStart(GameEngineLevel* _PrevLevel)
{

}
void LevelCharacterSelect::LevelEnd(GameEngineLevel* _NextLevel)
{

}