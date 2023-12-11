#pragma once
#include "Engine/Core/Core.h"

#include <Windows.h>
#include <iostream>
#include <string>
#include <memory>

namespace Learn {

	class LEARN_API Message
	{
	public:
		Message();
		~Message();

		void InfoMessage(const char* txt);
		void ErrorMessage(const char* txt);
		void WarningMessage(const char* txt);
		void TraceMessage(const char* txt);
	private:
		void LogMessage(const char* txt, WORD color);
	};

	class LEARN_API Log
	{
	public:
		Log();
		~Log();

		inline static std::shared_ptr<Message> GetCoreLog();
	private:
		static std::shared_ptr<Learn::Message> CoreLog;
	};
}

// Define macros for logging
#define INFO_LOG(...)	::Learn::Log::GetCoreLog()->InfoMessage(__VA_ARGS__)
#define ERROR_LOG(...)	::Learn::Log::GetCoreLog()->ErrorMessage(__VA_ARGS__)
#define WARN_LOG(...)	::Learn::Log::GetCoreLog()->WarningMessage(__VA_ARGS__)
#define TRACE_LOG(...)	::Learn::Log::GetCoreLog()->TraceMessage(__VA_ARGS__)
