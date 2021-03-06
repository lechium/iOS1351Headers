/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IXAppInstallObserverProtocol <NSObject>
@required
-(oneway void)_client_coordinatorShouldPrioritizeWithSeed:(id)arg1;
-(oneway void)_client_shouldPrioritizeAppWithBundleID:(id)arg1;
-(oneway void)_client_coordinatorShouldResumeWithSeed:(id)arg1;
-(oneway void)_client_coordinatorShouldPauseWithSeed:(id)arg1;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)arg1;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg1;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg1;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;

@end

