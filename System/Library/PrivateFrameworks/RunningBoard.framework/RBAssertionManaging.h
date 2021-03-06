/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBAssertionManaging <NSObject,RBDomainAttributeManaging>
@required
-(id)stateForIdentity:(id)arg1;
-(id)processForIdentity:(id)arg1;
-(BOOL)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)arg1;
-(BOOL)invalidateAssertion:(id)arg1;
-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1;
-(id)assertionsForOriginator:(id)arg1;
-(void)acquireAssertionWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)invalidateAssertionFromOriginator:(id)arg1 withIdentifier:(id)arg2;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg1;
-(id)limitationsForInstance:(id)arg1;
-(BOOL)hasAssertionWithIdentifier:(id)arg1;
-(void)processDidLaunch:(id)arg1;
-(void)processDidTerminate:(id)arg1;
-(void)revalidateAssertionsForProcessIdentities:(id)arg1;

@end

