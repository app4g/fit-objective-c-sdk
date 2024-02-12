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
#import "FITFieldDescriptionMesg.h"
#import "FITDeveloperDataIdMesg.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITDeveloperFieldDefinition : NSObject

- (id)initWithFieldDescriptionMesg: (FITFieldDescriptionMesg*) fieldDescription andDeveloperDataIdMesg: (FITDeveloperDataIdMesg*) developer;

@property(nonatomic, readonly) FITFieldDescriptionMesg* fieldDescription;
@property(nonatomic, readonly) FITDeveloperDataIdMesg* developer;

-(BOOL) isDefined;

@end

NS_ASSUME_NONNULL_END