//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKDisplayBlankingObserver-Protocol.h"
#import "BKHIDEventProcessor-Protocol.h"
#import "BKIOHIDServiceDisappearanceObserver-Protocol.h"
#import "BKIOHIDServiceMatchObserver-Protocol.h"

@class BKDisplayController, BKHIDEventDeliveryManager, BKIOHIDServiceMatcher, BKKeyboardInfo, BSCompoundAssertion, NSMutableArray, NSMutableDictionary, NSString;
@protocol BSInvalidatable;

@interface BKKeyboardHIDEventProcessor : NSObject <BKIOHIDServiceMatchObserver, BKIOHIDServiceDisappearanceObserver, BKDisplayBlankingObserver, BKHIDEventProcessor>
{
    NSMutableDictionary *_allKeyboardsBySenderID;	// 8 = 0x8
    NSMutableArray *_usableKeyboards;	// 16 = 0x10
    NSMutableArray *_eventRecognizers;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    NSString *_keyboardLayout;	// 40 = 0x28
    BSCompoundAssertion *_keyboardObserverAssertion;	// 48 = 0x30
    long long _globalActiveModifiers;	// 56 = 0x38
    id <BSInvalidatable> _displayBlankingObservationAssertion;	// 64 = 0x40
    long long _countOfKeyboardsRequiringAllSmartCoverHESDisengagedForOpen;	// 72 = 0x48
    _Bool _systemAppConsumesAllKeyboardEvents;	// 80 = 0x50
    BKIOHIDServiceMatcher *_keyboardServiceMatcher;	// 88 = 0x58
    BKHIDEventDeliveryManager *_deliveryManager;	// 96 = 0x60
    BKDisplayController *_displayController;	// 104 = 0x68
    BKKeyboardInfo *_primaryKeyboardInfo;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000010004ce58
@property(nonatomic) _Bool systemAppConsumesAllKeyboardEvents; // @synthesize systemAppConsumesAllKeyboardEvents=_systemAppConsumesAllKeyboardEvents;
@property(retain, nonatomic) BKKeyboardInfo *primaryKeyboardInfo; // @synthesize primaryKeyboardInfo=_primaryKeyboardInfo;
@property(retain, nonatomic) BKDisplayController *displayController; // @synthesize displayController=_displayController;
@property(retain, nonatomic) BKHIDEventDeliveryManager *deliveryManager; // @synthesize deliveryManager=_deliveryManager;
@property(retain, nonatomic) BKIOHIDServiceMatcher *keyboardServiceMatcher; // @synthesize keyboardServiceMatcher=_keyboardServiceMatcher;
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x000000010004cd94
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x000000010004cca0
- (void)display:(id)arg1 didBecomeBlank:(_Bool)arg2;	// IMP=0x000000010004cc4c
- (void)_lock_smartKeyboardAttachmentStateDidChange:(id)arg1;	// IMP=0x000000010004cb48
- (void)smartKeyboardAttachmentStateDidChange:(id)arg1;	// IMP=0x000000010004cae4
- (void)_lock_stopWatchingForGestures:(id)arg1;	// IMP=0x000000010004ca30
- (void)_lock_watchForGestures:(id)arg1;	// IMP=0x000000010004c824
- (void)_lock_handleKeyEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x000000010004c024
- (void)_lock_handleUnicodeEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x000000010004bc1c
- (int)_eventSourceForKeyboardInfo:(id)arg1 sender:(id)arg2;	// IMP=0x000000010004bbdc
- (id)_lock_destinationsForKeyboardEvent:(struct __IOHIDEvent *)arg1 keyboard:(id)arg2 senderInfo:(id)arg3;	// IMP=0x000000010004ba94
- (void)_lock_usableKeyboardDetached:(id)arg1;	// IMP=0x000000010004b8b8
- (void)_lock_usableKeyboardAttached:(id)arg1;	// IMP=0x000000010004b6c8
- (void)_lock_setPrimaryKeyboard:(id)arg1;	// IMP=0x000000010004b524
- (void)_lock_keyboardRemoved:(id)arg1;	// IMP=0x000000010004b270
- (void)_lock_keyboardsDetected:(id)arg1;	// IMP=0x000000010004b1e0
- (void)_lock_setKeyboardLightsSuspended:(_Bool)arg1;	// IMP=0x000000010004b094
- (_Bool)_lock_anyKeyboardHasCapsLockActive;	// IMP=0x000000010004af70
- (long long)_lock_activeModifiers;	// IMP=0x000000010004aedc
- (void)_lock_updateGlobalModifierState;	// IMP=0x000000010004ad78
@property(readonly) _Bool capsLockKeyHasLanguageSwitchLabel;
@property(getter=isCapsLockLightOn) _Bool capsLockLightOn;
- (void)setCapsLockDelayOverride:(double)arg1;	// IMP=0x000000010004ab90
- (void)setRomanCapsLockSwitchModeActive:(_Bool)arg1;	// IMP=0x000000010004aa50
- (id)primaryHardwareKeyboardLanguage;	// IMP=0x000000010004a9d8
- (id)addGlobalKeyboardObserver:(id)arg1;	// IMP=0x000000010004a910
@property(readonly) long long activeModifiers;
@property(retain) NSString *keyboardLayout;
- (long long)processEvent:(struct __IOHIDEvent *)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x000000010004a618
- (void)handleUnicodeEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x000000010004a5ac
- (int)eventSourceForSender:(id)arg1;	// IMP=0x000000010004a4c4
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x000000010004a3a8
- (id)init;	// IMP=0x000000010004a114

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

