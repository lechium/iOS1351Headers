/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISAuthenticationChallenge.h>

@protocol NSURLAuthenticationChallengeSender;
@class NSString;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {

	long long _failureCount;
	BOOL _hasPassword;
	NSString* _password;
	id<NSURLAuthenticationChallengeSender> _sender;
	NSString* _user;
	BOOL _userNameIsEditable;

}

@property (assign) long long failureCount;                                     //@synthesize failureCount=_failureCount - In the implementation block
@property (assign) BOOL hasPassword;                                           //@synthesize hasPassword=_hasPassword - In the implementation block
@property (retain) NSString * password;                                        //@synthesize password=_password - In the implementation block
@property (assign) id<NSURLAuthenticationChallengeSender> sender;              //@synthesize sender=_sender - In the implementation block
@property (retain) NSString * user;                                            //@synthesize user=_user - In the implementation block
@property (assign) BOOL userNameIsEditable;                                    //@synthesize userNameIsEditable=_userNameIsEditable - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)user;
-(NSString *)password;
-(void)setUser:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(void)setSender:(id<NSURLAuthenticationChallengeSender>)arg1 ;
-(BOOL)hasPassword;
-(long long)failureCount;
-(void)setFailureCount:(long long)arg1 ;
-(BOOL)userNameIsEditable;
-(BOOL)userNameIsEmail;
-(void)setUserNameIsEditable:(BOOL)arg1 ;
-(void)setHasPassword:(BOOL)arg1 ;
@end

