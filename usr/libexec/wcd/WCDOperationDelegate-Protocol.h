//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSSet, NSString;

@protocol WCDOperationDelegate <NSObject>
- (void)onqueue_retrievedInstalledAppsListCurrentlyInstalledApps:(NSDictionary *)arg1 iOSApplicationsContainingWatchApp:(NSSet *)arg2 iOSAppBundleIDToExtensionBundleID:(NSDictionary *)arg3 iOSApplicationsWithWatchAppInstalled:(NSSet *)arg4 iOSAppBundleIDToUniqueInstallID:(NSDictionary *)arg5 iOSApplicationsContainingComplications:(NSSet *)arg6;
- (void)onqueue_retrievedIOSApplicationsContainingActiveComplications:(NSSet *)arg1;
- (void)onqueue_retrievedPairingStateIsPaired:(_Bool)arg1 pairingID:(NSString *)arg2 pairedDeviceInformation:(NSString *)arg3 pairedDevicesPairingIDs:(NSSet *)arg4;
@end
