//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MBIgnoredAccountsTracker, NSString;

@interface MBMobileInstallation : NSObject
{
    NSString *_safeHarborDir;	// 8 = 0x8
    NSString *_errorString;	// 16 = 0x10
    MBIgnoredAccountsTracker *_accountsTracker;	// 24 = 0x18
    _Bool _shouldIgnoreEnterpriseApps;	// 32 = 0x20
}

+ (id)displayNameForDomain:(id)arg1;	// IMP=0x000000010011c4cc
+ (id)displayNameForBundleIdentifier:(id)arg1;	// IMP=0x000000010011c43c
@property _Bool shouldIgnoreEnterpriseApps; // @synthesize shouldIgnoreEnterpriseApps=_shouldIgnoreEnterpriseApps;
@property(retain, nonatomic) NSString *safeHarborDir; // @synthesize safeHarborDir=_safeHarborDir;
- (_Bool)removeSafeHarbordWithIdentifier:(id)arg1 type:(int)arg2 error:(id *)arg3;	// IMP=0x000000010011c2d8
- (_Bool)registerSafeHarborWithIdentifier:(id)arg1 path:(id)arg2 type:(int)arg3 error:(id *)arg4;	// IMP=0x000000010011c16c
- (id)safeHarborsWithError:(id *)arg1;	// IMP=0x000000010011c10c
- (_Bool)uninstallAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x000000010011c074
- (_Bool)processRestoredApp:(id)arg1 error:(id *)arg2;	// IMP=0x000000010011be80
- (_Bool)processRestoredContainerWithIdentifier:(id)arg1 type:(int)arg2 error:(id *)arg3;	// IMP=0x000000010011bb84
- (id)defaultSubdirectoriesForMBContainerType:(int)arg1 withNestedSubdirectories:(_Bool)arg2;	// IMP=0x000000010011b874
- (id)_defaultSubdirectoriesForMCMContainerType:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x000000010011b714
- (unsigned long long)_containerClassForMBContainerType:(int)arg1;	// IMP=0x000000010011b6f0
- (id)systemSharedContainersWithError:(id *)arg1;	// IMP=0x000000010011b660
- (id)systemContainersWithError:(id *)arg1;	// IMP=0x000000010011b5d0
- (id)_systemContainersWithError:(id *)arg1 shared:(_Bool)arg2;	// IMP=0x000000010011b208
- (id)systemPluginsWithError:(id *)arg1;	// IMP=0x000000010011aa24
- (id)userAppWithBundleID:(id)arg1 placeholder:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010011a9a8
- (id)userAppsWithError:(id *)arg1;	// IMP=0x00000001001194a0
@property(readonly, nonatomic) MBIgnoredAccountsTracker *accountsTracker;
- (void)dealloc;	// IMP=0x00000001001193e4
- (id)initWithSafeHarborDir:(id)arg1;	// IMP=0x00000001001193a4
- (id)init;	// IMP=0x0000000100119368

@end
