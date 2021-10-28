/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) BOOL doingYawCorrection; 
@property (nonatomic,readonly) BOOL doingBiasEstimation; 
@property (nonatomic,readonly) int magneticFieldCalibrationLevel; 
@property (nonatomic,readonly) double headingAccuracy; 
@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM9 rotationRate; 
@property (nonatomic,readonly) SCD_Struct_CM9 gravity; 
@property (nonatomic,readonly) SCD_Struct_CM9 userAcceleration; 
@property (nonatomic,readonly) SCD_Struct_CM13 magneticField; 
@property (nonatomic,readonly) double heading; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM9)gravity;
-(double)heading;
-(double)headingAccuracy;
-(SCD_Struct_CM13)magneticField;
-(CMAttitude *)attitude;
-(SCD_Struct_CM9)userAcceleration;
-(SCD_Struct_CM9)rotationRate;
-(id)initWithDeviceMotion:(SCD_Struct_CM11)arg1 internal:(SCD_Struct_CM12)arg2 timestamp:(double)arg3 ;
-(int)magneticFieldCalibrationLevel;
-(BOOL)doingYawCorrection;
-(BOOL)doingBiasEstimation;
@end
