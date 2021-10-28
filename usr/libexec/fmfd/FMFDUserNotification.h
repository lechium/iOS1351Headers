//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMFDUserNotification : NSObject
{
}

+ (void)showAirDropImportErrorAlert;	// IMP=0x000000010000599c
+ (void)showAirDropImportAlertForId:(id)arg1;	// IMP=0x0000000100005998
+ (void)showAirDropOfferImportedUseFMFAppForHandle:(id)arg1;	// IMP=0x0000000100005994
+ (void)showNetworkOfflineDuringStopOfferAlert;	// IMP=0x00000001000058d8
+ (void)showNetworkOfflineDuringOfferAlert;	// IMP=0x000000010000581c
+ (void)upselliCloudAlert;	// IMP=0x0000000100005760
+ (void)notLoggedIntoiCloudAlert;	// IMP=0x0000000100005620
+ (_Bool)displayiCloudUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2 switchString:(id)arg3 doNotSwitch:(id)arg4;	// IMP=0x0000000100005280
+ (void)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004e74
+ (void)showGenericErrorAlert;	// IMP=0x0000000100004e58
+ (void)show5XXDuringStopOfferAlert;	// IMP=0x0000000100004e3c
+ (void)show5XXDuringStartOfferAlert;	// IMP=0x0000000100004e20
+ (void)showForbiddenRegionAlert;	// IMP=0x0000000100004dcc
+ (void)showShareMyLocationiCloudSettingsOffAlert;	// IMP=0x0000000100004c8c
+ (void)showShareMyLocationSystemServiceOffAlert;	// IMP=0x0000000100004b4c
+ (void)showLocationServicesSwitchOffAlert;	// IMP=0x0000000100004a0c
+ (void)showMaxFollowersLimitReachedAlert;	// IMP=0x00000001000049f0
+ (void)showRestrictedAlert;	// IMP=0x0000000100004848
+ (void)showActiveDeviceChangedAlert;	// IMP=0x00000001000047f4
+ (void)displayUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2;	// IMP=0x00000001000045b0
+ (_Bool)shouldDisplayAlerts;	// IMP=0x0000000100004554

@end
