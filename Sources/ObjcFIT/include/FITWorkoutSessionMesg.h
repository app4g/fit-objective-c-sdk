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

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITWorkoutSessionMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// Sport 
- (BOOL)isSportValid;
- (FITSport)getSport;
- (void)setSport:(FITSport)sport;
// SubSport 
- (BOOL)isSubSportValid;
- (FITSubSport)getSubSport;
- (void)setSubSport:(FITSubSport)subSport;
// NumValidSteps 
- (BOOL)isNumValidStepsValid;
- (FITUInt16)getNumValidSteps;
- (void)setNumValidSteps:(FITUInt16)numValidSteps;
// FirstStepIndex 
- (BOOL)isFirstStepIndexValid;
- (FITUInt16)getFirstStepIndex;
- (void)setFirstStepIndex:(FITUInt16)firstStepIndex;
// PoolLength 
- (BOOL)isPoolLengthValid;
- (FITFloat32)getPoolLength;
- (void)setPoolLength:(FITFloat32)poolLength;
// PoolLengthUnit 
- (BOOL)isPoolLengthUnitValid;
- (FITDisplayMeasure)getPoolLengthUnit;
- (void)setPoolLengthUnit:(FITDisplayMeasure)poolLengthUnit;

@end

NS_ASSUME_NONNULL_END
