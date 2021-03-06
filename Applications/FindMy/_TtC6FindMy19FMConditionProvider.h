//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "RadiosPreferencesDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6FindMy19FMConditionProvider : NSObject <RadiosPreferencesDelegate, CBCentralManagerDelegate>
{
    MISSING_TYPE *subscriptions;	// 8 = 0x8
    MISSING_TYPE *FMFRestricted;	// 16 = 0x10
    MISSING_TYPE *FMIPRestricted;	// 17 = 0x11
    MISSING_TYPE *accountStore;	// 24 = 0x18
    MISSING_TYPE *networkMonitor;	// 32 = 0x20
    MISSING_TYPE *fmfAccountIdentifier;	// 40 = 0x28
    MISSING_TYPE *fmipAccountIdentifier;	// 56 = 0x38
    MISSING_TYPE *isAccountCheckPending;	// 72 = 0x48
    MISSING_TYPE *wasNoNetworkAlertShown;	// 73 = 0x49
    MISSING_TYPE *radioPreferences;	// 80 = 0x50
    MISSING_TYPE *coreBluetoothMgr;	// 88 = 0x58
    MISSING_TYPE *isAccountManaged;	// 96 = 0x60
    MISSING_TYPE *accountsAreSignedIn;	// 97 = 0x61
    MISSING_TYPE *isNetworkUp;	// 98 = 0x62
    MISSING_TYPE *areServerAlertsPostponed;	// 99 = 0x63
    MISSING_TYPE *areFriendsInitialized;	// 100 = 0x64
    MISSING_TYPE *didFriendsFailToInitialize;	// 101 = 0x65
    MISSING_TYPE *areDevicesInitialized;	// 102 = 0x66
    MISSING_TYPE *didDevicesFailToInitialize;	// 103 = 0x67
    MISSING_TYPE *wasAccountCheckedOnce;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000010015db98
- (void)refreshRestrictions;	// IMP=0x000000010016047c
- (void)checkNetworkState;	// IMP=0x000000010015f1fc
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000010015f1b0
- (void)airplaneModeChanged;	// IMP=0x000000010015efe8
- (void)accountChangedNotificationReceivedWithNotification:(id)arg1;	// IMP=0x000000010015ea58
- (void)dealloc;	// IMP=0x000000010015db74
- (id)init;	// IMP=0x000000010015da80

@end

