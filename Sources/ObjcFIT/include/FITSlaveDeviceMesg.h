/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.126.0Release
// Tag = production/release/21.126.0-0-g0576dfe
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITSlaveDeviceMesg : FITMessage
- (id)init;
// Manufacturer 
- (BOOL)isManufacturerValid;
- (FITManufacturer)getManufacturer;
- (void)setManufacturer:(FITManufacturer)manufacturer;
// Product 
- (BOOL)isProductValid;
- (FITUInt16)getProduct;
- (void)setProduct:(FITUInt16)product;
// Product Sub Fields
- (BOOL)isFaveroProductValid;
- (FITFaveroProduct) getFaveroProduct;
- (void)setFaveroProduct:(FITFaveroProduct)faveroProduct;
- (BOOL)isGarminProductValid;
- (FITGarminProduct) getGarminProduct;
- (void)setGarminProduct:(FITGarminProduct)garminProduct;

@end

NS_ASSUME_NONNULL_END
