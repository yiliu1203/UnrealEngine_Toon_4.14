// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

/**
* Class containing commands for curve viewer actions
*/
class FCurveViewerCommands : public TCommands<FCurveViewerCommands>
{
public:
	FCurveViewerCommands()
	: TCommands<FCurveViewerCommands>
		(
			TEXT("CurveViewer"), // Context name for fast lookup
			NSLOCTEXT("Contexts", "CurveViewer", "Curve Viewer"), // Localized context name for displaying
			NAME_None, // Parent context name.  
			FEditorStyle::GetStyleSetName() // Icon Style Set
		)
	{}

	/** Initialize commands */
	virtual void RegisterCommands() override;

	/** Add curve */
	TSharedPtr< FUICommandInfo > AddCurve;
};


