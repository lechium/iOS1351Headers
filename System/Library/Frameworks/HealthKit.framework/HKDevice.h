/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKDevice : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _hardwareVersion;
	NSString* _firmwareVersion;
	NSString* _softwareVersion;
	NSString* _localIdentifier;
	NSString* _UDIDeviceIdentifier;

}

@property (nonatomic,readonly) NSString * _connectedGymDeviceFullName; 
@property (nonatomic,readonly) NSString * _connectedGymDeviceTypeName; 
@property (readonly) NSString * name; 
@property (readonly) NSString * manufacturer; 
@property (readonly) NSString * model; 
@property (readonly) NSString * hardwareVersion; 
@property (readonly) NSString * firmwareVersion; 
@property (readonly) NSString * softwareVersion; 
@property (readonly) NSString * localIdentifier; 
@property (readonly) NSString * UDIDeviceIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)localDevice;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)model;
-(NSString *)firmwareVersion;
-(NSString *)hardwareVersion;
-(void)_setName:(id)arg1 ;
-(NSString *)localIdentifier;
-(NSString *)manufacturer;
-(NSString *)softwareVersion;
-(void)_setModel:(id)arg1 ;
-(id)initWithName:(id)arg1 manufacturer:(id)arg2 model:(id)arg3 hardwareVersion:(id)arg4 firmwareVersion:(id)arg5 softwareVersion:(id)arg6 localIdentifier:(id)arg7 UDIDeviceIdentifier:(id)arg8 ;
-(BOOL)_isConnectedGymDevice;
-(unsigned long long)_fitnessMachineType;
-(NSString *)_connectedGymDeviceTypeName;
-(void)_setFitnessMachineType:(unsigned long long)arg1 ;
-(NSString *)_connectedGymDeviceFullName;
-(void)_setManufacturer:(id)arg1 ;
-(void)_setHardwareVersion:(id)arg1 ;
-(void)_setFirmwareVersion:(id)arg1 ;
-(void)_setSoftwareVersion:(id)arg1 ;
-(void)_setLocalIdentifier:(id)arg1 ;
-(NSString *)UDIDeviceIdentifier;
-(void)_setUDIDeviceIdentifier:(id)arg1 ;
@end

