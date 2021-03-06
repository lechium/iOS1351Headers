//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSTouchDeliveryObservationService_IPC-Protocol.h"

@class BKTouchDeliveryObservationServiceListener, BSMutableIntegerMap, NSMutableDictionary, NSMutableIndexSet, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchDeliveryObservationManager : NSObject <BKSTouchDeliveryObservationService_IPC>
{
    BKTouchDeliveryObservationServiceListener *_serviceListener;	// 8 = 0x8
    BSMutableIntegerMap *_touchIdentifierToPIDs;	// 16 = 0x10
    NSMutableIndexSet *_globalTouchObserverPIDs;	// 24 = 0x18
    BSMutableIntegerMap *_pidToConnections;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableDictionary *_displayUUIDToStatisticsLoggingObserver;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000100022a64
- (void).cxx_destruct;	// IMP=0x0000000100022308
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x0000000100022254
- (void)_queue_removeConnectionForPID:(int)arg1;	// IMP=0x0000000100022128
- (void)addConnection:(id)arg1 forPID:(int)arg2;	// IMP=0x0000000100022098
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)_queue_postUpdate:(id)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x0000000100021d38
- (oneway void)setObservesTouch:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000100021aa8
- (oneway void)setObservesAllTouches:(id)arg1;	// IMP=0x0000000100021880
- (void)noteTouchUpOccured:(unsigned int)arg1 detached:(_Bool)arg2 tapToWake:(_Bool)arg3 transducerType:(unsigned int)arg4 context:(unsigned int)arg5 displayUUID:(id)arg6 clientPort:(unsigned int)arg7 observers:(id)arg8;	// IMP=0x00000001000217bc
- (void)noteTouchDetached:(unsigned int)arg1 context:(unsigned int)arg2 clientPort:(unsigned int)arg3 observers:(id)arg4;	// IMP=0x000000010002175c
- (id)init;	// IMP=0x0000000100021640

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

