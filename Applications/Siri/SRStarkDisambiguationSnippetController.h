//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SRStarkTableViewController.h"

#import "SRStarkItemController-Protocol.h"
#import "SRStarkTableViewControllerDelegate-Protocol.h"

@class AFAnalyticsTurnBasedInstrumentationContext, NSMutableDictionary, NSString, NSTimer, NSUUID, SAUIListItem;
@protocol SRStarkDisambiguationSnippetControllerDelegate;

@interface SRStarkDisambiguationSnippetController : SRStarkTableViewController <SRStarkTableViewControllerDelegate, SRStarkItemController>
{
    unsigned long long _preferredListItemIndex;	// 8 = 0x8
    SAUIListItem *_preferredListItem;	// 16 = 0x10
    _Bool _isGroup;	// 24 = 0x18
    NSMutableDictionary *_groupNameMapping;	// 32 = 0x20
    _Bool _isIdle;	// 40 = 0x28
    NSUUID *_conversationItemIdentifier;	// 48 = 0x30
    id <SRStarkDisambiguationSnippetControllerDelegate> _delegate;	// 56 = 0x38
    NSString *_disambiguationKey;	// 64 = 0x40
    NSTimer *_idleTimer;	// 72 = 0x48
    AFAnalyticsTurnBasedInstrumentationContext *_turnContext;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010002e310
@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *turnContext; // @synthesize turnContext=_turnContext;
@property(retain, nonatomic, getter=_idleTimer) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic, getter=_isIdle) _Bool isIdle; // @synthesize isIdle=_isIdle;
@property(copy, nonatomic, getter=_disambiguationKey) NSString *disambiguationKey; // @synthesize disambiguationKey=_disambiguationKey;
@property(nonatomic) __weak id <SRStarkDisambiguationSnippetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010002e1c4
- (id)backgroundColorForTableViewCells;	// IMP=0x000000010002e168
- (id)_disambiguationAttributedString:(id)arg1 boldedRange:(struct _NSRange)arg2;	// IMP=0x000000010002dfe0
- (void)didPressShowMore;	// IMP=0x000000010002de28
- (void)didPressItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000010002dc0c
- (id)newShowMoreCellWithIdentifier:(id)arg1;	// IMP=0x000000010002dbb4
- (Class)showMoreCellClass;	// IMP=0x000000010002dba8
- (void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010002d828
- (id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010002d7d4
- (id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000010002d7c8
- (id)tableCellIdentifiersAndClasses;	// IMP=0x000000010002d748
- (void)siriDidEndSpeechRecording;	// IMP=0x000000010002d73c
- (void)siriDidStartSpeechRecording;	// IMP=0x000000010002d708
- (void)siriDidFinishSpeakingWithIdentifier:(id)arg1;	// IMP=0x000000010002d6f4
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x000000010002d6c0
- (_Bool)isActive;	// IMP=0x000000010002d6a0
- (long long)preferredUserInterfaceStyle;	// IMP=0x000000010002d698
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010002d63c
- (void)_createNewIdleTimer;	// IMP=0x000000010002d4dc
- (void)_resetIdleTimer;	// IMP=0x000000010002d414
- (void)_cancelIdleTimer;	// IMP=0x000000010002d30c
- (void)_idleTimerFired:(id)arg1;	// IMP=0x000000010002d23c
- (void)autodisambiguate;	// IMP=0x000000010002d210
- (_Bool)shouldAutodisambiguate;	// IMP=0x000000010002d1f8
- (id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 turnContext:(id)arg3;	// IMP=0x000000010002cb0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(readonly) Class superclass;

@end

