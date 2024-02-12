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


#import "FITMessage+Internal.h"


#import "FITLengthMesg.h"

@implementation FITLengthMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_LENGTH];

    return self;
}

// MessageIndex 
- (BOOL)isMessageIndexValid {
	const fit::Field* field = [super getField:254];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITMessageIndex)getMessageIndex {
    return ([super getFieldUINT16ValueForField:254 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setMessageIndex:(FITMessageIndex)messageIndex {
    [super setFieldUINT16ValueForField:254 andValue:(messageIndex) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Timestamp 
- (BOOL)isTimestampValid {
	const fit::Field* field = [super getField:253];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITDate *)getTimestamp {
    return FITDateFromTimestamp([super getFieldUINT32ValueForField:253 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTimestamp:(FITDate *)timestamp {
    [super setFieldUINT32ValueForField:253 andValue:TimestampFromFITDate(timestamp) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Event 
- (BOOL)isEventValid {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITEvent)getEvent {
    return ([super getFieldENUMValueForField:0 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setEvent:(FITEvent)event {
    [super setFieldENUMValueForField:0 andValue:(event) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// EventType 
- (BOOL)isEventTypeValid {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITEventType)getEventType {
    return ([super getFieldENUMValueForField:1 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setEventType:(FITEventType)eventType {
    [super setFieldENUMValueForField:1 andValue:(eventType) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// StartTime 
- (BOOL)isStartTimeValid {
	const fit::Field* field = [super getField:2];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITDate *)getStartTime {
    return FITDateFromTimestamp([super getFieldUINT32ValueForField:2 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setStartTime:(FITDate *)startTime {
    [super setFieldUINT32ValueForField:2 andValue:TimestampFromFITDate(startTime) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TotalElapsedTime 
- (BOOL)isTotalElapsedTimeValid {
	const fit::Field* field = [super getField:3];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getTotalElapsedTime {
    return ([super getFieldFLOAT32ValueForField:3 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTotalElapsedTime:(FITFloat32)totalElapsedTime {
    [super setFieldFLOAT32ValueForField:3 andValue:(totalElapsedTime) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TotalTimerTime 
- (BOOL)isTotalTimerTimeValid {
	const fit::Field* field = [super getField:4];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getTotalTimerTime {
    return ([super getFieldFLOAT32ValueForField:4 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTotalTimerTime:(FITFloat32)totalTimerTime {
    [super setFieldFLOAT32ValueForField:4 andValue:(totalTimerTime) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TotalStrokes 
- (BOOL)isTotalStrokesValid {
	const fit::Field* field = [super getField:5];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16)getTotalStrokes {
    return ([super getFieldUINT16ValueForField:5 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTotalStrokes:(FITUInt16)totalStrokes {
    [super setFieldUINT16ValueForField:5 andValue:(totalStrokes) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// AvgSpeed 
- (BOOL)isAvgSpeedValid {
	const fit::Field* field = [super getField:6];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getAvgSpeed {
    return ([super getFieldFLOAT32ValueForField:6 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setAvgSpeed:(FITFloat32)avgSpeed {
    [super setFieldFLOAT32ValueForField:6 andValue:(avgSpeed) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// SwimStroke 
- (BOOL)isSwimStrokeValid {
	const fit::Field* field = [super getField:7];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITSwimStroke)getSwimStroke {
    return ([super getFieldENUMValueForField:7 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setSwimStroke:(FITSwimStroke)swimStroke {
    [super setFieldENUMValueForField:7 andValue:(swimStroke) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// AvgSwimmingCadence 
- (BOOL)isAvgSwimmingCadenceValid {
	const fit::Field* field = [super getField:9];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getAvgSwimmingCadence {
    return ([super getFieldUINT8ValueForField:9 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setAvgSwimmingCadence:(FITUInt8)avgSwimmingCadence {
    [super setFieldUINT8ValueForField:9 andValue:(avgSwimmingCadence) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// EventGroup 
- (BOOL)isEventGroupValid {
	const fit::Field* field = [super getField:10];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getEventGroup {
    return ([super getFieldUINT8ValueForField:10 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setEventGroup:(FITUInt8)eventGroup {
    [super setFieldUINT8ValueForField:10 andValue:(eventGroup) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TotalCalories 
- (BOOL)isTotalCaloriesValid {
	const fit::Field* field = [super getField:11];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16)getTotalCalories {
    return ([super getFieldUINT16ValueForField:11 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTotalCalories:(FITUInt16)totalCalories {
    [super setFieldUINT16ValueForField:11 andValue:(totalCalories) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// LengthType 
- (BOOL)isLengthTypeValid {
	const fit::Field* field = [super getField:12];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITLengthType)getLengthType {
    return ([super getFieldENUMValueForField:12 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setLengthType:(FITLengthType)lengthType {
    [super setFieldENUMValueForField:12 andValue:(lengthType) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// PlayerScore 
- (BOOL)isPlayerScoreValid {
	const fit::Field* field = [super getField:18];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16)getPlayerScore {
    return ([super getFieldUINT16ValueForField:18 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setPlayerScore:(FITUInt16)playerScore {
    [super setFieldUINT16ValueForField:18 andValue:(playerScore) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// OpponentScore 
- (BOOL)isOpponentScoreValid {
	const fit::Field* field = [super getField:19];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16)getOpponentScore {
    return ([super getFieldUINT16ValueForField:19 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setOpponentScore:(FITUInt16)opponentScore {
    [super setFieldUINT16ValueForField:19 andValue:(opponentScore) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// StrokeCount 
- (uint8_t)numStrokeCountValues {
    return [super getFieldNumValuesForField:20 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isStrokeCountValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:20];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16)getStrokeCountforIndex:(uint8_t)index {
    return ([super getFieldUINT16ValueForField:20 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setStrokeCount:(FITUInt16)strokeCount forIndex:(uint8_t)index {
    [super setFieldUINT16ValueForField:20 andValue:(strokeCount) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ZoneCount 
- (uint8_t)numZoneCountValues {
    return [super getFieldNumValuesForField:21 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isZoneCountValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:21];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16)getZoneCountforIndex:(uint8_t)index {
    return ([super getFieldUINT16ValueForField:21 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setZoneCount:(FITUInt16)zoneCount forIndex:(uint8_t)index {
    [super setFieldUINT16ValueForField:21 andValue:(zoneCount) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// EnhancedAvgRespirationRate 
- (BOOL)isEnhancedAvgRespirationRateValid {
	const fit::Field* field = [super getField:22];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getEnhancedAvgRespirationRate {
    return ([super getFieldFLOAT32ValueForField:22 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setEnhancedAvgRespirationRate:(FITFloat32)enhancedAvgRespirationRate {
    [super setFieldFLOAT32ValueForField:22 andValue:(enhancedAvgRespirationRate) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// EnhancedMaxRespirationRate 
- (BOOL)isEnhancedMaxRespirationRateValid {
	const fit::Field* field = [super getField:23];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getEnhancedMaxRespirationRate {
    return ([super getFieldFLOAT32ValueForField:23 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setEnhancedMaxRespirationRate:(FITFloat32)enhancedMaxRespirationRate {
    [super setFieldFLOAT32ValueForField:23 andValue:(enhancedMaxRespirationRate) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// AvgRespirationRate 
- (BOOL)isAvgRespirationRateValid {
	const fit::Field* field = [super getField:24];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getAvgRespirationRate {
    return ([super getFieldUINT8ValueForField:24 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setAvgRespirationRate:(FITUInt8)avgRespirationRate {
    [super setFieldUINT8ValueForField:24 andValue:(avgRespirationRate) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// MaxRespirationRate 
- (BOOL)isMaxRespirationRateValid {
	const fit::Field* field = [super getField:25];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getMaxRespirationRate {
    return ([super getFieldUINT8ValueForField:25 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setMaxRespirationRate:(FITUInt8)maxRespirationRate {
    [super setFieldUINT8ValueForField:25 andValue:(maxRespirationRate) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
