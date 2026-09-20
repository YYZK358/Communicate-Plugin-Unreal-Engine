// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommunicateComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCommunicateComponent() {}

// ********** Begin Cross Module References ********************************************************
COMMUNICATEPLUGINS_API UClass* Z_Construct_UClass_UCommunicateComponent();
COMMUNICATEPLUGINS_API UClass* Z_Construct_UClass_UCommunicateComponent_NoRegister();
COMMUNICATEPLUGINS_API UScriptStruct* Z_Construct_UScriptStruct_FCommunicateTableRow();
COMMUNICATEPLUGINS_API UScriptStruct* Z_Construct_UScriptStruct_FSelectCommunicateTableRow();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CommunicatePlugins();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSelectCommunicateTableRow ****************************************
struct Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSelectCommunicateTableRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSelectCommunicateTableRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe9\x80\x89\xe6\x8b\xa9\xe8\xaf\xb4\xe6\x98\x8e\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe8\xaf\xb4\xe6\x98\x8e" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectData_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe9\x80\x89\xe6\x8b\xa9\xe5\x89\xa7\xe6\x83\x85\xe5\x88\x86\xe6\x94\xaf\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe5\x89\xa7\xe6\x83\x85\xe5\x88\x86\xe6\x94\xaf" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextIndex_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe5\x9b\x9e\xe5\xbd\x92\xe4\xb8\xbb\xe7\xba\xbf\xe7\xb4\xa2\xe5\xbc\x95\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe5\x9b\x9e\xe5\xbd\x92\xe4\xb8\xbb\xe7\xba\xbf\xe7\xb4\xa2\xe5\xbc\x95" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSelectCommunicateTableRow constinit property declarations ********
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSelectCommunicateTableRow constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectCommunicateTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics
static_assert(std::is_polymorphic<FSelectCommunicateTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSelectCommunicateTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSelectCommunicateTableRow;
class UScriptStruct* FSelectCommunicateTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSelectCommunicateTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSelectCommunicateTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectCommunicateTableRow, (UObject*)Z_Construct_UPackage__Script_CommunicatePlugins(), TEXT("SelectCommunicateTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_FSelectCommunicateTableRow.OuterSingleton;
	}

// ********** Begin ScriptStruct FSelectCommunicateTableRow Property Definitions *******************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSelectCommunicateTableRow, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::NewProp_SelectData = { "SelectData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSelectCommunicateTableRow, SelectData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectData_MetaData), NewProp_SelectData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::NewProp_NextIndex = { "NextIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSelectCommunicateTableRow, NextIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextIndex_MetaData), NewProp_NextIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::NewProp_SelectData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::NewProp_NextIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSelectCommunicateTableRow Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CommunicatePlugins,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SelectCommunicateTableRow",
	Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::PropPointers),
	sizeof(FSelectCommunicateTableRow),
	alignof(FSelectCommunicateTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSelectCommunicateTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_FSelectCommunicateTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSelectCommunicateTableRow.InnerSingleton, Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSelectCommunicateTableRow.InnerSingleton);
}
// ********** End ScriptStruct FSelectCommunicateTableRow ******************************************

// ********** Begin ScriptStruct FCommunicateTableRow **********************************************
struct Z_Construct_UScriptStruct_FCommunicateTableRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCommunicateTableRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCommunicateTableRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe5\x8f\x91\xe8\xa8\x80\xe4\xba\xba\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe5\x8f\x91\xe8\xa8\x80\xe4\xba\xba" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentText_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HaveSelect_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x8c\x85\xe5\x90\xab\xe9\x80\x89\xe6\x8b\xa9\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8c\x85\xe5\x90\xab\xe9\x80\x89\xe6\x8b\xa9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Select_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe9\x80\x89\xe6\x8b\xa9\xe5\x88\x97\xe8\xa1\xa8\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe5\x88\x97\xe8\xa1\xa8" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEnd_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe7\xbb\x93\xe5\xb0\xbe\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe7\xbb\x93\xe5\xb0\xbe" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCommunicateTableRow constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ContentText;
	static void NewProp_HaveSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveSelect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Select_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Select;
	static void NewProp_IsEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCommunicateTableRow constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommunicateTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCommunicateTableRow_Statics
static_assert(std::is_polymorphic<FCommunicateTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCommunicateTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCommunicateTableRow;
class UScriptStruct* FCommunicateTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCommunicateTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCommunicateTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommunicateTableRow, (UObject*)Z_Construct_UPackage__Script_CommunicatePlugins(), TEXT("CommunicateTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_FCommunicateTableRow.OuterSingleton;
	}

// ********** Begin ScriptStruct FCommunicateTableRow Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCommunicateTableRow, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_ContentText = { "ContentText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCommunicateTableRow, ContentText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentText_MetaData), NewProp_ContentText_MetaData) };
void Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_HaveSelect_SetBit(void* Obj)
{
	((FCommunicateTableRow*)Obj)->HaveSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_HaveSelect = { "HaveSelect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCommunicateTableRow), &Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_HaveSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HaveSelect_MetaData), NewProp_HaveSelect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_Select_Inner = { "Select", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSelectCommunicateTableRow, METADATA_PARAMS(0, nullptr) }; // 3734037076
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_Select = { "Select", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCommunicateTableRow, Select), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Select_MetaData), NewProp_Select_MetaData) }; // 3734037076
void Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_IsEnd_SetBit(void* Obj)
{
	((FCommunicateTableRow*)Obj)->IsEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_IsEnd = { "IsEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCommunicateTableRow), &Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_IsEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEnd_MetaData), NewProp_IsEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_ContentText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_HaveSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_Select_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_Select,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewProp_IsEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCommunicateTableRow Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CommunicatePlugins,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CommunicateTableRow",
	Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::PropPointers),
	sizeof(FCommunicateTableRow),
	alignof(FCommunicateTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCommunicateTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_FCommunicateTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCommunicateTableRow.InnerSingleton, Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCommunicateTableRow.InnerSingleton);
}
// ********** End ScriptStruct FCommunicateTableRow ************************************************

// ********** Begin Class UCommunicateComponent Function GetCommunicate ****************************
struct Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics
{
	struct CommunicateComponent_eventGetCommunicate_Parms
	{
		FCommunicateTableRow ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCommunicate constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCommunicate constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCommunicate Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommunicateComponent_eventGetCommunicate_Parms, ReturnValue), Z_Construct_UScriptStruct_FCommunicateTableRow, METADATA_PARAMS(0, nullptr) }; // 3510658035
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::PropPointers) < 2048);
// ********** End Function GetCommunicate Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCommunicateComponent, nullptr, "GetCommunicate", 	Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::CommunicateComponent_eventGetCommunicate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::CommunicateComponent_eventGetCommunicate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommunicateComponent_GetCommunicate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommunicateComponent_GetCommunicate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommunicateComponent::execGetCommunicate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCommunicateTableRow*)Z_Param__Result=P_THIS->GetCommunicate();
	P_NATIVE_END;
}
// ********** End Class UCommunicateComponent Function GetCommunicate ******************************

// ********** Begin Class UCommunicateComponent Function GetCommunicateByIndex *********************
struct Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics
{
	struct CommunicateComponent_eventGetCommunicateByIndex_Parms
	{
		int32 index;
		FCommunicateTableRow ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe5\x88\x87\xe6\x8d\xa2\xe5\x88\xb0\xe7\xb4\xa2\xe5\xbc\x95\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe5\x88\x87\xe6\x8d\xa2\xe5\x88\xb0\xe7\xb4\xa2\xe5\xbc\x95\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCommunicateByIndex constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCommunicateByIndex constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCommunicateByIndex Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommunicateComponent_eventGetCommunicateByIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommunicateComponent_eventGetCommunicateByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FCommunicateTableRow, METADATA_PARAMS(0, nullptr) }; // 3510658035
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::PropPointers) < 2048);
// ********** End Function GetCommunicateByIndex Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCommunicateComponent, nullptr, "GetCommunicateByIndex", 	Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::CommunicateComponent_eventGetCommunicateByIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::CommunicateComponent_eventGetCommunicateByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommunicateComponent::execGetCommunicateByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCommunicateTableRow*)Z_Param__Result=P_THIS->GetCommunicateByIndex(Z_Param_index);
	P_NATIVE_END;
}
// ********** End Class UCommunicateComponent Function GetCommunicateByIndex ***********************

// ********** Begin Class UCommunicateComponent Function NextCommunicate ***************************
struct Z_Construct_UFunction_UCommunicateComponent_NextCommunicate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe5\x88\x87\xe6\x8d\xa2\xe5\x88\xb0\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe5\xaf\xb9\xe8\xaf\x9d\xe7\xb4\xa2\xe5\xbc\x95\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe5\x88\x87\xe6\x8d\xa2\xe5\x88\xb0\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe5\xaf\xb9\xe8\xaf\x9d\xe7\xb4\xa2\xe5\xbc\x95" },
	};
#endif // WITH_METADATA

// ********** Begin Function NextCommunicate constinit property declarations ***********************
// ********** End Function NextCommunicate constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommunicateComponent_NextCommunicate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCommunicateComponent, nullptr, "NextCommunicate", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_NextCommunicate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommunicateComponent_NextCommunicate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCommunicateComponent_NextCommunicate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommunicateComponent_NextCommunicate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommunicateComponent::execNextCommunicate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextCommunicate();
	P_NATIVE_END;
}
// ********** End Class UCommunicateComponent Function NextCommunicate *****************************

// ********** Begin Class UCommunicateComponent Function UpdateCommunicateCache ********************
struct Z_Construct_UFunction_UCommunicateComponent_UpdateCommunicateCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe6\x9b\xb4\xe6\x96\xb0\xe6\x95\xb0\xe6\x8d\xae\xe7\xbc\x93\xe5\xad\x98\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\x95\xb0\xe6\x8d\xae\xe7\xbc\x93\xe5\xad\x98" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateCommunicateCache constinit property declarations ****************
// ********** End Function UpdateCommunicateCache constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommunicateComponent_UpdateCommunicateCache_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCommunicateComponent, nullptr, "UpdateCommunicateCache", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_UpdateCommunicateCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommunicateComponent_UpdateCommunicateCache_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCommunicateComponent_UpdateCommunicateCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommunicateComponent_UpdateCommunicateCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommunicateComponent::execUpdateCommunicateCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCommunicateCache();
	P_NATIVE_END;
}
// ********** End Class UCommunicateComponent Function UpdateCommunicateCache **********************

// ********** Begin Class UCommunicateComponent Function UseSelect *********************************
struct Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics
{
	struct CommunicateComponent_eventUseSelect_Parms
	{
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CommunicatePlugins" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UseSelect constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UseSelect constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UseSelect Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommunicateComponent_eventUseSelect_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::PropPointers) < 2048);
// ********** End Function UseSelect Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCommunicateComponent, nullptr, "UseSelect", 	Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::CommunicateComponent_eventUseSelect_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::CommunicateComponent_eventUseSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommunicateComponent_UseSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommunicateComponent_UseSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommunicateComponent::execUseSelect)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseSelect(Z_Param_index);
	P_NATIVE_END;
}
// ********** End Class UCommunicateComponent Function UseSelect ***********************************

// ********** Begin Class UCommunicateComponent ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCommunicateComponent;
UClass* UCommunicateComponent::GetPrivateStaticClass()
{
	using TClass = UCommunicateComponent;
	if (!Z_Registration_Info_UClass_UCommunicateComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CommunicateComponent"),
			Z_Registration_Info_UClass_UCommunicateComponent.InnerSingleton,
			StaticRegisterNativesUCommunicateComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCommunicateComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UCommunicateComponent_NoRegister()
{
	return UCommunicateComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCommunicateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CommunicateComponent.h" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe6\x95\xb0\xe6\x8d\xae\xe8\xa1\xa8" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicateCache_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe5\x89\xa7\xe6\x83\x85\xe7\xbc\x93\xe5\xad\x98\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe5\x89\xa7\xe6\x83\x85\xe7\xbc\x93\xe5\xad\x98" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectCommunicateCache_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe6\x94\xaf\xe7\xba\xbf\xe5\x89\xa7\xe6\x83\x85\xe7\xbc\x93\xe5\xad\x98\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe6\x94\xaf\xe7\xba\xbf\xe5\x89\xa7\xe6\x83\x85\xe7\xbc\x93\xe5\xad\x98" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectIndex_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe9\x80\x89\xe6\x8b\xa9\xe5\x88\x86\xe6\x94\xaf\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe5\x88\x86\xe6\x94\xaf" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommunicateIndex_MetaData[] = {
		{ "Category", "CommunicatePlugins" },
		{ "Comment", "//\xe4\xb8\xbb\xe5\x89\xa7\xe6\x83\x85\xe7\xb4\xa2\xe5\xbc\x95\n" },
		{ "ModuleRelativePath", "Public/CommunicateComponent.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe5\x89\xa7\xe6\x83\x85\xe7\xb4\xa2\xe5\xbc\x95" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCommunicateComponent constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicateCache_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommunicateCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectCommunicateCache_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectCommunicateCache;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CommunicateIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCommunicateComponent constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCommunicate"), .Pointer = &UCommunicateComponent::execGetCommunicate },
		{ .NameUTF8 = UTF8TEXT("GetCommunicateByIndex"), .Pointer = &UCommunicateComponent::execGetCommunicateByIndex },
		{ .NameUTF8 = UTF8TEXT("NextCommunicate"), .Pointer = &UCommunicateComponent::execNextCommunicate },
		{ .NameUTF8 = UTF8TEXT("UpdateCommunicateCache"), .Pointer = &UCommunicateComponent::execUpdateCommunicateCache },
		{ .NameUTF8 = UTF8TEXT("UseSelect"), .Pointer = &UCommunicateComponent::execUseSelect },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommunicateComponent_GetCommunicate, "GetCommunicate" }, // 2339862415
		{ &Z_Construct_UFunction_UCommunicateComponent_GetCommunicateByIndex, "GetCommunicateByIndex" }, // 3885689497
		{ &Z_Construct_UFunction_UCommunicateComponent_NextCommunicate, "NextCommunicate" }, // 933000265
		{ &Z_Construct_UFunction_UCommunicateComponent_UpdateCommunicateCache, "UpdateCommunicateCache" }, // 126597001
		{ &Z_Construct_UFunction_UCommunicateComponent_UseSelect, "UseSelect" }, // 3994553582
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommunicateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCommunicateComponent_Statics

// ********** Begin Class UCommunicateComponent Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommunicateComponent, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_CommunicateCache_Inner = { "CommunicateCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCommunicateTableRow, METADATA_PARAMS(0, nullptr) }; // 3510658035
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_CommunicateCache = { "CommunicateCache", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommunicateComponent, CommunicateCache), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicateCache_MetaData), NewProp_CommunicateCache_MetaData) }; // 3510658035
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_SelectCommunicateCache_Inner = { "SelectCommunicateCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCommunicateTableRow, METADATA_PARAMS(0, nullptr) }; // 3510658035
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_SelectCommunicateCache = { "SelectCommunicateCache", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommunicateComponent, SelectCommunicateCache), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectCommunicateCache_MetaData), NewProp_SelectCommunicateCache_MetaData) }; // 3510658035
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_SelectIndex = { "SelectIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommunicateComponent, SelectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectIndex_MetaData), NewProp_SelectIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_CommunicateIndex = { "CommunicateIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCommunicateComponent, CommunicateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommunicateIndex_MetaData), NewProp_CommunicateIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommunicateComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_CommunicateCache_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_CommunicateCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_SelectCommunicateCache_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_SelectCommunicateCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_SelectIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommunicateComponent_Statics::NewProp_CommunicateIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommunicateComponent_Statics::PropPointers) < 2048);
// ********** End Class UCommunicateComponent Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UCommunicateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CommunicatePlugins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommunicateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommunicateComponent_Statics::ClassParams = {
	&UCommunicateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCommunicateComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCommunicateComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommunicateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommunicateComponent_Statics::Class_MetaDataParams)
};
void UCommunicateComponent::StaticRegisterNativesUCommunicateComponent()
{
	UClass* Class = UCommunicateComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCommunicateComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCommunicateComponent()
{
	if (!Z_Registration_Info_UClass_UCommunicateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommunicateComponent.OuterSingleton, Z_Construct_UClass_UCommunicateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommunicateComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCommunicateComponent);
UCommunicateComponent::~UCommunicateComponent() {}
// ********** End Class UCommunicateComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h__Script_CommunicatePlugins_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSelectCommunicateTableRow::StaticStruct, Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics::NewStructOps, TEXT("SelectCommunicateTableRow"),&Z_Registration_Info_UScriptStruct_FSelectCommunicateTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSelectCommunicateTableRow), 3734037076U) },
		{ FCommunicateTableRow::StaticStruct, Z_Construct_UScriptStruct_FCommunicateTableRow_Statics::NewStructOps, TEXT("CommunicateTableRow"),&Z_Registration_Info_UScriptStruct_FCommunicateTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommunicateTableRow), 3510658035U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommunicateComponent, UCommunicateComponent::StaticClass, TEXT("UCommunicateComponent"), &Z_Registration_Info_UClass_UCommunicateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommunicateComponent), 534737246U) },
	};
}; // Z_CompiledInDeferFile_FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h__Script_CommunicatePlugins_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h__Script_CommunicatePlugins_1317367205{
	TEXT("/Script/CommunicatePlugins"),
	Z_CompiledInDeferFile_FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h__Script_CommunicatePlugins_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h__Script_CommunicatePlugins_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h__Script_CommunicatePlugins_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h__Script_CommunicatePlugins_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
