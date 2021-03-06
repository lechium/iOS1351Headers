/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocation/CLRegion.h>

@class CLBeaconIdentityConstraint, NSUUID, NSNumber;

@interface CLBeaconRegion : CLRegion

@property (nonatomic,copy,readonly) CLBeaconIdentityConstraint * beaconIdentityConstraint; 
@property (nonatomic,copy,readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSUUID * proximityUUID; 
@property (nonatomic,copy,readonly) NSNumber * major; 
@property (nonatomic,copy,readonly) NSNumber * minor; 
@property (assign,nonatomic) BOOL notifyEntryStateOnDisplay; 
+(BOOL)supportsSecureCoding;
+(id)any;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSUUID *)UUID;
-(id)initWithBeaconIdentityConstraint:(id)arg1 identifier:(id)arg2 ;
-(CLBeaconIdentityConstraint *)beaconIdentityConstraint;
-(void)setGutsWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 notifyOnDisplay:(BOOL)arg4 ;
-(id)initWithUUID:(id)arg1 identifier:(id)arg2 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4 ;
-(NSNumber *)major;
-(NSNumber *)minor;
-(char)_measuredPowerForDevice;
-(NSUUID *)proximityUUID;
-(id)initWithProximityUUID:(id)arg1 identifier:(id)arg2 ;
-(id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4 ;
-(id)peripheralDataWithMeasuredPower:(id)arg1 ;
-(BOOL)notifyEntryStateOnDisplay;
-(void)setNotifyEntryStateOnDisplay:(BOOL)arg1 ;
@end

