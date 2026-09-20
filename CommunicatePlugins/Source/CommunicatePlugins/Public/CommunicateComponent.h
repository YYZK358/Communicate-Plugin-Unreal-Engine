// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Components/ActorComponent.h"
#include "CommunicateComponent.generated.h"

USTRUCT(Blueprintable)
struct FSelectCommunicateTableRow : public FTableRowBase
{
	GENERATED_BODY()
	//选择说明
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="CommunicatePlugins")
	FText Text;
	//选择剧情分支
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="CommunicatePlugins")
	UDataTable* SelectData;
	//回归主线索引
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="CommunicatePlugins")
	int32 NextIndex;
};

USTRUCT(Blueprintable)
struct FCommunicateTableRow : public FTableRowBase
{
	GENERATED_BODY()
	//发言人
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="CommunicatePlugins")
	FName Name;
	//对话内容
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="CommunicatePlugins")
	FText ContentText;
	//是否包含选择
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="CommunicatePlugins")
	bool HaveSelect;
	//选择列表
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="CommunicatePlugins")
	TArray<FSelectCommunicateTableRow> Select;
	//是否为结尾
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="CommunicatePlugins")
	bool IsEnd;
};



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COMMUNICATEPLUGINS_API UCommunicateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCommunicateComponent();
	//数据表
	UPROPERTY(EditAnywhere, BlueprintReadWrite,category="CommunicatePlugins")
	UDataTable *DataTable;
	
	//剧情缓存
	UPROPERTY(EditAnywhere, BlueprintReadWrite,category="CommunicatePlugins")
	TArray<FCommunicateTableRow> CommunicateCache;
	
	//支线剧情缓存
	UPROPERTY(EditAnywhere, BlueprintReadWrite,category="CommunicatePlugins")
	TArray<FCommunicateTableRow> SelectCommunicateCache;
	
	//选择分支
	UPROPERTY(EditAnywhere, BlueprintReadWrite,category="CommunicatePlugins")
	int32 SelectIndex = 0;
	
	//主剧情索引
	UPROPERTY(EditAnywhere, BlueprintReadWrite,category="CommunicatePlugins")
	int32 CommunicateIndex=0;
	//int32 CommunicateLenght;
	int32 SelectCommunicateIndex=0;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite,category="CommunicatePlugins")
	bool bUseSelectCache = false;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//获取对话内容
	UFUNCTION(BlueprintCallable,Category="CommunicatePlugins")
	FCommunicateTableRow GetCommunicate();
	
	//切换到下一个对话索引
	UFUNCTION(BlueprintCallable,Category="CommunicatePlugins")
	void NextCommunicate();
	
	//切换到索引对话内容
	UFUNCTION(BlueprintCallable,Category="CommunicatePlugins")
	FCommunicateTableRow GetCommunicateByIndex(int32 index);
	
	//更新数据缓存
	UFUNCTION(BlueprintCallable,Category="CommunicatePlugins")
	void UpdateCommunicateCache();
	
	UFUNCTION(BlueprintCallable,Category="CommunicatePlugins")
	void UseSelect(int32 index);
};
