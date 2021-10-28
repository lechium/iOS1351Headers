/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isActiveDevice;
	BOOL _isThisDevice;
	BOOL _isCompanionDevice;
	BOOL _isAutoMeCapable;
	NSString* _deviceId;
	NSString* _deviceName;
	NSString* _idsDeviceId;

}

@property (nonatomic,copy) NSString * deviceId;                   //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                 //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL isActiveDevice;                 //@synthesize isActiveDevice=_isActiveDevice - In the implementation block
@property (assign,nonatomic) BOOL isThisDevice;                   //@synthesize isThisDevice=_isThisDevice - In the implementation block
@property (assign,nonatomic) BOOL isCompanionDevice;              //@synthesize isCompanionDevice=_isCompanionDevice - In the implementation block
@property (assign,nonatomic) BOOL isAutoMeCapable;                //@synthesize isAutoMeCapable=_isAutoMeCapable - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceId;                //@synthesize idsDeviceId=_idsDeviceId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deviceWithId:(id)arg1 name:(id)arg2 idsDeviceId:(id)arg3 isActive:(BOOL)arg4 isThisDevice:(BOOL)arg5 isCompanionDevice:(BOOL)arg6 isAutoMeCapable:(BOOL)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(BOOL)isThisDevice;
-(NSString *)idsDeviceId;
-(NSString *)deviceId;
-(void)setDeviceId:(NSString *)arg1 ;
-(BOOL)isCompanionDevice;
-(BOOL)isActiveDevice;
-(void)setIsActiveDevice:(BOOL)arg1 ;
-(void)setIsThisDevice:(BOOL)arg1 ;
-(void)setIsCompanionDevice:(BOOL)arg1 ;
-(void)setIsAutoMeCapable:(BOOL)arg1 ;
-(void)setIdsDeviceId:(NSString *)arg1 ;
-(BOOL)isAutoMeCapable;
-(void)updateIsActive:(BOOL)arg1 isThisDevice:(BOOL)arg2 ;
@end
