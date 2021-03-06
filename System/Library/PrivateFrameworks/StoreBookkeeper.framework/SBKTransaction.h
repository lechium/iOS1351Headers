/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, SBKRequest, NSMutableDictionary;

@interface SBKTransaction : NSObject {

	NSString* _domain;
	NSURL* _requestURL;
	SBKRequest* _activeRequest;
	NSMutableDictionary* _userInfo;

}

@property (retain) NSMutableDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (copy,readonly) NSString * domain;                    //@synthesize domain=_domain - In the implementation block
@property (retain) NSURL * requestURL;                          //@synthesize requestURL=_requestURL - In the implementation block
@property (retain) SBKRequest * activeRequest;                  //@synthesize activeRequest=_activeRequest - In the implementation block
-(id)init;
-(NSString *)domain;
-(NSMutableDictionary *)userInfo;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(SBKRequest *)activeRequest;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSURL *)requestURL;
-(id)newRequest;
-(id)clampsKey;
-(void)setTransactionContext:(id)arg1 forKey:(id)arg2 ;
-(void)setActiveRequest:(SBKRequest *)arg1 ;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)transactionContextForKey:(id)arg1 ;
-(id)initWithDomain:(id)arg1 requestURL:(id)arg2 ;
@end

