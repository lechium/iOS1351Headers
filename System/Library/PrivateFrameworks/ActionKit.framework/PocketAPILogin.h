/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PocketAPIDelegate.h>

@protocol PocketAPIDelegate;
@class PocketAPI, NSString, NSOperationQueue;

@interface PocketAPILogin : NSObject <NSSecureCoding, PocketAPIDelegate> {

	PocketAPI* API;
	NSString* uuid;
	NSString* requestToken;
	NSString* accessToken;
	NSOperationQueue* operationQueue;
	id<PocketAPIDelegate> delegate;
	BOOL didStart;
	BOOL didFinish;
	BOOL reverseAuth;

}

@property (nonatomic,retain,readonly) PocketAPI * API; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * requestToken; 
@property (nonatomic,retain,readonly) NSString * accessToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(PocketAPI *)API;
-(NSString *)accessToken;
-(NSString *)requestToken;
-(id)redirectURL;
-(void)fetchRequestToken;
-(void)pocketAPI:(id)arg1 receivedRequestToken:(id)arg2 ;
-(void)pocketAPILoggedIn:(id)arg1 ;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2 ;
-(void)_setRequestToken:(id)arg1 ;
-(void)_setReverseAuth:(BOOL)arg1 ;
-(id)initWithAPI:(id)arg1 delegate:(id)arg2 ;
-(void)convertRequestTokenToAccessToken;
-(void)loginDidStart;
-(void)loginDidFinish:(BOOL)arg1 ;
@end

