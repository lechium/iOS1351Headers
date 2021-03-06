/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSAssertionHandler.h>

@protocol PFAssertionPolicyHandler;
@interface PFAssertionHandler : NSAssertionHandler {

	id<PFAssertionPolicyHandler> _policy;

}

@property (retain) id<PFAssertionPolicyHandler> policy;              //@synthesize policy=_policy - In the implementation block
+(id)currentHandler;
+(BOOL)runningUnitTests;
+(void)install;
-(id)init;
-(void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5 ;
-(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 ;
-(id<PFAssertionPolicyHandler>)policy;
-(id)defaultPolicy;
-(void)setPolicy:(id<PFAssertionPolicyHandler>)arg1 ;
-(id)defaultTestingPolicy;
-(void)_install;
-(id)newAssertionInfoInMethod:(SEL)arg1 object:(id)arg2 function:(id)arg3 file:(id)arg4 lineNumber:(long long)arg5 description:(id)arg6 arguments:(char*)arg7 ;
-(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(char*)arg5 ;
-(void)continueAfterAssertInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(char*)arg5 ;
@end

