//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRCTargetSelectorTimer, SCRCThread;
@protocol VOTTVGestureRepeaterDelegate;

@interface VOTTVGestureRepeater : NSObject
{
    long long _currentRepeatState;	// 8 = 0x8
    unsigned long long _currentRepeatCount;	// 16 = 0x10
    _Bool _isSendingFirstRepeatEvent;	// 24 = 0x18
    id <VOTTVGestureRepeaterDelegate> _delegate;	// 32 = 0x20
    SCRCThread *_targetThread;	// 40 = 0x28
    SCRCTargetSelectorTimer *_repeaterTimer;	// 48 = 0x30
    id _selectButtonReceivedNotificationObserverToken;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100056d30
@property(retain, nonatomic) id selectButtonReceivedNotificationObserverToken; // @synthesize selectButtonReceivedNotificationObserverToken=_selectButtonReceivedNotificationObserverToken;
@property(retain, nonatomic) SCRCTargetSelectorTimer *repeaterTimer; // @synthesize repeaterTimer=_repeaterTimer;
@property(nonatomic) __weak SCRCThread *targetThread; // @synthesize targetThread=_targetThread;
@property(nonatomic) __weak id <VOTTVGestureRepeaterDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_repeatStateForEvent:(id)arg1;	// IMP=0x0000000100056c34
- (long long)_currentGestureRepeaterEvent;	// IMP=0x0000000100056c0c
- (double)_delayForCurrentRepeatCount;	// IMP=0x0000000100056c00
- (void)_handleRepeaterTimerDidFire:(id)arg1;	// IMP=0x0000000100056b00
- (void)updateWithEvent:(id)arg1;	// IMP=0x00000001000568c4
- (void)dealloc;	// IMP=0x00000001000567a0
- (id)initWithThread:(id)arg1;	// IMP=0x0000000100056540

@end
