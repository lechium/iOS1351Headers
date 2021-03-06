//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACXRemoteApplication.h"

#import "ACXSyncedApp-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class ACXApplicationStatus, NSArray, NSString, NSURL, NSUUID;

@interface ACXApplication : ACXRemoteApplication <ACXSyncedApp, NSSecureCoding, NSCopying>
{
    _Bool _isTrusted;	// 8 = 0x8
    _Bool _isPurchasedReDownload;	// 9 = 0x9
    _Bool _isEmbeddedPlaceholder;	// 10 = 0xa
    NSURL *_watchAppURL;	// 16 = 0x10
    unsigned long long _lsSequenceNumber;	// 24 = 0x18
    NSArray *_clockFaceExtensionPaths;	// 32 = 0x20
    NSURL *_companionAppURL;	// 40 = 0x28
    NSString *_companionAppName;	// 48 = 0x30
    NSString *_sourceAppIdentifier;	// 56 = 0x38
    ACXApplicationStatus *_deviceStatus;	// 64 = 0x40
    unsigned long long _autoInstallOverride;	// 72 = 0x48
}

+ (id)gizmoApplicationsFromCompanionAppProxy:(id)arg1 databaseUUID:(id)arg2 startingSequenceNumber:(unsigned long long)arg3;	// IMP=0x000000010004f218
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010004d0a8
- (void).cxx_destruct;	// IMP=0x0000000100053510
@property(readonly, nonatomic) unsigned long long autoInstallOverride; // @synthesize autoInstallOverride=_autoInstallOverride;
@property(copy, nonatomic) ACXApplicationStatus *deviceStatus; // @synthesize deviceStatus=_deviceStatus;
@property(readonly, nonatomic) _Bool isEmbeddedPlaceholder; // @synthesize isEmbeddedPlaceholder=_isEmbeddedPlaceholder;
@property(readonly, nonatomic) _Bool isPurchasedReDownload; // @synthesize isPurchasedReDownload=_isPurchasedReDownload;
@property(readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property(readonly, copy, nonatomic) NSString *companionAppName; // @synthesize companionAppName=_companionAppName;
@property(readonly, nonatomic) NSURL *companionAppURL; // @synthesize companionAppURL=_companionAppURL;
@property(readonly, nonatomic) _Bool isTrusted; // @synthesize isTrusted=_isTrusted;
@property(readonly, copy, nonatomic) NSArray *clockFaceExtensionPaths; // @synthesize clockFaceExtensionPaths=_clockFaceExtensionPaths;
@property(readonly, nonatomic) unsigned long long lsSequenceNumber; // @synthesize lsSequenceNumber=_lsSequenceNumber;
@property(readonly, nonatomic) NSURL *watchAppURL; // @synthesize watchAppURL=_watchAppURL;
- (id)_localizedAppNameFromProxy:(id)arg1;	// IMP=0x0000000100053358
- (id)_storeMetadataWithError:(id *)arg1;	// IMP=0x0000000100053260
- (id)_watchKitApplicationNameFromWKAppInfoPlist:(id)arg1 containerProxy:(id)arg2;	// IMP=0x000000010005303c
- (id)_URLsOfExtensionsInBundleURL:(id)arg1 mayNotExist:(_Bool)arg2;	// IMP=0x0000000100052e8c
- (id)_mostCurrentWKAppURLInCompanionAppProxy:(id)arg1 versionFound:(id *)arg2 isPlaceholder:(_Bool *)arg3;	// IMP=0x0000000100052a78
- (id)_URLOfFirstItemWithExtension:(id)arg1 inDirectory:(id)arg2;	// IMP=0x000000010005284c
- (id)_infoPlistForPluginBundle:(id)arg1;	// IMP=0x0000000100052498
- (_Bool)_systemTrustsApplicationWithBundleURL:(id)arg1;	// IMP=0x0000000100052350
- (id)appWithReEvaluatedTrust;	// IMP=0x000000010005225c
- (id)initWithApplicationProxy:(id)arg1 gizmoBundleIdentifier:(id)arg2 databaseUUID:(id)arg3 sequenceNumber:(unsigned long long)arg4;	// IMP=0x000000010004f554
- (id)initWithApplicationProxy:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;	// IMP=0x000000010004f4ec
- (void)_populateStoreMetadata;	// IMP=0x000000010004f048
- (id)_buildLocalizedInfoPlistStringsDictForAppBundleURL:(id)arg1 watchKitExtensionURL:(id)arg2;	// IMP=0x000000010004eaec
- (id)_parseArchitectureSlicesForWatchKitAppBundleURL:(id)arg1 executableName:(id)arg2;	// IMP=0x000000010004e858
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004e4d8
- (id)serializeAsRemoteApplication;	// IMP=0x000000010004e4a4
- (id)serialize;	// IMP=0x000000010004e0c8
- (id)initWithSerializedDictionary:(id)arg1;	// IMP=0x000000010004d7f0
- (id)initWithBundleID:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;	// IMP=0x000000010004d778
- (id)init;	// IMP=0x000000010004d744
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010004d4c4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010004d0b0
- (long long)exportedAppStateForDeviceState:(id)arg1;	// IMP=0x000000010005c9d8
- (id)externalComplicationDictionaryRepresentationForDeviceState:(id)arg1;	// IMP=0x000000010005c7bc
- (id)externalApplicationDictionaryRepresentationForDeviceState:(id)arg1;	// IMP=0x000000010005c178

// Remaining properties
@property(readonly, nonatomic) unsigned long long applicationType;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSArray *counterpartIdentifiers;
@property(readonly, nonatomic) NSUUID *databaseUUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isDeletable;
@property(readonly, nonatomic) _Bool isSystemApp;
@property(readonly, nonatomic) unsigned long long sequenceNumber;
@property(readonly) Class superclass;

@end

