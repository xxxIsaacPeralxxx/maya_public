// TM and (c) ___YEAR___ ___ORGANIZATIONNAME___. All Rights Reserved.
// Reproduction in whole or in part without prior written permission of a
// duly authorized representative is prohibited.
#include <maya/MFnPlugin.h>

MStatus
initializePlugin(MObject plugin)
{
	MStatus status;
    MFnPlugin pluginFn(plugin, "___ORGANIZATIONNAME___",
                       "1.0.0", "Any") ;
    
    // Register elements here
    
	return status;
}

MStatus
uninitializePlugin(MObject plugin)
{
	MStatus status;
    MFnPlugin pluginFn(plugin);
    
    // Deregister elements here
    
	return status;
}
// TM and (c) ___YEAR___ ___ORGANIZATIONNAME___. All Rights Reserved.
// Reproduction in whole or in part without prior written permission of a
// duly authorized representative is prohibited.
