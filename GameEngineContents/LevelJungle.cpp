#include "PreCompile.h"
#include "LevelJungle.h"
#include "MapImageJungle.h"
#include "Zero.h"

LevelJungle::LevelJungle()
{
}

LevelJungle::~LevelJungle()
{
}


void LevelJungle::Start()
{
	////�׽�Ʈ�ڵ�
	//{
	//	GameEngineDirectory Dir;
	//	Dir.MoveParentToExistsChild("MegamanX5Resources");
	//	Dir.MoveChild("MegamanX5Resources");
	//	Dir.MoveChild("BackGround");
	//	Dir.MoveChild("BG_Jungle");
	//	Dir.MoveChild("TestJungle");
	//	std::vector<GameEngineFile> Files = Dir.GetAllFile();

	//	for (size_t i = 0; i < Files.size(); i++)
	//	{
	//		GameEngineFile& File = Files[i];
	//		GameEngineTexture::Load(File.GetStringPath());
	//	}
	//}
	//// need delete


	//ī�޶� ����
	float4 HalfWindowScale = GameEngineCore::MainWindow.GetScale().Half();
	GetMainCamera()->Transform.SetLocalPosition({ HalfWindowScale.X, -HalfWindowScale.Y, -500.0f });
	GetMainCamera()->SetProjectionType(EPROJECTIONTYPE::Orthographic);

	CurCameraLimit.Left = HalfWindowScale.X;
	CurCameraLimit.Up = -HalfWindowScale.Y;
	CurCameraLimit.Down = -HalfWindowScale.Y;


	//Jungle ���̹��� ��������Ʈ ���
	{
		GameEngineDirectory Dir;
		Dir.MoveParentToExistsChild("MegamanX5Resources");
		Dir.MoveChild("MegamanX5Resources");
		Dir.MoveChild("BackGround");
		Dir.MoveChild("BG_Jungle");
		std::vector<GameEngineFile> Files = Dir.GetAllFile();

		for (size_t i = 0; i < Files.size(); i++)
		{
			// ���������� �� �����ϰ� �ִ����� �ڽ��� ��Ȯ�ϰ� �����ϱ� ���ؼ�
			GameEngineFile& File = Files[i];
			GameEngineTexture::Load(File.GetStringPath());
		}

		GameEngineSprite::CreateSingle("Jungle0.png");
		GameEngineSprite::CreateSingle("Jungle1.png");
		GameEngineSprite::CreateSingle("Jungle2.png");
		//GameEngineSprite::CreateSingle("Jungle3.png");
		//GameEngineSprite::CreateSingle("Jungle4.png");
		//GameEngineSprite::CreateSingle("Jungle5.png");
		//GameEngineSprite::CreateSingle("Jungle6.png");
		//GameEngineSprite::CreateSingle("Jungle7.png");
		//GameEngineSprite::CreateSingle("Jungle8.png");
		//GameEngineSprite::CreateSingle("Jungle9.png");
		//GameEngineSprite::CreateSingle("Jungle10.png");
		//GameEngineSprite::CreateSingle("Jungle11.png");
		//GameEngineSprite::CreateSingle("Jungle12.png");
		//GameEngineSprite::CreateSingle("Jungle13.png");
		//GameEngineSprite::CreateSingle("Jungle14.png");
		//GameEngineSprite::CreateSingle("Jungle15.png");
		//GameEngineSprite::CreateSingle("Jungle16.png");
		//GameEngineSprite::CreateSingle("Jungle17.png");
		//GameEngineSprite::CreateSingle("Jungle18.png");
		//GameEngineSprite::CreateSingle("Jungle19.png");
		//GameEngineSprite::CreateSingle("Jungle20.png");
		//GameEngineSprite::CreateSingle("Jungle21.png");
		//GameEngineSprite::CreateSingle("Jungle22.png");
		//GameEngineSprite::CreateSingle("Jungle23.png");
		//GameEngineSprite::CreateSingle("Jungle24.png");
		//GameEngineSprite::CreateSingle("Jungle25.png");
		//GameEngineSprite::CreateSingle("Jungle26.png");
		//GameEngineSprite::CreateSingle("Jungle27.png");
		//GameEngineSprite::CreateSingle("Jungle28.png");
		//GameEngineSprite::CreateSingle("Jungle29.png");
		//GameEngineSprite::CreateSingle("Jungle30.png");
		//GameEngineSprite::CreateSingle("Jungle31.png");
		//GameEngineSprite::CreateSingle("Jungle32.png");
		//GameEngineSprite::CreateSingle("Jungle33.png");
		//GameEngineSprite::CreateSingle("Jungle34.png");
		//GameEngineSprite::CreateSingle("Jungle35.png");
		//GameEngineSprite::CreateSingle("Jungle36.png");
	}


	////�׽�Ʈ�ڵ�
	//{
	//	GameEngineSprite::CreateSingle("TestJungle0.png");

	//	std::shared_ptr<MapImageJungle> MapJungle0 = CreateActor<MapImageJungle>();
	//	MapJungle0->Transform.SetLocalPosition({ HalfWindowScale.X, -HalfWindowScale.Y, -500.0f });
	//	std::shared_ptr<class GameEngineSpriteRenderer> MapSpriteRenderer0 = MapJungle0->GetSpriteRenderer();
	//	MapSpriteRenderer0 = MapJungle0->CreateComponent<GameEngineSpriteRenderer>(30);
	//	MapSpriteRenderer0->SetSprite("TestJungle0.PNG");
	//	MapSpriteRenderer0->SetSamplerState(SamplerOption::POINT);
	//	MapSpriteRenderer0->Transform.AddLocalPosition({ 0.0f, 0.0f });
	//	MapSpriteRenderer0->SetImageScale({ 960.0f, 720.0f, 5.0f });
	//}
	//// need delete


	//Jungle �� �̹����� ���� ���͵� �����
	{
		std::shared_ptr<MapImageJungle> MapJungle0 = CreateActor<MapImageJungle>();
		MapJungle0->Transform.SetLocalPosition({ HalfWindowScale.X, -HalfWindowScale.Y, -500.0f });                         
		std::shared_ptr<class GameEngineSpriteRenderer> MapSpriteRenderer0 = MapJungle0->GetSpriteRenderer();
		MapSpriteRenderer0 = MapJungle0->CreateComponent<GameEngineSpriteRenderer>(20);
		MapSpriteRenderer0->SetSprite("Jungle0.PNG");
		MapSpriteRenderer0->SetSamplerState(SamplerOption::POINT);
		MapSpriteRenderer0->Transform.AddLocalPosition({0.0f, 0.0f }); 
		MapSpriteRenderer0->SetImageScale({ 960.0f, 720.0f, 5.0f });

		std::shared_ptr<MapImageJungle> MapJungle1 = CreateActor<MapImageJungle>();
		MapJungle1->Transform.SetLocalPosition({ HalfWindowScale.X, -HalfWindowScale.Y, -500.0f });
		std::shared_ptr<class GameEngineSpriteRenderer> MapSpriteRenderer1 = MapJungle1->GetSpriteRenderer();
		MapSpriteRenderer1 = MapJungle1->CreateComponent<GameEngineSpriteRenderer>(20);
		MapSpriteRenderer1->SetSprite("Jungle1.PNG");
		MapSpriteRenderer1->SetSamplerState(SamplerOption::POINT);
		MapSpriteRenderer1->Transform.AddLocalPosition({ 960.f, 0.0f});  //��ġ �����ϴ� �ڵ�
		MapSpriteRenderer1->SetImageScale({ 960.0f, 720.0f, 5.0f });

		std::shared_ptr<MapImageJungle> MapJungle2 = CreateActor<MapImageJungle>();
		MapJungle2->Transform.SetLocalPosition({ HalfWindowScale.X, -HalfWindowScale.Y, -500.0f });
		std::shared_ptr<class GameEngineSpriteRenderer> MapSpriteRenderer2 = MapJungle2->GetSpriteRenderer();
		MapSpriteRenderer2 = MapJungle2->CreateComponent<GameEngineSpriteRenderer>(20);
		MapSpriteRenderer2->SetSprite("Jungle2.PNG");
		MapSpriteRenderer2->SetSamplerState(SamplerOption::POINT);
		MapSpriteRenderer2->Transform.AddLocalPosition({ 960.f * 2, 0.0f });
		MapSpriteRenderer2->SetImageScale({ 960.0f, 720.0f, 5.0f });

		/*std::shared_ptr<MapImageJungle> MapJungle3 = CreateActor<MapImageJungle>();
		MapJungle3->Transform.SetLocalPosition({ HalfWindowScale.X, -HalfWindowScale.Y, -500.0f });
		std::shared_ptr<class GameEngineSpriteRenderer> MapSpriteRenderer3 = MapJungle3->GetSpriteRenderer();
		MapSpriteRenderer3 = MapJungle3->CreateComponent<GameEngineSpriteRenderer>(20);
		MapSpriteRenderer3->SetSprite("Jungle3.PNG");
		MapSpriteRenderer3->SetSamplerState(SamplerOption::POINT);
		MapSpriteRenderer3->Transform.AddLocalPosition({ 960.f * 3, 0.0f });
		MapSpriteRenderer3->SetImageScale({ 960.0f, 720.0f, 5.0f });*/


	}

	//zero ��������Ʈ ���
	{
		GameEngineDirectory Dir;
		Dir.MoveParentToExistsChild("MegamanX5Resources");
		Dir.MoveChild("MegamanX5Resources");
		Dir.MoveChild("Zero");
		std::vector<GameEngineFile> Files = Dir.GetAllFile();

		for (size_t i = 0; i < Files.size(); i++)
		{
			// ���������� �� �����ϰ� �ִ����� �ڽ��� ��Ȯ�ϰ� �����ϱ� ���ؼ�
			GameEngineFile& File = Files[i];
			GameEngineTexture::Load(File.GetStringPath());
		}

		GameEngineSprite::CreateSingle("zeropractice.png");

	}

	//zero ĳ���� actor����
	{
		/*MainPlayer = CreateActor<Zero>();
		std::dynamic_pointer_cast<Zero>(MainPlayer);*/

		CreatePlayer<Zero>();
	}
}

void LevelJungle::Update(float _Delta)
{
	//�����ٲٱ�
	if (GameEngineInput::IsPress(VK_F1))
	{
		GameEngineCore::ChangeLevel("LevelTitle");
	}
	if (GameEngineInput::IsPress(VK_F2))
	{
		GameEngineCore::ChangeLevel("LevelCharacterSelect");
	}

	//ī�޶� ��ġ����
	std::shared_ptr<GameEngineCamera> JungleMainCamera = GetMainCamera();
	float4 HalfWindowScale = GameEngineCore::MainWindow.GetScale().Half();

	float4 PlayerPos = MainPlayer->Transform.GetWorldPosition();
	float4 CameraPos = PlayerPos;
	
	//ī�޶� ���� ������ ������
	if (CameraPos.X < CurCameraLimit.Left)
	{
		CameraPos.X = CurCameraLimit.Left;
	}
	if (CameraPos.Y > CurCameraLimit.Up)
	{
		CameraPos.Y = CurCameraLimit.Up;
	}
	if (CameraPos.Y < CurCameraLimit.Down)
	{
		CameraPos.Y = CurCameraLimit.Down;
	}

	JungleMainCamera->Transform.SetLocalPosition(CameraPos);


}

void LevelJungle::LevelStart(GameEngineLevel* _PrevLevel)
{
}

void LevelJungle::LevelEnd(GameEngineLevel* _NextLevel)
{
}