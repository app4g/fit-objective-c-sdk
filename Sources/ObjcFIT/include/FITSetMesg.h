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

@interface FITSetMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// Duration 
- (BOOL)isDurationValid;
- (FITFloat32)getDuration;
- (void)setDuration:(FITFloat32)duration;
// Repetitions 
- (BOOL)isRepetitionsValid;
- (FITUInt16)getRepetitions;
- (void)setRepetitions:(FITUInt16)repetitions;
// Weight 
- (BOOL)isWeightValid;
- (FITFloat32)getWeight;
- (void)setWeight:(FITFloat32)weight;
// SetType 
- (BOOL)isSetTypeValid;
- (FITSetType)getSetType;
- (void)setSetType:(FITSetType)setType;
// StartTime 
- (BOOL)isStartTimeValid;
- (FITDate *)getStartTime;
- (void)setStartTime:(FITDate *)startTime;
// Category 
@property(readonly,nonatomic) uint8_t numCategoryValues;
- (BOOL)isCategoryValidforIndex : (uint8_t)index;
- (FITExerciseCategory)getCategoryforIndex : (uint8_t)index;
- (void)setCategory:(FITExerciseCategory)category forIndex:(uint8_t)index;
// CategorySubtype 
@property(readonly,nonatomic) uint8_t numCategorySubtypeValues;
- (BOOL)isCategorySubtypeValidforIndex : (uint8_t)index;
- (FITUInt16)getCategorySubtypeforIndex : (uint8_t)index;
- (void)setCategorySubtype:(FITUInt16)categorySubtype forIndex:(uint8_t)index;
// WeightDisplayUnit 
- (BOOL)isWeightDisplayUnitValid;
- (FITFitBaseUnit)getWeightDisplayUnit;
- (void)setWeightDisplayUnit:(FITFitBaseUnit)weightDisplayUnit;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// WktStepIndex 
- (BOOL)isWktStepIndexValid;
- (FITMessageIndex)getWktStepIndex;
- (void)setWktStepIndex:(FITMessageIndex)wktStepIndex;

@end

NS_ASSUME_NONNULL_END
