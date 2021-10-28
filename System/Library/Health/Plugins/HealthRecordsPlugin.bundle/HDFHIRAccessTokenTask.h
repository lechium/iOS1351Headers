/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsPlugin/HDFHIRRequestTask.h>

@class HKOAuth2TokenSession;

@interface HDFHIRAccessTokenTask : HDFHIRRequestTask {

	HKOAuth2TokenSession* _tokenSession;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) HKOAuth2TokenSession * tokenSession;              //@synthesize tokenSession=_tokenSession - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(void)handleError:(id)arg1 endState:(id)arg2 ;
-(void)createURLRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleResponse:(id)arg1 JSONData:(id)arg2 endState:(id)arg3 ;
-(id)errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3 ;
-(id)initWithTokenSession:(id)arg1 FHIRSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(HKOAuth2TokenSession *)tokenSession;
@end
