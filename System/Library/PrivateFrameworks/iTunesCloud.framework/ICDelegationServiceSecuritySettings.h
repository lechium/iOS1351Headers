/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ICDelegationServiceSecuritySettings : NSObject {

	long long _securityMode;
	NSString* _password;

}

@property (nonatomic,readonly) long long securityMode;                //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
+(void)getDeviceReceiverSettingsWithCompletion:(/*^block*/id)arg1 ;
+(void)getDeviceSenderSettingsForReceiverName:(id)arg1 securityMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)description;
-(NSString *)password;
-(id)_init;
-(long long)securityMode;
@end

