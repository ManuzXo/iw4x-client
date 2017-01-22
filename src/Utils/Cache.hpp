#pragma once

namespace Utils
{
	class Cache
	{
	public:
		static std::string GetStaticUrl(std::string path);
		static std::string GetFile(std::string path, int timeout = 5000, std::string useragent = "IW4x");
		static void Uninitialize();

	private:
		static std::mutex CacheMutex;
		static const char* Urls[];
		static std::string ValidUrl;
		static std::string GetUrl(std::string url, std::string path);
	};
}
