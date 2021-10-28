/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DNDSStateProviderDataSource <NSObject>
@required
-(id)currentlyActiveModeAssertionsForStateProvider:(id)arg1;
-(unsigned long long)currentLostModeStateForStateProvider:(id)arg1;
-(unsigned long long)currentInterruptionBehaviorSettingForStateProvider:(id)arg1;
-(id)stateProvider:(id)arg1 activeDateIntervalForModeAssertion:(id)arg2;

@end
