/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface MCAPNInfo : NSObject {

	NSString* _apnName;
	NSString* _username;
	NSString* _password;
	NSString* _proxy;
	NSNumber* _proxyPort;

}

@property (nonatomic,retain) NSString * apnName;                //@synthesize apnName=_apnName - In the implementation block
@property (nonatomic,retain) NSString * username;               //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;               //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * proxy;                  //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPort;              //@synthesize proxyPort=_proxyPort - In the implementation block
-(id)description;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(id)installationWarnings;
-(NSNumber *)proxyPort;
-(void)setUsername:(NSString *)arg1 ;
-(void)setProxyPort:(NSNumber *)arg1 ;
-(void)setApnName:(NSString *)arg1 ;
-(void)setProxy:(NSString *)arg1 ;
-(id)defaultsRepresentation;
-(id)strippedDefaultsRepresentation;
-(NSString *)apnName;
-(NSString *)proxy;
@end
