//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HMHomeManagerDelegatePrivate-Protocol.h"

@class HFHomeKitDispatcher, HMHome, HMHomeManager;

@protocol HFHomeManagerObserver <HMHomeManagerDelegatePrivate>

@optional
- (void)homeManager:(HMHomeManager *)arg1 didUpdateLocationSensingAvailability:(_Bool)arg2;
- (void)homeManagerDidFinishUnknownChange:(HMHomeManager *)arg1;
- (void)homeManagerDidFinishInitialDatabaseLoad:(HMHomeManager *)arg1;
- (void)homeKitDispatcher:(HFHomeKitDispatcher *)arg1 manager:(HMHomeManager *)arg2 didChangeHome:(HMHome *)arg3;
@end
