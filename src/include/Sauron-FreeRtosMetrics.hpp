//!
//! @file 		Sauron-FreeRtosMetrics.hpp
//! @author 	Geoffrey Hunter <gbmhunter@gmail.com> 
//! @date 		2013/03/19
//! @brief 		Calls FreeRTOS API that returns performance metrics about the operating system.
//! @details
//!				See README.rst in root dir for more info.

#ifndef __cplusplus
	#error Please build with C++ compiler
#endif

// Inclusion of FreeRtosMetrics
#if(Sauron_Config_ENABLE_FREERTOS_METRICS == 1)

//===============================================================================================//
//======================================== HEADER GUARD =========================================//
//===============================================================================================//

#ifndef SAURON_FREERTOS_METRICS_H
#define SAURON_FREERTOS_METRICS_H

//===============================================================================================//
//========================================== INCLUDES ===========================================//
//===============================================================================================//

#include <stdint.h>

#include "Sauron-Config.h"

//===============================================================================================//
//======================================== NAMESPACE ============================================//
//===============================================================================================//

namespace Sauron
{
	//===============================================================================================//
	//============================================= CLASS ===========================================//
	//===============================================================================================//
	class FreeRtosMetrics
	{	
		
		public:
		
			
			
			//===============================================================================================//
			//==================================== CONSTRUCTORS/DESTRUCTOR ==================================//
			//===============================================================================================//
			
		
			
			//===============================================================================================//
			//=================================== PUBLIC METHOD DECLARATIONS ================================//
			//===============================================================================================//
			
			//! @brief		Prints FreeRTOS performance metrics.
			static void Run();
			
			//===============================================================================================//
			//======================================= PUBLIC VARIABLES ======================================//
			//===============================================================================================//
			
		private:
		
			static char taskMetricsStringBuff[200];

			static char freeHeapSpaceString[100];
			// none
	};

	//===============================================================================================//
	//================================= PUBLIC TEMPLATE METHOD DEFINITIONS ==========================//
	//===============================================================================================//
	
	// none
	
} // namespace Sauron

#endif // #ifndef SAURON_FREERTOS_METRICS_H

#endif // #if(Sauron_Config_ENABLE_FREERTOS_METRICS == 1)

// EOF