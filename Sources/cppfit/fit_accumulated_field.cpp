/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.126.0Release
// Tag = production/release/21.126.0-0-g0576dfe
/////////////////////////////////////////////////////////////////////////////////////////////


#include "fit_accumulated_field.hpp"

namespace fit
{

AccumulatedField::AccumulatedField()
    : lastValue(0), accumulatedValue(0)
{
}

AccumulatedField::AccumulatedField(const FIT_UINT16 newMesgNum, const FIT_UINT8 destFieldNum)
    : mesgNum(newMesgNum), destFieldNum(destFieldNum), lastValue(0), accumulatedValue(0)
{
}

FIT_UINT32 AccumulatedField::Accumulate(const FIT_UINT32 value, const FIT_UINT8 bits)
{
    FIT_UINT32 mask = ((FIT_UINT32) 1 << bits) - 1;

    accumulatedValue += (value - lastValue) & mask;
    lastValue = value;

    return accumulatedValue;
}

FIT_UINT32 AccumulatedField::Set(FIT_UINT32 value)
{
    accumulatedValue = value;
    this->lastValue = value;
    return accumulatedValue;
}

} // namespace fit
