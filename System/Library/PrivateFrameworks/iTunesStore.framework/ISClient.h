/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, NSLock;

@interface ISClient : NSObject {

	NSString* _appleClientVersions;
	NSString* _appleClientApplication;
	NSString* _identifier;
	NSString* _partnerHeader;
	NSString* _userAgent;
	NSDictionary* _clientProvidedHeaders;
	NSLock* _lock;

}

@property (nonatomic,retain) NSLock * lock;                         //@synthesize lock=_lock - In the implementation block
@property (copy) NSString * appleClientApplication;                 //@synthesize appleClientApplication=_appleClientApplication - In the implementation block
@property (copy) NSString * userAgent;                              //@synthesize userAgent=_userAgent - In the implementation block
@property (readonly) NSString * appleClientVersions;                //@synthesize appleClientVersions=_appleClientVersions - In the implementation block
@property (copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * partnerHeader;                          //@synthesize partnerHeader=_partnerHeader - In the implementation block
@property (copy) NSDictionary * clientProvidedHeaders;              //@synthesize clientProvidedHeaders=_clientProvidedHeaders - In the implementation block
+(id)currentClient;
-(id)init;
-(void)dealloc;
-(NSLock *)lock;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(NSString *)partnerHeader;
-(void)setPartnerHeader:(NSString *)arg1 ;
-(NSDictionary *)clientProvidedHeaders;
-(void)setAppleClientApplication:(NSString *)arg1 ;
-(NSString *)appleClientApplication;
-(NSString *)appleClientVersions;
-(void)_softwareMapInvalidatedNotification:(id)arg1 ;
-(id)_appleClientVersions;
-(void)setClientProvidedHeaders:(NSDictionary *)arg1 ;
-(id)localStoreFrontID;
@end

