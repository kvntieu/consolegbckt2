// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Lab1Character.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLab1Character() {}
// Cross Module References
	LAB1_API UClass* Z_Construct_UClass_ALab1Character_NoRegister();
	LAB1_API UClass* Z_Construct_UClass_ALab1Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Lab1();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ALab1Character::StaticRegisterNativesALab1Character()
	{
	}
	UClass* Z_Construct_UClass_ALab1Character_NoRegister()
	{
		return ALab1Character::StaticClass();
	}
	UClass* Z_Construct_UClass_ALab1Character()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Lab1();
			OuterClass = ALab1Character::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;


				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ALab1Character), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_SideViewCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SideViewCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SideViewCameraComponent, ALab1Character), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ALab1Character> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Lab1Character.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Lab1Character.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("Lab1Character.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera beside the character"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ModuleRelativePath"), TEXT("Lab1Character.h"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ToolTip"), TEXT("Side view camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALab1Character, 3342616733);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALab1Character(Z_Construct_UClass_ALab1Character, &ALab1Character::StaticClass, TEXT("/Script/Lab1"), TEXT("ALab1Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALab1Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
