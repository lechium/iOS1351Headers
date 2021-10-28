//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DADeviceObserver-Protocol.h"
#import "HMHomeDelegatePrivate-Protocol.h"
#import "HMHomeManagerDelegate-Protocol.h"

@class HMHomeManager, NSCondition, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface DADeviceObserverHomePod : NSObject <HMHomeManagerDelegate, HMHomeDelegatePrivate, DADeviceObserver>
{
    _Bool _isObserving;	// 8 = 0x8
    _Bool _firstResponseSent;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_homePodObservationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_homePodRegistrationQueue;	// 24 = 0x18
    NSMutableDictionary *_handlers;	// 32 = 0x20
    NSCondition *_firstResponseLock;	// 40 = 0x28
    NSMutableSet *_devices;	// 48 = 0x30
    HMHomeManager *_homeManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100021188
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSMutableSet *devices; // @synthesize devices=_devices;
@property(nonatomic) _Bool firstResponseSent; // @synthesize firstResponseSent=_firstResponseSent;
@property(retain, nonatomic) NSCondition *firstResponseLock; // @synthesize firstResponseLock=_firstResponseLock;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *homePodRegistrationQueue; // @synthesize homePodRegistrationQueue=_homePodRegistrationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *homePodObservationQueue; // @synthesize homePodObservationQueue=_homePodObservationQueue;
- (void)_updateHandlers;	// IMP=0x0000000100020ea4
- (void)_endObserving;	// IMP=0x0000000100020df8
- (void)_beginObserving;	// IMP=0x0000000100020d54
- (void)_waitUntilFirstResponse;	// IMP=0x0000000100020c68
- (id)_createHomePodDeviceWithAccessory:(id)arg1;	// IMP=0x0000000100020b9c
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x0000000100020afc
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x0000000100020a58
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x00000001000208d0
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x0000000100020748
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x00000001000203ac
- (void)endDiscoveringDevicesWithIdentifier:(id)arg1;	// IMP=0x00000001000202b0
- (id)beginDiscoveringDevicesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020188
- (void)discoverAllDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020068
- (id)init;	// IMP=0x000000010001ff68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
