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

	//클라이언트의 접속 요청을 처리하는 함수. 프리 로그인이 통과했을 때 비로소 로그인이 진행이 된다. 


	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	//프리로그인이 통과되면 접속한 클라이언트, 자기 자신도 게임의 참여함으로 자기 자신을 포함해서 접속을 허용한 플레이어에 대한 객체를 생성하고
	//플레이어를 대변하는 플레이어 컨트롤러를 하나 만들어준다.
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	
	//플레이어 입장을 위해 플레이어에 필요한 기본 설정을 모두 마무리하는 함수
	virtual void PostLogin(APlayerController* NewPlayer) override;

	//게임의 시작을 지시하는 함수
	virtual void StartPlay() override;
};
