// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class BABARIANBABABABABAB_API UBAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Start")
	float Speed;
};