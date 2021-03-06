//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CARDashboardStateProvider, NSString;

@protocol CARDashboardStateObserver <NSObject>
- (void)dashboardStateProvider:(CARDashboardStateProvider *)arg1 didChangeActiveBundleIdentifier:(NSString *)arg2;
- (void)dashboardStateProvider:(CARDashboardStateProvider *)arg1 didChangeHomeScreenPageType:(unsigned long long)arg2;
- (void)dashboardStateProvider:(CARDashboardStateProvider *)arg1 didChangeLockoutState:(unsigned long long)arg2;
- (void)dashboardStateProvider:(CARDashboardStateProvider *)arg1 didChangeConnectionReady:(_Bool)arg2;
@end

