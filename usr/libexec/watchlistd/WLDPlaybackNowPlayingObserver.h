//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WLDXPCTransactionScope, WLKPlaybackSummary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WLDPlaybackNowPlayingObserver : NSObject
{
    _Bool _isObserving;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_lookupQueue;	// 24 = 0x18
    WLKPlaybackSummary *_lastSummary;	// 32 = 0x20
    WLDXPCTransactionScope *_transaction;	// 40 = 0x28
    CDUnknownBlockType _updateHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010001d848
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (_Bool)_isSummary:(id)arg1 signifantChangeFromSummary:(id)arg2;	// IMP=0x000000010001d4f4
- (void)_updateWithInfo:(id)arg1;	// IMP=0x000000010001d448
- (void)_updateTransactionState;	// IMP=0x000000010001d238
- (id)_unsupportedMediaTypes;	// IMP=0x000000010001d150
- (id)_nowPlayingSummaryWithError:(id *)arg1;	// IMP=0x000000010001cd8c
- (_Bool)_nowPlayingAppIsPlaying;	// IMP=0x000000010001cc7c
- (id)_nowPlayingBundleID;	// IMP=0x000000010001cb14
- (void)_nowPlayingInfoDidChangeNotification:(id)arg1;	// IMP=0x000000010001c994
- (void)_nowPlayingAppIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x000000010001c988
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;	// IMP=0x000000010001c97c
- (id)nowPlayingSummary;	// IMP=0x000000010001c96c
- (void)stopObserving;	// IMP=0x000000010001c8f4
- (void)startObserving;	// IMP=0x000000010001c740
- (void)dealloc;	// IMP=0x000000010001c6f4
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c628

@end
