#include <iostream>
#ifndef DYNAMICLIBHEADER_H
#define DYNAMICLIBHEADER_H


#ifdef DYNAMICLIB1_EXPORTS
#define DYNAMICLIB_API __declspec(dllexport)
#else 
#define DYNAMICLIB_API __declspec(dllimport)
#endif

namespace LEAVINGS
{
	class DYNAMICLIB_API Leaver
	{
	public:
		std::string leave(std::string name);
	};
}

#endif  

