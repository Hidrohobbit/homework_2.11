#pragma once
#ifndef FIGURE_EXPORTS
	#define FIGURE_LIB_API __declspec(dllexport)
#else
	#define FIGURE_LIB_API __declspec(dllimport)
#endif // !FIGURE_EXPORTS