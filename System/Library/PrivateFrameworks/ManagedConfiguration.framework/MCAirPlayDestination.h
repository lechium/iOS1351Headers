/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MCAirPlayDestination : NSObject {

	NSString* _deviceID;
	NSString* _deviceName;
	NSString* _password;

}

@property (nonatomic,retain) NSString * deviceID;                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * password;                //@synthesize password=_password - In the implementation block
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
@end
