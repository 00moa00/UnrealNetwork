// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Interface/ABGameInterface.h"
#include "ABGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABGameMode : public AGameModeBase, public IABGameInterface
{
	GENERATED_BODY()
	
public:
	AABGameMode();

	virtual void OnPlayerDead() override;

	//Ŭ���̾�Ʈ�� ���� ��û�� ó���ϴ� �Լ�. ���� �α����� ������� �� ��μ� �α����� ������ �ȴ�. 


	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	//�����α����� ����Ǹ� ������ Ŭ���̾�Ʈ, �ڱ� �ڽŵ� ������ ���������� �ڱ� �ڽ��� �����ؼ� ������ ����� �÷��̾ ���� ��ü�� �����ϰ�
	//�÷��̾ �뺯�ϴ� �÷��̾� ��Ʈ�ѷ��� �ϳ� ������ش�.
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	
	//�÷��̾� ������ ���� �÷��̾ �ʿ��� �⺻ ������ ��� �������ϴ� �Լ�
	virtual void PostLogin(APlayerController* NewPlayer) override;

	//������ ������ �����ϴ� �Լ�
	virtual void StartPlay() override;
};
