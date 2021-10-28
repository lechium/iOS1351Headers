//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKVettingAlerts : NSObject
{
}

+ (id)appSpecificLocKeyForURLSlug:(id)arg1 prefix:(id)arg2;	// IMP=0x00000001000172a0
+ (id)appSpecificLocKeyForBundleID:(id)arg1 shareType:(id)arg2 prefix:(id)arg3;	// IMP=0x0000000100016f10
+ (id)alertContentForGenericErrorWithURLSlug:(id)arg1;	// IMP=0x0000000100016c9c
+ (id)mediumNameFromComponents:(id)arg1;	// IMP=0x0000000100016c58
+ (id)alertContentForGenericInitiateVettingError;	// IMP=0x0000000100016a88
+ (id)platformSpecificAlertOptionsWithOptions:(id)arg1;	// IMP=0x00000001000169e8
+ (void)showDropDownAlert:(id)arg1 defaultResponseBlock:(CDUnknownBlockType)arg2 alternateResponseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000168e0
+ (void)showICloudAccountSettingAlert:(id)arg1 appName:(id)arg2 previewRequested:(_Bool *)arg3;	// IMP=0x00000001000163ec
+ (void)showFailureAlert:(id)arg1;	// IMP=0x00000001000160a0
+ (id)_alertContentForDropDownSelectionWithShareName:(id)arg1 ownerName:(id)arg2 currentUserName:(id)arg3 currentUserFormattedUsername:(id)arg4 dropDownTitles:(id)arg5 locKeyPrefix:(id)arg6;	// IMP=0x0000000100015a50
+ (id)alertContentForAppStoreAppSelectionWithShareName:(id)arg1 ownerName:(id)arg2 currentUserName:(id)arg3 currentUserFormattedUsername:(id)arg4 dropDownTitles:(id)arg5;	// IMP=0x0000000100015988
+ (id)alertContentForAppSelectionWithShareName:(id)arg1 ownerName:(id)arg2 currentUserName:(id)arg3 currentUserFormattedUsername:(id)arg4 dropDownTitles:(id)arg5;	// IMP=0x00000001000158c0
+ (id)alertContentDictionaryForServiceUnavailableErrorWithURLSlug:(id)arg1;	// IMP=0x00000001000156a0
+ (id)alertContentDictionaryForDeviceOfflineErrorWithURLSlug:(id)arg1;	// IMP=0x0000000100015480
+ (id)alertContentForICloudAccountError:(id)arg1 shareMetadata:(id)arg2 shareURL:(id)arg3;	// IMP=0x0000000100014be8
+ (id)alertContentForShareMetadataErrorWithURL:(id)arg1;	// IMP=0x00000001000149c0
+ (id)alertContentForCompleteVettingError:(id)arg1 shareTitle:(id)arg2 email:(id)arg3 phone:(id)arg4 reconstructedShareURL:(id)arg5;	// IMP=0x00000001000135a0
+ (id)_sanitizedShareURLSlug:(id)arg1;	// IMP=0x0000000100013468
+ (id)alertContentForInitiateVettingError:(id)arg1 shareTitle:(id)arg2 isEmail:(_Bool)arg3 address:(id)arg4;	// IMP=0x0000000100012a40
+ (id)_alertContentForAppStoreOperationWithApp:(id)arg1 shareMetadata:(id)arg2 keyPrefix:(id)arg3 titleKeySuffix:(id)arg4 bodyKeySuffix:(id)arg5;	// IMP=0x00000001000124b4
+ (id)alertContentForAppStoreUpdateLookupFailureWithShareName:(id)arg1 appName:(id)arg2 error:(id)arg3;	// IMP=0x0000000100011f2c
+ (id)alertContentForAppStoreAppLookupFailureWithShareName:(id)arg1 error:(id)arg2;	// IMP=0x00000001000119b0
+ (id)alertContentForAppUpdate:(id)arg1 shareMetadata:(id)arg2;	// IMP=0x0000000100011940
+ (id)alertContentForAppDownload:(id)arg1 shareMetadata:(id)arg2;	// IMP=0x0000000100011888
+ (id)deviceTypeSpecificSuffix;	// IMP=0x0000000100011718
+ (id)_alertContentForVettingBindingPromptWithBundleID:(id)arg1 shareName:(id)arg2 ownerName:(id)arg3 shareType:(id)arg4 isShortcut:(_Bool)arg5;	// IMP=0x0000000100011168
+ (id)alertContentForShortcutVettingBindingPromptWithBundleID:(id)arg1 shareName:(id)arg2 ownerName:(id)arg3 shareType:(id)arg4;	// IMP=0x00000001000110c8
+ (id)alertContentForFullVettingBindingPromptWithBundleID:(id)arg1 shareName:(id)arg2 ownerName:(id)arg3 shareType:(id)arg4;	// IMP=0x0000000100011028
+ (id)alertContentForFirstJoinAlertWithRecordName:(id)arg1 appName:(id)arg2 bundleID:(id)arg3 shareMetadata:(id)arg4 currentUserName:(id)arg5 currentUserFormattedUsername:(id)arg6;	// IMP=0x0000000100010644

@end
