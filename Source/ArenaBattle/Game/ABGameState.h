// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ABGameState.generated.h"

/**
 *
 */
//Ŭ���̾�Ʈ�� ���Ӹ�� ��� GameState�� ����Ѵ�.

UCLASS()
class ARENABATTLE_API AABGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	//���� ��尡 StartPlay�� ���ø� �ϸ� ���� ������Ʈ���� ����� ������ ���� ������Ʈ�� ���� ���忡 �ִ� ��� ���͵鿡��
	//BeginPlay�� ȣ���ϰ� ������ �����϶�� ����� �Ѵ�.
	//������ �����̴�. 
	virtual void HandleBeginPlay() override;

protected:
	//beReplicatedhasBugunPlay��� �ϴ� ������Ƽ�� �����κ��� ������ �Ǿ ������ �Ǹ� �Լ� ȣ���� �ȴ�.
	// �׶� Ŭ���̾�Ʈ�� ��ȣ�� �޾Ƽ� ���� ������ �����ؾ��ϴ� ���� �˰Եȴ�. 
	// �׷��� �� �Լ��� ���ؼ� Ŭ���̾�Ʈ�� ������ �÷��̾� ��Ʈ�ѷ��� BeginPlay�� ȣ��Ǵ� ���� Ȯ���غ� ���ִ�. 
	virtual void OnRep_ReplicatedHasBegunPlay() override;
};
