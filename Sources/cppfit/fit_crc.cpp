/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.115Release
// Tag = production/release/21.115.00-0-gfe0a7f8
/////////////////////////////////////////////////////////////////////////////////////////////


#include "fit_crc.hpp"

namespace fit
{

FIT_UINT16 CRC::Get16(FIT_UINT16 crc, FIT_UINT8 byte)
{
   static const FIT_UINT16 crc_table[16] =
   {
      0x0000, 0xCC01, 0xD801, 0x1400, 0xF001, 0x3C00, 0x2800, 0xE401,
      0xA001, 0x6C00, 0x7800, 0xB401, 0x5000, 0x9C01, 0x8801, 0x4400
   };
   FIT_UINT16 tmp;

   // compute checksum of lower four bits of byte
   tmp = crc_table[crc & 0xF];
   crc  = (crc >> 4) & 0x0FFF;
   crc  = crc ^ tmp ^ crc_table[byte & 0xF];

   // now compute checksum of upper four bits of byte
   tmp = crc_table[crc & 0xF];
   crc  = (crc >> 4) & 0x0FFF;
   crc  = crc ^ tmp ^ crc_table[(byte >> 4) & 0xF];

   return crc;
}

FIT_UINT16 CRC::Calc16(const volatile void *data, FIT_UINT32 size)
{
   FIT_UINT16 crc = 0;
   FIT_BYTE *data_ptr = (FIT_BYTE *)data;

   while (size)
   {
      crc = CRC::Get16(crc, *data_ptr);
      data_ptr++;
      size--;
   }

   return crc;
}

} // namespace fit

#if defined(FIT_CPP_INCLUDE_C)
    // Include C Implementation
    #include "fit_crc.c"
#endif
