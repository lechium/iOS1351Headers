/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionActivity : CMLogItem {

	CLMotionActivity fState;

}

@property (getter=isVehicleConnected,nonatomic,readonly) BOOL vehicleConnected; 
@property (getter=isVehicleWifiHint,nonatomic,readonly) BOOL vehicleWifiHint; 
@property (getter=isVehicleGpsHint,nonatomic,readonly) BOOL vehicleGpsHint; 
@property (getter=isVehicleBasebandHint,nonatomic,readonly) BOOL vehicleBasebandHint; 
@property (getter=isVehicleMotionHint,nonatomic,readonly) BOOL vehicleMotionHint; 
@property (getter=isVehicleBTHint,nonatomic,readonly) BOOL vehicleBTHint; 
@property (nonatomic,readonly) long long confidence; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) BOOL unknown; 
@property (nonatomic,readonly) BOOL stationary; 
@property (nonatomic,readonly) BOOL walking; 
@property (nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) BOOL automotive; 
@property (nonatomic,readonly) BOOL cycling; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(long long)confidence;
-(BOOL)walking;
-(BOOL)unknown;
-(BOOL)stationary;
-(BOOL)running;
-(BOOL)cycling;
-(BOOL)automotive;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
-(BOOL)isVehicleConnected;
-(BOOL)isVehicleWifiHint;
-(BOOL)isVehicleGpsHint;
-(BOOL)isVehicleBasebandHint;
-(BOOL)isVehicleMotionHint;
-(BOOL)isVehicleBTHint;
-(CLMotionActivity*)motionActivity;
@end
