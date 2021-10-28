/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/ASTask.h>

@class NSString, NSMutableDictionary;

@interface ASAutodiscoverV2Task : ASTask {

	NSString* _emailAddress;
	NSMutableDictionary* _accountInfo;
	BOOL _addEmptyBearer;
	BOOL _discoverOAuthEndpoint;
	NSString* _easEndPoint;

}
-(id)_url;
-(id)contentType;
-(void)finishWithError:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(double)timeoutInterval;
-(void)loadRequest:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(BOOL)processContext:(id)arg1 ;
-(void)didProcessContext:(id)arg1 ;
-(id)_easVersion;
-(id)_policyKey;
-(id)_HTTPMethodForRequest:(id)arg1 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(BOOL)_shouldRedirectToHTTPForRequest:(id)arg1 ;
-(id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2 ;
-(BOOL)shouldHandlePasswordErrors;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)shouldLogIncomingData;
-(id)_OAuthURLFromResponseData:(id)arg1 ;
@end
