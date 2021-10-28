/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PSGBackupUtils : NSObject
+(BOOL)isDomainWhitelisted:(id)arg1 ;
+(void)fetchBackupDisabledAppsWithBackupManager:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)configureAlertMessageOfType:(unsigned long long)arg1 AndTitleForBackUpDisabledApps:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)shouldIgnoreBundleId:(id)arg1 ;
+(BOOL)isiCloudPhotosEnabled;
+(BOOL)isDomainNameIgnored:(id)arg1 ;
+(id)displayNameForDomainInfo:(id)arg1 ;
+(BOOL)hasValidDisplayNameOfDomain:(id)arg1 ;
+(id)alertTitleForBackupDisabledAppsInfo:(id)arg1 ;
+(id)alertBodyForBackupDisabledAppsInfo:(id)arg1 ofType:(unsigned long long)arg2 ;
+(id)bundleIdForDomainInfo:(id)arg1 ;
@end
