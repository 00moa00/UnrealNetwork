// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ABGameState.generated.h"

/**
 *
 */
//클라이언트는 게임모드 대신 GameState를 사용한다.

UCLASS()
class ARENABATTLE_API AABGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	//게임 모드가 StartPlay를 지시를 하면 게임 스테이트에게 명령을 내려서 게임 스테이트가 현재 월드에 있는 모든 액터들에게
	//BeginPlay를 호출하고 게임을 시작하라고 명령을 한다.
	//로컬의 로직이다. 
	virtual void HandleBeginPlay() override;

protected:
	//beReplicatedhasBugunPlay라고 하는 프로퍼티가 서버로부터 전송이 되어서 변경이 되면 함수 호출이 된다.
	// 그때 클라이언트가 신호를 받아서 이제 게임을 시작해야하는 것을 알게된다. 
	// 그러면 이 함수에 의해서 클라이언트에 복제된 플레이어 컨트롤러의 BeginPlay가 호출되는 것을 확인해볼 수있다. 
	virtual void OnRep_ReplicatedHasBegunPlay() override;
};
