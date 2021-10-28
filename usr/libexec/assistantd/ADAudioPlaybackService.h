//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRequestLifecycleListening-Protocol.h"
#import "AFAudioPlaybackService-Protocol.h"
#import "AFMemoryPressureListening-Protocol.h"
#import "CSAudioSessionControllerDelegate-Protocol.h"

@class AVAudioSession, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADAudioPlaybackService : NSObject <AFMemoryPressureListening, ADRequestLifecycleListening, CSAudioSessionControllerDelegate, AFAudioPlaybackService>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_listeners;	// 16 = 0x10
    NSMutableDictionary *_activeSessionsByRequest;	// 24 = 0x18
    NSMutableDictionary *_reusableSessionsByRequest;	// 32 = 0x20
    unsigned int _audioSessionID;	// 40 = 0x28
    AVAudioSession *_audioSession;	// 48 = 0x30
}

+ (id)sharedService;	// IMP=0x00000001001b36b0
- (void).cxx_destruct;	// IMP=0x00000001001b5de4
- (void)memoryPressureObserver:(id)arg1 didChangeFromCondition:(long long)arg2 toCondition:(long long)arg3;	// IMP=0x00000001001b5d40
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x00000001001b5bc0
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x00000001001b5a40
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x00000001001b58c0
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x00000001001b5740
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x00000001001b54a4
- (id)_audioSession;	// IMP=0x00000001001b5438
- (void)_setAudioSessionID:(unsigned int)arg1;	// IMP=0x00000001001b5414
- (unsigned int)_audioSessionID;	// IMP=0x00000001001b53b4
- (void)_evictAllReusableSessionsForReason:(id)arg1;	// IMP=0x00000001001b5250
- (void)_enumerateListenersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b5194
- (void)_invalidate;	// IMP=0x00000001001b50b4
- (void)_stopAllRequestsSynchronously;	// IMP=0x00000001001b5088
- (void)_stopAllRequests:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b4ebc
- (void)_stopRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x00000001001b4e6c
- (void)_handleFinalizationForSession:(id)arg1 error:(id)arg2;	// IMP=0x00000001001b4bc8
- (void)_handleExecutionForSession:(id)arg1;	// IMP=0x00000001001b4a54
- (void)_handlePreparationForSession:(id)arg1;	// IMP=0x00000001001b48e0
- (void)_startRequest:(id)arg1 options:(unsigned long long)arg2 preparationHandler:(CDUnknownBlockType)arg3 executionHandler:(CDUnknownBlockType)arg4 finalizationHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001b4148
- (void)_prewarmRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b3ef0
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00000001001b3eec
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00000001001b3ee8
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00000001001b3ee4
- (void)requestLifecycleObserverRequestDidEnd:(id)arg1 origin:(long long)arg2 client:(id)arg3;	// IMP=0x00000001001b3ee0
- (void)requestLifecycleObserverRequestWillBegin:(id)arg1 origin:(long long)arg2 client:(id)arg3;	// IMP=0x00000001001b3e20
- (void)stopAllRequestsSynchronously;	// IMP=0x00000001001b3db8
- (void)stopAllRequests:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b3d0c
- (void)stopRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x00000001001b3c54
- (void)startRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b3bf4
- (void)prewarmRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b3ad8
- (void)removeAllListeners;	// IMP=0x00000001001b3a6c
- (void)removeListener:(id)arg1;	// IMP=0x00000001001b39c0
- (void)addListener:(id)arg1;	// IMP=0x00000001001b3914
- (void)startRequest:(id)arg1 options:(unsigned long long)arg2 preparationHandler:(CDUnknownBlockType)arg3 executionHandler:(CDUnknownBlockType)arg4 finalizationHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001001b3728
- (id)_init;	// IMP=0x00000001001b34dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
