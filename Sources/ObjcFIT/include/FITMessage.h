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
#import "FITTypes.h"

@class FITDeveloperField;

NS_ASSUME_NONNULL_BEGIN

@interface FITMessage : NSObject
- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithMessage:(FITMessage *) message NS_DESIGNATED_INITIALIZER;
-(FITMesgNum)getNum;
-(void)addDeveloperField:(FITDeveloperField *)developerField;
-(NSArray*)getDeveloperFields;

-(FITUInt8) getFieldNumValuesForField:(FITUInt8)fieldNum andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITBool) canField:(FITUInt8)fieldNum supportSubField:(FITUInt16)subFieldIndex;

-(FITEnum)getFieldENUMValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITByte)getFieldBYTEValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITSInt8)getFieldSINT8ValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITUInt8)getFieldUINT8ValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITUInt8z)getFieldUINT8ZValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITSInt16)getFieldSINT16ValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITUInt16)getFieldUINT16ValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITUInt16z)getFieldUINT16ZValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITSInt32)getFieldSINT32ValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITUInt32)getFieldUINT32ValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITUInt32z)getFieldUINT32ZValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITSInt64)getFieldSINT64ValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITUInt64)getFieldUINT64ValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITUInt64z)getFieldUINT64ZValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITFloat32)getFieldFLOAT32ValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(FITFloat64)getFieldFLOAT64ValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(NSString *)getFieldSTRINGValueForField:(FITUInt8)fieldNum forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;

-(void)setFieldENUMValueForField:(FITUInt8)fieldNum andValue:(FITEnum)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldBYTEValueForField:(FITUInt8)fieldNum andValue:(FITByte)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldSINT8ValueForField:(FITUInt8)fieldNum andValue:(FITSInt8)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldUINT8ValueForField:(FITUInt8)fieldNum andValue:(FITUInt8)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldUINT8ZValueForField:(FITUInt8)fieldNum andValue:(FITUInt8z)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldSINT16ValueForField:(FITUInt8)fieldNum andValue:(FITSInt16)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldUINT16ValueForField:(FITUInt8)fieldNum andValue:(FITUInt16)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldUINT16ZValueForField:(FITUInt8)fieldNum andValue:(FITUInt16z)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldSINT32ValueForField:(FITUInt8)fieldNum andValue:(FITSInt32)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldUINT32ValueForField:(FITUInt8)fieldNum andValue:(FITUInt32)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldUINT32ZValueForField:(FITUInt8)fieldNum andValue:(FITUInt32z)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldSINT64ValueForField:(FITUInt8)fieldNum andValue:(FITSInt64)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldUINT64ValueForField:(FITUInt8)fieldNum andValue:(FITUInt64)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldUINT64ZValueForField:(FITUInt8)fieldNum andValue:(FITUInt64z)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldFLOAT32ValueForField:(FITUInt8)fieldNum andValue:(FITFloat32)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldFLOAT64ValueForField:(FITUInt8)fieldNum andValue:(FITFloat64)value forIndex:(uint8_t)fieldArrayIndex andSubFieldIndex:(FITUInt16) subFieldIndex;
-(void)setFieldSTRINGValueForField:(FITUInt8)fieldNum andValue:(NSString *)value forIndex:(uint8_t)fieldArrayIndex;

@end

NS_ASSUME_NONNULL_END
