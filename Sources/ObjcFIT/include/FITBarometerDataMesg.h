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


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITBarometerDataMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// TimestampMs 
- (BOOL)isTimestampMsValid;
- (FITUInt16)getTimestampMs;
- (void)setTimestampMs:(FITUInt16)timestampMs;
// SampleTimeOffset 
@property(readonly,nonatomic) uint8_t numSampleTimeOffsetValues;
- (BOOL)isSampleTimeOffsetValidforIndex : (uint8_t)index;
- (FITUInt16)getSampleTimeOffsetforIndex : (uint8_t)index;
- (void)setSampleTimeOffset:(FITUInt16)sampleTimeOffset forIndex:(uint8_t)index;
// BaroPres 
@property(readonly,nonatomic) uint8_t numBaroPresValues;
- (BOOL)isBaroPresValidforIndex : (uint8_t)index;
- (FITUInt32)getBaroPresforIndex : (uint8_t)index;
- (void)setBaroPres:(FITUInt32)baroPres forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END
