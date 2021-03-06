/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMGyroData.h>

@class NSDate;

@interface CMRecordedGyroData : CMGyroData {

	double _startDateValue;
	SCD_Struct_CM9 _rotationRate;
	double _timestampValue;
	float _temperatureValue;
	unsigned long long _identifier;

}

@property (readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * startDate; 
@property (readonly) double startTime; 
@property (readonly) float temperature; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(NSDate *)startDate;
-(double)timestamp;
-(double)startTime;
-(float)temperature;
-(SCD_Struct_CM9)rotationRate;
-(void)resetWithData:(CMGyro50*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
-(id)initWithData:(CMGyro50*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
@end

