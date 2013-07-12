#ifndef __github_com_myun2__pargen__texture_HPP__
#define __github_com_myun2__pargen__texture_HPP__

#include <string>

namespace myun2
{
	namespace pargen
	{
		class texture
		{
		public:
			texture() { }
			texture(const char* filename) { load(filename); }
			texture(const ::std::string& filename) { load(filename); }

			void load(const char* filename) { }
			void load(const ::std::string& filename) { load(filename.c_str(); }
		};
	}
}

#endif//__github_com_myun2__pargen__texture_HPP__
