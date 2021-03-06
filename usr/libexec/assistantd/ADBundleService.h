//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

#import "ADServiceConnectionDelegate-Protocol.h"

@class ADServiceConnection, NSArray, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_group;

@interface ADBundleService : ADService <ADServiceConnectionDelegate>
{
    NSDictionary *_domains;	// 8 = 0x8
    NSDictionary *_syncKeys;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSString *_clearsDomainObjectsClassName;	// 32 = 0x20
    NSString *_maintenanceClassName;	// 40 = 0x28
    NSArray *_lockRestrictedCommands;	// 48 = 0x30
    _Bool _connectionNeedsContextCleared;	// 56 = 0x38
    ADServiceConnection *_connection;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_group;	// 72 = 0x48
}

+ (id)requiredInfoDictionaryKeys;	// IMP=0x00000001001b6024
- (void).cxx_destruct;	// IMP=0x00000001001b81e0
- (void)serviceConnectionTimedoutForSync;	// IMP=0x00000001001b8198
- (void)reload;	// IMP=0x00000001001b8148
- (void)runMaintenanceWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b80cc
- (void)getInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b7f40
- (void)resetExternalResources;	// IMP=0x00000001001b7d00
- (void)cancelOperationsForRequestID:(id)arg1;	// IMP=0x00000001001b7cfc
- (void)fetchSyncSnapshotForInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b7c70
- (void)beginSyncForInfo:(id)arg1 chunkHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b7aac
- (void)clearDomainObjects;	// IMP=0x00000001001b7948
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b77c0
- (void)preheatDomain:(id)arg1;	// IMP=0x00000001001b7780
- (id)syncKeys;	// IMP=0x00000001001b7768
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00000001001b76cc
- (id)commandsForDomain:(id)arg1;	// IMP=0x00000001001b766c
- (id)domains;	// IMP=0x00000001001b7654
- (id)handle;	// IMP=0x00000001001b7644
- (id)initWithBundlePath:(id)arg1 infoDictionary:(id)arg2;	// IMP=0x00000001001b750c
- (id)_connection;	// IMP=0x00000001001b73bc
- (_Bool)_isValidRestrictionsDomainInfo:(id)arg1;	// IMP=0x00000001001b711c
- (void)_parseInfoDictionary:(id)arg1;	// IMP=0x00000001001b6144
- (id)lockRestrictedCommands;	// IMP=0x00000001001b6014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

