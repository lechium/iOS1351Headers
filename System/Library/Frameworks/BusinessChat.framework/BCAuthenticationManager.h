/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class BCAuthenticationRequest, NSString;

@interface BCAuthenticationManager : NSObject <NSURLSessionDelegate> {

	BCAuthenticationRequest* _authenticationRequest;

}

@property (nonatomic,retain) BCAuthenticationRequest * authenticationRequest;              //@synthesize authenticationRequest=_authenticationRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BCAuthenticationRequest *)authenticationRequest;
-(id)initWithAuthenticationRequest:(id)arg1 ;
-(void)setAuthenticationRequest:(BCAuthenticationRequest *)arg1 ;
-(BOOL)processQueryItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)processFragments:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)exchangeCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accessTokenForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchTokenWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
