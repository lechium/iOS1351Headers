//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, _DUIAccessibilityDragStatus;
@protocol OS_dispatch_queue;

@interface VOTDragOutputManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _dragActive;	// 16 = 0x10
    _Bool _dragMoved;	// 17 = 0x11
    _Bool _dropReadyAnnounced;	// 18 = 0x12
    _DUIAccessibilityDragStatus *_currentStatus;	// 24 = 0x18
    AXDispatchTimer *_timer;	// 32 = 0x20
    double _lastDragMove;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000f1150
- (void)_announceDropUnready;	// IMP=0x00000001000f10f0
- (void)_announceDropReady;	// IMP=0x00000001000f1090
- (void)_announceDragCount;	// IMP=0x00000001000f0f1c
- (void)_announceDragPickup;	// IMP=0x00000001000f0ea4
- (void)dragCancelled;	// IMP=0x00000001000f0e34
- (void)dragDropped;	// IMP=0x00000001000f0d5c
- (void)currentElementChanged;	// IMP=0x00000001000f0cf0
- (void)dragEnded;	// IMP=0x00000001000f0c70
- (void)dragStatusChanged:(id)arg1;	// IMP=0x00000001000f0914
- (void)dragMoved;	// IMP=0x00000001000f07dc
- (void)dragSessionStarted;	// IMP=0x00000001000f076c
- (id)init;	// IMP=0x00000001000f06b4

@end
