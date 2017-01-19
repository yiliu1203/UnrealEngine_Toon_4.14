// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "MovieSceneToolsPrivatePCH.h"
#include "ByteKeyArea.h"
#include "SIntegralCurveKeyEditor.h"


/* IKeyArea interface
 *****************************************************************************/

bool FByteKeyArea::CanCreateKeyEditor()
{
	return true;
}


TSharedRef<SWidget> FByteKeyArea::CreateKeyEditor(ISequencer* Sequencer)
{
	return SNew(SIntegralCurveKeyEditor<uint8>)
		.Sequencer(Sequencer)
		.OwningSection(OwningSection)
		.Curve(&Curve)
		.ExternalValue(ExternalValue);
};

uint8 FByteKeyArea::ConvertCurveValueToIntegralType(int32 CurveValue) const
{
	return (uint8)FMath::Clamp<int32>(CurveValue, 0, TNumericLimits<uint8>::Max());
}