// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankScript.generated.h"

//FowardDeclarations


UCLASS()
class ITZTANKZ_API ATankScript : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATankScript();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
  

private:
		

};
