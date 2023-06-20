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

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITSdmProfileMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// Enabled 
- (BOOL)isEnabledValid;
- (FITBool)getEnabled;
- (void)setEnabled:(FITBool)enabled;
// SdmAntId 
- (BOOL)isSdmAntIdValid;
- (FITUInt16z)getSdmAntId;
- (void)setSdmAntId:(FITUInt16z)sdmAntId;
// SdmCalFactor 
- (BOOL)isSdmCalFactorValid;
- (FITFloat32)getSdmCalFactor;
- (void)setSdmCalFactor:(FITFloat32)sdmCalFactor;
// Odometer 
- (BOOL)isOdometerValid;
- (FITFloat32)getOdometer;
- (void)setOdometer:(FITFloat32)odometer;
// SpeedSource 
- (BOOL)isSpeedSourceValid;
- (FITBool)getSpeedSource;
- (void)setSpeedSource:(FITBool)speedSource;
// SdmAntIdTransType 
- (BOOL)isSdmAntIdTransTypeValid;
- (FITUInt8z)getSdmAntIdTransType;
- (void)setSdmAntIdTransType:(FITUInt8z)sdmAntIdTransType;
// OdometerRollover 
- (BOOL)isOdometerRolloverValid;
- (FITUInt8)getOdometerRollover;
- (void)setOdometerRollover:(FITUInt8)odometerRollover;

@end

NS_ASSUME_NONNULL_END
