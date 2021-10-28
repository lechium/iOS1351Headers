//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSSet, NSTimer;
@protocol OS_dispatch_queue;

@interface FMFXPCSessionManager : NSObject
{
    NSMapTable *_internalClientSessions;	// 8 = 0x8
    NSTimer *_refreshTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010003ce44
- (void).cxx_destruct;	// IMP=0x000000010003f2ec
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) NSMapTable *internalClientSessions; // @synthesize internalClientSessions=_internalClientSessions;
- (void)networkReachabilityUpdated:(id)arg1;	// IMP=0x000000010003f100
- (void)stopListeningForModelLoadNotifications;	// IMP=0x000000010003f0a0
- (void)startListeningForModelChangeNotifications;	// IMP=0x000000010003f038
- (void)stopListeningForNotifications;	// IMP=0x000000010003f02c
- (void)startListeningForNotifications;	// IMP=0x000000010003f020
- (void)_modelDataDidLoad;	// IMP=0x000000010003ee94
- (_Bool)_isApplicationForClientSessionInForeground:(id)arg1;	// IMP=0x000000010003ede4
- (void)refreshLocations;	// IMP=0x000000010003e384
- (id)handlesToLocate;	// IMP=0x000000010003e104
- (void)stopTimer;	// IMP=0x000000010003e028
- (void)scheduleRefreshBefore:(double)arg1;	// IMP=0x000000010003de08
- (void)refreshLocationsForSession:(id)arg1;	// IMP=0x000000010003db5c
- (void)resetRefreshTimer;	// IMP=0x000000010003db48
- (void)updateTrackingTimestampForHandle:(id)arg1 timestamp:(id)arg2;	// IMP=0x000000010003d8ec
@property(readonly, nonatomic) NSSet *clientSessions;
- (void)removeClientSession:(id)arg1;	// IMP=0x000000010003d4b8
- (void)addClientSession:(id)arg1;	// IMP=0x000000010003d188
- (void)invalidateMaxCallbackTimer;	// IMP=0x000000010003d108
- (void)dealloc;	// IMP=0x000000010003d080
- (id)init;	// IMP=0x000000010003cfbc

@end
