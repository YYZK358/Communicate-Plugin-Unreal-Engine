// Fill out your copyright notice in the Description page of Project Settings.


#include "CommunicateComponent.h"



// Sets default values for this component's properties
UCommunicateComponent::UCommunicateComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}


// Called when the game starts
void UCommunicateComponent::BeginPlay()
{
	Super::BeginPlay();
	UpdateCommunicateCache();
	// ...
	
}


// Called every frame
void UCommunicateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FCommunicateTableRow UCommunicateComponent::GetCommunicate()
{
	if (!bUseSelectCache)
	{
		if (CommunicateCache.Num()==0)return FCommunicateTableRow();
        	FCommunicateTableRow ret = CommunicateCache[CommunicateIndex];
        	return ret;
	}else{
		if (SelectCommunicateCache.Num()==0)return FCommunicateTableRow();
		FCommunicateTableRow ret = SelectCommunicateCache[SelectCommunicateIndex];
		return ret;
	}
	
}

void UCommunicateComponent::NextCommunicate()
{
	//TArray<FCommunicateTableRow> _Cate = bUseSelectCache ? SelectCommunicateCache : CommunicateCache;
	if (!bUseSelectCache)
	{
		FCommunicateTableRow ret = CommunicateCache[CommunicateIndex];
        	if (ret.HaveSelect && SelectIndex<ret.Select.Num())
        	{
        		CommunicateIndex = ret.Select[SelectIndex].NextIndex;
        	}else{
        		CommunicateIndex =  (CommunicateIndex+1) % CommunicateCache.Num();
        	}
	}else{
		if (SelectCommunicateIndex+1 >=  SelectCommunicateCache.Num())
		{
			CommunicateIndex = CommunicateCache[CommunicateIndex].Select[SelectIndex].NextIndex;
			bUseSelectCache = false;
		}
		SelectCommunicateIndex =  SelectCommunicateIndex+1;
	}
	
}

FCommunicateTableRow UCommunicateComponent::GetCommunicateByIndex(int32 index)
{
	if (index >= CommunicateCache.Num()) return FCommunicateTableRow();
	FCommunicateTableRow ret = CommunicateCache[index];
	return ret;
}

void UCommunicateComponent::UpdateCommunicateCache()
{
	CommunicateCache.Reset();
	if (DataTable)
	{
		TArray<FName> _TableRowsNames;
		_TableRowsNames = DataTable->GetRowNames();
		for (FName &RowName : _TableRowsNames)
		{
			FCommunicateTableRow* _data =DataTable->FindRow<FCommunicateTableRow>(RowName,TEXT("MainCommunicate"),true);
			CommunicateCache.Add(*_data);
		}
		//CommunicateLenght = CommunicateCache.Num();
	}
}

void UCommunicateComponent::UseSelect(int32 index)
{
	SelectCommunicateCache.Reset();
	SelectCommunicateIndex = 0;
	if (CommunicateCache[CommunicateIndex].HaveSelect)
	{
		bUseSelectCache = true;
		UDataTable* _SelectData = CommunicateCache[CommunicateIndex].Select[index].SelectData;
		if (_SelectData)
		{
			TArray<FName> _TableRowsNames;
			_TableRowsNames = _SelectData->GetRowNames();
			for (FName &RowName : _TableRowsNames)
			{
				FCommunicateTableRow* _data =_SelectData->FindRow<FCommunicateTableRow>(RowName,TEXT("SelectCommunicate"),true);
				SelectCommunicateCache.Add(*_data);
			}
			//CommunicateLenght = CommunicateCache.Num();
		}
	}else
	{
		bUseSelectCache = false;
	}
}

