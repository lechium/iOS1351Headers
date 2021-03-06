/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSString, AMSMediaToken;

@interface AMSMediaTokenServiceStore : NSObject {

	NSString* _clientIdentifier;
	NSString* _keychainAccessGroup;
	AMSMediaToken* _memoryMediaToken;

}

@property (nonatomic,retain) AMSMediaToken * memoryMediaToken;              //@synthesize memoryMediaToken=_memoryMediaToken - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * keychainAccessGroup;                //@synthesize keychainAccessGroup=_keychainAccessGroup - In the implementation block
-(void)dealloc;
-(NSString *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 ;
-(id)retrieveToken;
-(NSString *)keychainAccessGroup;
-(void)storeToken:(id)arg1 ;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(void)_setupKeychainNotifications;
-(void)_teardownKeychainNotifications;
-(void)setMemoryMediaToken:(AMSMediaToken *)arg1 ;
-(AMSMediaToken *)memoryMediaToken;
-(id)_retrieveTokenFromKeychain;
-(void)_storeTokenInKeychain:(id)arg1 ;
-(void)_postMediaTokenChangedNotification;
-(BOOL)_hasAppleGroupEnabled;
-(id)_keychainAccessGroup;
-(CFDictionaryRef)_keychainQuery;
-(void)_removeTokenFromKeychain;
-(id)_mediaTokenChangedNotificationName;
-(void)_mediaTokenChanged;
@end

