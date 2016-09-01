// Copyright (C) 2015 Cameron Angus. All Rights Reserved.

#pragma once

#include "IDetailCustomization.h"


class FKantanCartesianPlotCustomization: public IDetailCustomization
{
public:
	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	//

	static TSharedRef< IDetailCustomization > MakeInstance();

protected:
	void OnValidatePlotScale();

private:
	// Keep a pointer for refreshing layout
	IDetailLayoutBuilder* DetailBuilderPtr;

	TSharedPtr< class IPropertyHandle > PlotScaleProp;
};

