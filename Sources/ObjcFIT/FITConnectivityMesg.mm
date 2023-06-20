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


#import "FITMessage+Internal.h"

#import "FITString.h"

#import "FITConnectivityMesg.h"

@implementation FITConnectivityMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_CONNECTIVITY];

    return self;
}

// BluetoothEnabled 
- (BOOL)isBluetoothEnabledValid {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getBluetoothEnabled {
    return ([super getFieldENUMValueForField:0 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBluetoothEnabled:(FITBool)bluetoothEnabled {
    [super setFieldENUMValueForField:0 andValue:(bluetoothEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// BluetoothLeEnabled 
- (BOOL)isBluetoothLeEnabledValid {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getBluetoothLeEnabled {
    return ([super getFieldENUMValueForField:1 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBluetoothLeEnabled:(FITBool)bluetoothLeEnabled {
    [super setFieldENUMValueForField:1 andValue:(bluetoothLeEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// AntEnabled 
- (BOOL)isAntEnabledValid {
	const fit::Field* field = [super getField:2];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getAntEnabled {
    return ([super getFieldENUMValueForField:2 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setAntEnabled:(FITBool)antEnabled {
    [super setFieldENUMValueForField:2 andValue:(antEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Name 
- (BOOL)isNameValid {
	const fit::Field* field = [super getField:3];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (NSString *)getName {
    return ([super getFieldSTRINGValueForField:3 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setName:(NSString *)name {
    [super setFieldSTRINGValueForField:3 andValue:(name) forIndex:0];
} 

// LiveTrackingEnabled 
- (BOOL)isLiveTrackingEnabledValid {
	const fit::Field* field = [super getField:4];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getLiveTrackingEnabled {
    return ([super getFieldENUMValueForField:4 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setLiveTrackingEnabled:(FITBool)liveTrackingEnabled {
    [super setFieldENUMValueForField:4 andValue:(liveTrackingEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// WeatherConditionsEnabled 
- (BOOL)isWeatherConditionsEnabledValid {
	const fit::Field* field = [super getField:5];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getWeatherConditionsEnabled {
    return ([super getFieldENUMValueForField:5 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setWeatherConditionsEnabled:(FITBool)weatherConditionsEnabled {
    [super setFieldENUMValueForField:5 andValue:(weatherConditionsEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// WeatherAlertsEnabled 
- (BOOL)isWeatherAlertsEnabledValid {
	const fit::Field* field = [super getField:6];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getWeatherAlertsEnabled {
    return ([super getFieldENUMValueForField:6 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setWeatherAlertsEnabled:(FITBool)weatherAlertsEnabled {
    [super setFieldENUMValueForField:6 andValue:(weatherAlertsEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// AutoActivityUploadEnabled 
- (BOOL)isAutoActivityUploadEnabledValid {
	const fit::Field* field = [super getField:7];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getAutoActivityUploadEnabled {
    return ([super getFieldENUMValueForField:7 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setAutoActivityUploadEnabled:(FITBool)autoActivityUploadEnabled {
    [super setFieldENUMValueForField:7 andValue:(autoActivityUploadEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// CourseDownloadEnabled 
- (BOOL)isCourseDownloadEnabledValid {
	const fit::Field* field = [super getField:8];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getCourseDownloadEnabled {
    return ([super getFieldENUMValueForField:8 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setCourseDownloadEnabled:(FITBool)courseDownloadEnabled {
    [super setFieldENUMValueForField:8 andValue:(courseDownloadEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// WorkoutDownloadEnabled 
- (BOOL)isWorkoutDownloadEnabledValid {
	const fit::Field* field = [super getField:9];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getWorkoutDownloadEnabled {
    return ([super getFieldENUMValueForField:9 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setWorkoutDownloadEnabled:(FITBool)workoutDownloadEnabled {
    [super setFieldENUMValueForField:9 andValue:(workoutDownloadEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// GpsEphemerisDownloadEnabled 
- (BOOL)isGpsEphemerisDownloadEnabledValid {
	const fit::Field* field = [super getField:10];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getGpsEphemerisDownloadEnabled {
    return ([super getFieldENUMValueForField:10 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setGpsEphemerisDownloadEnabled:(FITBool)gpsEphemerisDownloadEnabled {
    [super setFieldENUMValueForField:10 andValue:(gpsEphemerisDownloadEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// IncidentDetectionEnabled 
- (BOOL)isIncidentDetectionEnabledValid {
	const fit::Field* field = [super getField:11];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getIncidentDetectionEnabled {
    return ([super getFieldENUMValueForField:11 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setIncidentDetectionEnabled:(FITBool)incidentDetectionEnabled {
    [super setFieldENUMValueForField:11 andValue:(incidentDetectionEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// GrouptrackEnabled 
- (BOOL)isGrouptrackEnabledValid {
	const fit::Field* field = [super getField:12];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getGrouptrackEnabled {
    return ([super getFieldENUMValueForField:12 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setGrouptrackEnabled:(FITBool)grouptrackEnabled {
    [super setFieldENUMValueForField:12 andValue:(grouptrackEnabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
