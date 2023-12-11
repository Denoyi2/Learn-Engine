#include "Log.h"

namespace Learn {

	std::shared_ptr<Message> Log::CoreLog = std::make_shared<Message>();

	// Log
	Log::Log()
	{
	}

	Log::~Log()
	{
	}

	std::shared_ptr<Message> Log::GetCoreLog()
	{
		return CoreLog;
	}

	// Message
	Message::Message()
	{
	}

	Message::~Message()
	{
	}

    void Message::LogMessage(const char* txt, WORD color) 
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, color);
        std::cout << txt;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }

    void Message::InfoMessage(const char* txt) 
    {
        this->LogMessage("INFO::  ", FOREGROUND_GREEN);
        this->LogMessage(txt, FOREGROUND_GREEN);
    }

    void Message::ErrorMessage(const char* txt) 
    {
        this->LogMessage("ERROR:: ", FOREGROUND_RED);
        this->LogMessage(txt, FOREGROUND_RED);
    }

    void Message::WarningMessage(const char* txt) 
    {
        this->LogMessage("WARN::  ", FOREGROUND_RED | FOREGROUND_GREEN);
        this->LogMessage(txt, FOREGROUND_RED | FOREGROUND_GREEN);
    }

    void Message::TraceMessage(const char* txt) 
    {
        this->LogMessage("TRACE:: ", FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        this->LogMessage(txt, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
}