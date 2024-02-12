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

@interface FITThreeDSensorCalibrationMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// SensorType 
- (BOOL)isSensorTypeValid;
- (FITSensorType)getSensorType;
- (void)setSensorType:(FITSensorType)sensorType;
// CalibrationFactor 
- (BOOL)isCalibrationFactorValid;
- (FITUInt32)getCalibrationFactor;
- (void)setCalibrationFactor:(FITUInt32)calibrationFactor;
// CalibrationFactor Sub Fields
- (BOOL)isAccelCalFactorValid;
- (FITUInt32) getAccelCalFactor;
- (void)setAccelCalFactor:(FITUInt32)accelCalFactor;
- (BOOL)isGyroCalFactorValid;
- (FITUInt32) getGyroCalFactor;
- (void)setGyroCalFactor:(FITUInt32)gyroCalFactor;
// CalibrationDivisor 
- (BOOL)isCalibrationDivisorValid;
- (FITUInt32)getCalibrationDivisor;
- (void)setCalibrationDivisor:(FITUInt32)calibrationDivisor;
// LevelShift 
- (BOOL)isLevelShiftValid;
- (FITUInt32)getLevelShift;
- (void)setLevelShift:(FITUInt32)levelShift;
// OffsetCal 
@property(readonly,nonatomic) uint8_t numOffsetCalValues;
- (BOOL)isOffsetCalValidforIndex : (uint8_t)index;
- (FITSInt32)getOffsetCalforIndex : (uint8_t)index;
- (void)setOffsetCal:(FITSInt32)offsetCal forIndex:(uint8_t)index;
// OrientationMatrix 
@property(readonly,nonatomic) uint8_t numOrientationMatrixValues;
- (BOOL)isOrientationMatrixValidforIndex : (uint8_t)index;
- (FITFloat32)getOrientationMatrixforIndex : (uint8_t)index;
- (void)setOrientationMatrix:(FITFloat32)orientationMatrix forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END
