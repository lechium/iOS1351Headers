//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ACXLaunchServicesWatcher : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 8 = 0x8
    NSUUID *_ourDBUUID;	// 16 = 0x10
    unsigned long long _lastSequenceNumber;	// 24 = 0x18
    NSUUID *_lastLSUUID;	// 32 = 0x20
    NSMutableDictionary *_appList;	// 40 = 0x28
    NSMutableArray *_eventQueue;	// 48 = 0x30
    unsigned long long _eventQueueStartSequenceNumber;	// 56 = 0x38
}

+ (id)sharedWatcher;	// IMP=0x0000000100037ae0
- (void).cxx_destruct;	// IMP=0x000000010003d27c
@property(nonatomic) unsigned long long eventQueueStartSequenceNumber; // @synthesize eventQueueStartSequenceNumber=_eventQueueStartSequenceNumber;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) NSMutableDictionary *appList; // @synthesize appList=_appList;
@property(retain, nonatomic) NSUUID *lastLSUUID; // @synthesize lastLSUUID=_lastLSUUID;
@property(nonatomic) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property(retain, nonatomic) NSUUID *ourDBUUID; // @synthesize ourDBUUID=_ourDBUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000010003d1f8
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000010003d1ec
- (void)applicationsUninstalledWithAppProxies:(id)arg1;	// IMP=0x000000010003cc68
- (void)applicationsInstalledWithAppProxies:(id)arg1;	// IMP=0x000000010003c2e8
- (void)_onQueue_reSyncWithLS;	// IMP=0x000000010003b5f0
- (void)_onQueue_noteNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 forDBUUID:(id)arg4 endingSequenceNumber:(unsigned long long)arg5;	// IMP=0x000000010003b4f4
- (void)_onQueue_noteDatabaseRebuild;	// IMP=0x000000010003b48c
- (id)allInstalledBundleIDsInDatabaseWithUUID:(id *)arg1 lastSequenceNumber:(unsigned long long *)arg2;	// IMP=0x000000010003b1a4
- (void)fetchDatabaseUUID:(id *)arg1 andCurrentLastSequenceNumber:(unsigned long long *)arg2;	// IMP=0x000000010003af78
- (void)enumerateApplicationEventsReturningDBUUID:(id *)arg1 startingSequenceNumber:(unsigned long long *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010003ac38
- (_Bool)clearApplicationEventsForDBUUID:(id)arg1 endingSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000010003aa04
- (_Bool)_onQueue_clearApplicationEventsForDBUUID:(id)arg1 endingSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000010003a628
- (void)_onQueue_addAppEvent:(id)arg1;	// IMP=0x000000010003a3c0
- (_Bool)enumerateApplicationsForBundleIDs:(id)arg1 currentDBUUID:(id *)arg2 currentLastSequenceNumber:(unsigned long long *)arg3 error:(id *)arg4 enumerator:(CDUnknownBlockType)arg5;	// IMP=0x0000000100039fac
- (_Bool)_onQueue_enumerateApplicationsForBundleIDs:(id)arg1 error:(id *)arg2 enumerator:(CDUnknownBlockType)arg3;	// IMP=0x0000000100039c80
- (id)applicationsForAppProxies:(id)arg1 currentDBUUID:(id *)arg2 currentLastSequenceNumber:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x00000001000398cc
- (id)applicationForAppProxy:(id)arg1 currentLastSequenceNumber:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00000001000395c8
- (id)_onQueue_applicationForAppProxy:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003929c
- (_Bool)_onQueue_infoMatchesCurrentLSDatabaseWithUUID:(id *)arg1;	// IMP=0x00000001000390a0
- (void)_onQueue_writeAppListToDisk;	// IMP=0x0000000100038ac4
- (id)init;	// IMP=0x0000000100037b4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

