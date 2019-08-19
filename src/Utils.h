#pragma once
#include <string>

namespace utils
{
	void Initialize();

	std::string GetNicePath(const char* path);
	std::string GetNicePath(const std::string& path);
	std::string GetFilename(const std::string& path);

	bool IsHeader(const std::string& path);

	void Lowercase(std::string& path);
	void ForwardSlashify(std::string& path);

	bool BeginsWith(const std::string& str, const std::string& prefix);
}
