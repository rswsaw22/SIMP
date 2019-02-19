//
// Created by Peter Fetros on 2/19/2019.
//

#ifndef SIMP_SIMP_TYPES_H
#define SIMP_SIMP_TYPES_H

#include <unordered_map>


enum FILETYPE {
    PPMv4,
    PPMv6,
    UNKNOWN
};

const std::unordered_map<const char[], FILETYPE> supportedFileTypes = {{"ppmv4", PPMv4},
                                                                       {"ppmv6", PPMv6}};

#endif //SIMP_SIMP_TYPES_H
