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

@interface FITFileCapabilitiesMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// Type 
- (BOOL)isTypeValid;
- (FITFile)getType;
- (void)setType:(FITFile)type;
// Flags 
- (BOOL)isFlagsValid;
- (FITFileFlags)getFlags;
- (void)setFlags:(FITFileFlags)flags;
// Directory 
- (BOOL)isDirectoryValid;
- (NSString *)getDirectory;
- (void)setDirectory:(NSString *)directory;
// MaxCount 
- (BOOL)isMaxCountValid;
- (FITUInt16)getMaxCount;
- (void)setMaxCount:(FITUInt16)maxCount;
// MaxSize 
- (BOOL)isMaxSizeValid;
- (FITUInt32)getMaxSize;
- (void)setMaxSize:(FITUInt32)maxSize;

@end

NS_ASSUME_NONNULL_END
