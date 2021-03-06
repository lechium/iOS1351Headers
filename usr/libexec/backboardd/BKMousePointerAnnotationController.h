//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKMousePointerLifecycleObserver-Protocol.h"
#import "BSInvalidatable-Protocol.h"

@class BKDisplayAnnotationController, CADisplay, NSString;

@interface BKMousePointerAnnotationController : NSObject <BKMousePointerLifecycleObserver, BSInvalidatable>
{
    double _startTime;	// 8 = 0x8
    long long _inputEventsPerSecond;	// 16 = 0x10
    long long _outputEventsPerSecond;	// 24 = 0x18
    CADisplay *_currentDisplay;	// 32 = 0x20
    BKDisplayAnnotationController *_currentAnnotationController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010004f8c0
@property(retain, nonatomic) BKDisplayAnnotationController *currentAnnotationController; // @synthesize currentAnnotationController=_currentAnnotationController;
@property(retain, nonatomic) CADisplay *currentDisplay; // @synthesize currentDisplay=_currentDisplay;
- (id)_stringDescribingContextID:(unsigned int)arg1 pid:(int)arg2;	// IMP=0x000000010004f77c
- (void)observeMouseAvailableDevicesDidChange:(id)arg1;	// IMP=0x000000010004f72c
- (void)observeMouseTouchCountDidChange:(long long)arg1;	// IMP=0x000000010004f64c
- (void)observeMouseButtonMaskDidChange:(unsigned int)arg1;	// IMP=0x000000010004f40c
- (void)observeMouseDidExitContextID:(unsigned int)arg1 pid:(int)arg2;	// IMP=0x000000010004f3a4
- (void)observeMouseDidEnterContextID:(unsigned int)arg1 pid:(int)arg2;	// IMP=0x000000010004f294
- (void)observeMouseScrollPhaseDidChange:(unsigned short)arg1;	// IMP=0x000000010004f198
- (void)observeMouseModelPointDidChange:(struct CGPoint)arg1 display:(id)arg2;	// IMP=0x000000010004eed0
- (void)observeMouseRelativePointDidChange:(struct CGPoint)arg1;	// IMP=0x000000010004ede8
- (void)didPostEvent;	// IMP=0x000000010004edd0
- (void)didReceiveEventFromDevice;	// IMP=0x000000010004edb8
- (void)_updateEventsPerSecond;	// IMP=0x000000010004eca8
- (void)invalidate;	// IMP=0x000000010004ec60
- (void)dealloc;	// IMP=0x000000010004eb6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

