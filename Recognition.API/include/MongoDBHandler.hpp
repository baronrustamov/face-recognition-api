#pragma once

#include <cstdint>
#include <string>

namespace Recognition
{
    /// <summary>
    /// The REST API is on hold.
    /// </summary>
    namespace API
    {
        class MongoDBHandler
        {
            bool addFaceToCollection(const std::string& faceName)
            {
                return true;
            }
            
            bool removeFaceFromCollection(const std::string& faceName)
            {
                return true;
            }
        };
    }
}