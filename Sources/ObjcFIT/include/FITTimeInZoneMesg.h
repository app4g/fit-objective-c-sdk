/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.133.0Release
// Tag = production/release/21.133.0-0-g6002091
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITTimeInZoneMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// ReferenceMesg 
- (BOOL)isReferenceMesgValid;
- (FITMesgNum)getReferenceMesg;
- (void)setReferenceMesg:(FITMesgNum)referenceMesg;
// ReferenceIndex 
- (BOOL)isReferenceIndexValid;
- (FITMessageIndex)getReferenceIndex;
- (void)setReferenceIndex:(FITMessageIndex)referenceIndex;
// TimeInHrZone 
@property(readonly,nonatomic) uint8_t numTimeInHrZoneValues;
- (BOOL)isTimeInHrZoneValidforIndex : (uint8_t)index;
- (FITFloat32)getTimeInHrZoneforIndex : (uint8_t)index;
- (void)setTimeInHrZone:(FITFloat32)timeInHrZone forIndex:(uint8_t)index;
// TimeInSpeedZone 
@property(readonly,nonatomic) uint8_t numTimeInSpeedZoneValues;
- (BOOL)isTimeInSpeedZoneValidforIndex : (uint8_t)index;
- (FITFloat32)getTimeInSpeedZoneforIndex : (uint8_t)index;
- (void)setTimeInSpeedZone:(FITFloat32)timeInSpeedZone forIndex:(uint8_t)index;
// TimeInCadenceZone 
@property(readonly,nonatomic) uint8_t numTimeInCadenceZoneValues;
- (BOOL)isTimeInCadenceZoneValidforIndex : (uint8_t)index;
- (FITFloat32)getTimeInCadenceZoneforIndex : (uint8_t)index;
- (void)setTimeInCadenceZone:(FITFloat32)timeInCadenceZone forIndex:(uint8_t)index;
// TimeInPowerZone 
@property(readonly,nonatomic) uint8_t numTimeInPowerZoneValues;
- (BOOL)isTimeInPowerZoneValidforIndex : (uint8_t)index;
- (FITFloat32)getTimeInPowerZoneforIndex : (uint8_t)index;
- (void)setTimeInPowerZone:(FITFloat32)timeInPowerZone forIndex:(uint8_t)index;
// HrZoneHighBoundary 
@property(readonly,nonatomic) uint8_t numHrZoneHighBoundaryValues;
- (BOOL)isHrZoneHighBoundaryValidforIndex : (uint8_t)index;
- (FITUInt8)getHrZoneHighBoundaryforIndex : (uint8_t)index;
- (void)setHrZoneHighBoundary:(FITUInt8)hrZoneHighBoundary forIndex:(uint8_t)index;
// SpeedZoneHighBoundary 
@property(readonly,nonatomic) uint8_t numSpeedZoneHighBoundaryValues;
- (BOOL)isSpeedZoneHighBoundaryValidforIndex : (uint8_t)index;
- (FITFloat32)getSpeedZoneHighBoundaryforIndex : (uint8_t)index;
- (void)setSpeedZoneHighBoundary:(FITFloat32)speedZoneHighBoundary forIndex:(uint8_t)index;
// CadenceZoneHighBondary 
@property(readonly,nonatomic) uint8_t numCadenceZoneHighBondaryValues;
- (BOOL)isCadenceZoneHighBondaryValidforIndex : (uint8_t)index;
- (FITUInt8)getCadenceZoneHighBondaryforIndex : (uint8_t)index;
- (void)setCadenceZoneHighBondary:(FITUInt8)cadenceZoneHighBondary forIndex:(uint8_t)index;
// PowerZoneHighBoundary 
@property(readonly,nonatomic) uint8_t numPowerZoneHighBoundaryValues;
- (BOOL)isPowerZoneHighBoundaryValidforIndex : (uint8_t)index;
- (FITUInt16)getPowerZoneHighBoundaryforIndex : (uint8_t)index;
- (void)setPowerZoneHighBoundary:(FITUInt16)powerZoneHighBoundary forIndex:(uint8_t)index;
// HrCalcType 
- (BOOL)isHrCalcTypeValid;
- (FITHrZoneCalc)getHrCalcType;
- (void)setHrCalcType:(FITHrZoneCalc)hrCalcType;
// MaxHeartRate 
- (BOOL)isMaxHeartRateValid;
- (FITUInt8)getMaxHeartRate;
- (void)setMaxHeartRate:(FITUInt8)maxHeartRate;
// RestingHeartRate 
- (BOOL)isRestingHeartRateValid;
- (FITUInt8)getRestingHeartRate;
- (void)setRestingHeartRate:(FITUInt8)restingHeartRate;
// ThresholdHeartRate 
- (BOOL)isThresholdHeartRateValid;
- (FITUInt8)getThresholdHeartRate;
- (void)setThresholdHeartRate:(FITUInt8)thresholdHeartRate;
// PwrCalcType 
- (BOOL)isPwrCalcTypeValid;
- (FITPwrZoneCalc)getPwrCalcType;
- (void)setPwrCalcType:(FITPwrZoneCalc)pwrCalcType;
// FunctionalThresholdPower 
- (BOOL)isFunctionalThresholdPowerValid;
- (FITUInt16)getFunctionalThresholdPower;
- (void)setFunctionalThresholdPower:(FITUInt16)functionalThresholdPower;

@end

NS_ASSUME_NONNULL_END
