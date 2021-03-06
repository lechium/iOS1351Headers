/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcess;
@class NSString, FBSProcessExecutionPolicy, BKSProcessAssertion;

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding> {

	NSString* _name;
	id<FBSProcess> _process;
	FBSProcessExecutionPolicy* _policy;
	unsigned long long _activationCount;
	BOOL _invalidated;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,readonly) BKSProcessAssertion * assertion;                    //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,readonly) unsigned long long activationCount;                 //@synthesize activationCount=_activationCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcess> process;                      //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) FBSProcessExecutionPolicy * policy;                 //@synthesize policy=_policy - In the implementation block
@property (getter=isActivated,nonatomic,readonly) BOOL activated; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(BOOL)isInvalidated;
-(FBSProcessExecutionPolicy *)policy;
-(BKSProcessAssertion *)assertion;
-(id<FBSProcess>)process;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)activate;
-(void)deactivate;
-(unsigned long long)activationCount;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
-(BOOL)isActivated;
@end

