//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AXVoiceOverActivity, NSArray, NSNumber, VOTElement, VOTEvent, VOTRotor;
@protocol VOTElementUpdateProtocol;

@protocol VOTElementManagementProtocol <NSObject>
@property(nonatomic) __weak id <VOTElementUpdateProtocol> updateDelegate;
- (void)updateRotorForCurrentElement:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)updateCursorFrameAfterLift;
- (_Bool)isItemChooserVisible;
- (double)lastScreenChangeNotificationTime;
- (VOTRotor *)elementRotor;
- (void)moveToElementMatchingRotorType:(long long)arg1 inDirection:(long long)arg2;
- (NSArray *)currentApplications;
- (VOTElement *)currentElement;
- (void)systemServerDied;
- (_Bool)shouldSnarfCrown;
- (_Bool)isReadingAll;
- (_Bool)shouldAllowSpeaking;
- (void)updateApplicationAndSpeak:(NSNumber *)arg1;
- (long long)modifierKeyChoiceForElement:(VOTElement *)arg1;
- (_Bool)speakTableRowAndColumnForElement:(VOTElement *)arg1;
- (_Bool)speakTableHeadersForElement:(VOTElement *)arg1;
- (AXVoiceOverActivity *)determineActivityForElement:(VOTElement *)arg1;
- (void)voiceOverDidRegisterWithSystem;
- (struct CGRect)currentLineFrame;
- (void)updateCurrentElementFrame;
- (_Bool)allowsSystemControlEventForPosition:(int)arg1;
- (void)handleReachabilityToggled;
- (_Bool)handleTVMenuButtonClicked;
- (_Bool)handleTVSelectButtonClicked;
- (void)handlePlayPauseButtonPress;
- (void)handleStateReset;
- (void)handleHomeButtonPress;
- (void)updateNavigationModeForClassicRemote;
- (void)handleNotification:(int)arg1 withData:(id)arg2 forElement:(VOTElement *)arg3;
- (void)handleEvent:(VOTEvent *)arg1;
@end

