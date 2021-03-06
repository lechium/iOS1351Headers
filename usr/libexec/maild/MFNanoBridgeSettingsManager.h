//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NPSManager, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MFNanoBridgeSettingsManager : NSObject
{
    NPSManager *_syncManager;	// 8 = 0x8
    NPSDomainAccessor *_domainAccessor;	// 16 = 0x10
    NSMutableDictionary *_mailboxUidById;	// 24 = 0x18
    NSMutableDictionary *_accountByMailboxId;	// 32 = 0x20
    NSArray *_activeAccounts;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000001000aee28
- (void).cxx_destruct;	// IMP=0x00000001000b23e4
@property(readonly, nonatomic) NSArray *activeAccounts; // @synthesize activeAccounts=_activeAccounts;
- (id)domainAccessor;	// IMP=0x00000001000b2378
- (id)_loadAccounts;	// IMP=0x00000001000b207c
- (void)_handlePairedDeviceChanged;	// IMP=0x00000001000b206c
- (void)_handleDidUnpair;	// IMP=0x00000001000b205c
- (id)readFromSharedPreferencesValueForKey:(id)arg1;	// IMP=0x00000001000b2024
- (void)_saveValueToSharedPreference:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000b1f74
- (void)_setValue:(id)arg1 forKey:(id)arg2 syncWithClient:(_Bool)arg3 perGizmo:(_Bool)arg4;	// IMP=0x00000001000b1afc
- (void)_setValue:(id)arg1 forKey:(id)arg2 syncWithClient:(_Bool)arg3;	// IMP=0x00000001000b1a88
- (id)_getValueForKey:(id)arg1 perGizmo:(_Bool)arg2;	// IMP=0x00000001000b1974
- (id)_getValueForKey:(id)arg1;	// IMP=0x00000001000b194c
- (id)_mobileMailSwipeRightAction;	// IMP=0x00000001000b18cc
- (_Bool)_mobileMailOrganizeByThread;	// IMP=0x00000001000b1810
- (_Bool)_mobileMailLoadRemoteImages;	// IMP=0x00000001000b1754
- (_Bool)_mobileMailAskBeforeDeleting;	// IMP=0x00000001000b1698
- (void)_setSignature:(id)arg1;	// IMP=0x00000001000b1600
- (void)_setSwipeRightAction:(id)arg1;	// IMP=0x00000001000b1564
- (void)_setOrganizeByThread:(_Bool)arg1;	// IMP=0x00000001000b14b8
- (void)_setLoadRemoteImages:(_Bool)arg1;	// IMP=0x00000001000b140c
- (void)_setAskBeforeDeleting:(_Bool)arg1;	// IMP=0x00000001000b1360
- (void)_setLinesOfPreview:(unsigned long long)arg1;	// IMP=0x00000001000b12b4
- (id)_mailboxSelectionFromPreviousOSVersion;	// IMP=0x00000001000b11cc
- (id)_includeMailMailboxesFromDisk;	// IMP=0x00000001000b10bc
- (void)_setIncludeMailMailboxes:(id)arg1;	// IMP=0x00000001000b1034
- (id)_signature;	// IMP=0x00000001000b0ebc
- (id)_swipeRightAction;	// IMP=0x00000001000b0e08
- (_Bool)_organizeByThread;	// IMP=0x00000001000b0d30
- (_Bool)_loadRemoteImages;	// IMP=0x00000001000b0c58
- (_Bool)_askBeforeDeleting;	// IMP=0x00000001000b0b80
- (unsigned long long)_linesOfPreview;	// IMP=0x00000001000b0aa8
- (id)_includeMailMailbox;	// IMP=0x00000001000b04c0
- (_Bool)_mirrorSettingsFromCompanion;	// IMP=0x00000001000b04b0
- (void)reloadCachedAccounts;	// IMP=0x00000001000b045c
- (void)notifyMobileMailAccountsChanged;	// IMP=0x00000001000b00c4
- (void)notifyMobileMailSwipeRightActionChanged;	// IMP=0x00000001000b0060
- (void)notifyMobileMailOrganizeByThreadChanged;	// IMP=0x00000001000b0028
- (void)notifyMobileMailLoadRemoteImagesChanged;	// IMP=0x00000001000afff0
- (void)notifyMobileMailAskBeforeDeletingChanged;	// IMP=0x00000001000affb8
- (void)notifyMirrorSettingsFromCompanionChanged;	// IMP=0x00000001000aff54
@property(retain, nonatomic) NSString *signature;
@property(retain, nonatomic) NSString *swipeRightAction;
@property(nonatomic) _Bool organizeByThread;
@property(nonatomic) _Bool loadRemoteImages;
@property(nonatomic) _Bool askBeforeDeleting;
@property(nonatomic) unsigned long long linesOfPreview;
@property(retain, nonatomic) NSArray *includeMailMailboxes;
@property(retain, nonatomic) NSArray *accountIdentities;
@property(retain, nonatomic) NSDictionary *standaloneAccountStateByAccountId;
- (void)addSharedSettingsToArray:(id)arg1 ifFilterTypes:(unsigned long long)arg2 containsFilter:(unsigned long long)arg3;	// IMP=0x00000001000af8e0
- (void)setUpdateMailboxSelection:(id)arg1;	// IMP=0x00000001000af528
- (id)bridgeSettingsMailboxSelection;	// IMP=0x00000001000af21c
@property(readonly, nonatomic) _Bool mirrorSettingsFromCompanion;
- (void)dealloc;	// IMP=0x00000001000af0f0
- (void)updateSharedPreferences;	// IMP=0x00000001000af0ac
- (id)init;	// IMP=0x00000001000aee94

@end

