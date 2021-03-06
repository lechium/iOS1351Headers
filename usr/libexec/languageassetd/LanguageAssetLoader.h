//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface LanguageAssetLoader : NSObject
{
    NSDictionary *_langugeAssetsInfoPlist;	// 8 = 0x8
    struct __CFString *_productType;	// 16 = 0x10
    _Bool _needRedownload;	// 24 = 0x18
    _Bool _isKeyboardsChanged;	// 25 = 0x19
    struct __SCNetworkReachability *_reachabilityRef;	// 32 = 0x20
    long long _compatibilityVersion;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100002f60
- (void)reachabilityChanged;	// IMP=0x0000000100006600
- (id)oldDictionaryAssetsWithLanguageAssetInfo:(id)arg1;	// IMP=0x000000010000637c
- (void)downloadLanguageAssets;	// IMP=0x00000001000062c4
- (void)actualDownloadLanguageAssets;	// IMP=0x00000001000057e8
- (id)normalizedLanguage:(id)arg1;	// IMP=0x0000000100005614
- (_Bool)shouldExcludeProductWithLanguageAssetInfo:(id)arg1;	// IMP=0x00000001000054c8
- (_Bool)checkFontAssetsSanityWithLanguageAssetInfo:(id)arg1;	// IMP=0x000000010000542c
- (void)purgeLocalFontAssetsWithType:(id)arg1 mobileAssetVersionV2:(_Bool)arg2;	// IMP=0x0000000100005154
- (_Bool)isPowerRequestSatisfied;	// IMP=0x0000000100005094
- (void)setDownloadFlagToAssetFlagArray:(id)arg1 primaryLanguage:(id)arg2 assetInfo:(id)arg3;	// IMP=0x0000000100004c00
- (id)effectiveAssetFlagArrayForAssetType:(id)arg1;	// IMP=0x000000010000449c
- (id)localAssetsWithType:(id)arg1 assetInfo:(id)arg2;	// IMP=0x00000001000042f8
- (id)notificationStringWithPrimaryLanguage:(id)arg1 assetInfo:(id)arg2;	// IMP=0x00000001000042b8
- (_Bool)primaryLanguageIsInBlackList:(id)arg1 assetType:(id)arg2 assetInfo:(id)arg3;	// IMP=0x000000010000423c
- (id)alreadyInstalledAssetsWithPrimaryLanguage:(id)arg1 results:(id)arg2 assetInfo:(id)arg3;	// IMP=0x0000000100004094
- (id)downloadOptions:(id)arg1;	// IMP=0x0000000100004040
- (_Bool)assetMatched:(id)arg1 primaryLanguage:(id)arg2 assetInfo:(id)arg3;	// IMP=0x0000000100003f7c
- (_Bool)fontAssetMatched:(id)arg1 primaryLanguage:(id)arg2 assetInfo:(id)arg3;	// IMP=0x0000000100003cb4
- (_Bool)dictionaryAssetMatched:(id)arg1 primaryLanguage:(id)arg2 assetInfo:(id)arg3;	// IMP=0x00000001000039a0
- (id)assetIdentifier:(id)arg1 assetInfo:(id)arg2;	// IMP=0x0000000100003844
- (_Bool)alreadyHandledLanguage:(struct __CFString *)arg1;	// IMP=0x00000001000037d8
- (void)updatePreferenceWithLanguage:(struct __CFString *)arg1;	// IMP=0x0000000100003724
- (void)updatePreferenceWithAssetIdentifier:(struct __CFString *)arg1;	// IMP=0x0000000100003670
- (void)reset;	// IMP=0x00000001000034d8
- (void)logAssetsWithAssetType:(id)arg1;	// IMP=0x000000010000312c
- (id)assetServerWithAssetType:(id)arg1;	// IMP=0x0000000100003120
- (void)setIsKeyboardsChanged:(_Bool)arg1;	// IMP=0x0000000100003118
- (void)dealloc;	// IMP=0x0000000100003098
- (id)init;	// IMP=0x0000000100002fc4

@end

