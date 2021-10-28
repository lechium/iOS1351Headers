/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSAuthenticateRequest, AMSUIWebClientContext, NSString;

@interface AMSUIWebAuthenticateAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _makeCurrentAccount;
	BOOL _pauseTimeouts;
	AMSAuthenticateRequest* _request;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL pauseTimeouts;                            //@synthesize pauseTimeouts=_pauseTimeouts - In the implementation block
@property (assign,nonatomic) BOOL makeCurrentAccount;                       //@synthesize makeCurrentAccount=_makeCurrentAccount - In the implementation block
@property (nonatomic,retain) AMSAuthenticateRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setRequest:(AMSAuthenticateRequest *)arg1 ;
-(AMSAuthenticateRequest *)request;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)pauseTimeouts;
-(BOOL)makeCurrentAccount;
-(id)runAction;
-(void)setMakeCurrentAccount:(BOOL)arg1 ;
-(void)setPauseTimeouts:(BOOL)arg1 ;
@end
