// Fill out your copyright notice in the Description page of Project Settings.


#include "BAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UBAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ACharacter* MyCharacter = Cast<ACharacter>(TryGetPawnOwner());

	if (IsValid(MyCharacter))
	{
		Speed = MyCharacter->GetCharacterMovement()->Velocity.Size2D();
	}

}
