//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CKContextCompleter, NSArray, NSMapTable, NSString, TopHitCompletionPromotionRecognizer, TopHitCompletionView, UIColor;
@protocol CompletionItem, UnifiedFieldDelegate;

@interface UnifiedField : UITextField <UIGestureRecognizerDelegate>
{
    _Bool _lastEditWasADeletion;	// 8 = 0x8
    NSString *_pendingTopHitNavigationText;	// 16 = 0x10
    id <CompletionItem> _topHit;	// 24 = 0x18
    TopHitCompletionView *_topHitCompletionView;	// 32 = 0x20
    TopHitCompletionPromotionRecognizer *_topHitCompletionPromotionRecognizer;	// 40 = 0x28
    NSArray *_keyCommands;	// 48 = 0x30
    NSMapTable *_keyCommandActions;	// 56 = 0x38
    NSString *_userTypedText;	// 64 = 0x40
    _Bool _didInitializeMenuItems;	// 72 = 0x48
    _Bool _pastingText;	// 73 = 0x49
    _Bool _lastInputWasQuerySuggestion;	// 74 = 0x4a
    _Bool _hasSelectedQuerySuggestion;	// 75 = 0x4b
    id <CompletionItem> _reflectedItem;	// 80 = 0x50
    NSArray *_querySuggestions;	// 88 = 0x58
    CKContextCompleter *_contextCompleter;	// 96 = 0x60
}

+ (_Bool)areSiriSuggestionsEnabled;	// IMP=0x00000001000b6758
- (void).cxx_destruct;	// IMP=0x00000001000b9e30
@property(retain, nonatomic) CKContextCompleter *contextCompleter; // @synthesize contextCompleter=_contextCompleter;
@property(readonly, nonatomic) _Bool hasSelectedQuerySuggestion; // @synthesize hasSelectedQuerySuggestion=_hasSelectedQuerySuggestion;
@property(readonly, nonatomic) _Bool lastInputWasQuerySuggestion; // @synthesize lastInputWasQuerySuggestion=_lastInputWasQuerySuggestion;
@property(readonly, nonatomic) NSArray *querySuggestions; // @synthesize querySuggestions=_querySuggestions;
@property(readonly, nonatomic, getter=isPastingText) _Bool pastingText; // @synthesize pastingText=_pastingText;
@property(retain, nonatomic) id <CompletionItem> reflectedItem; // @synthesize reflectedItem=_reflectedItem;
- (_Bool)_updateQuerySuggestionsMatchingText:(id)arg1;	// IMP=0x00000001000b9a78
- (void)updateQuerySuggestionsFromUserTypedText;	// IMP=0x00000001000b9a60
- (void)selectAll:(id)arg1;	// IMP=0x00000001000b99e8
- (void)insertTextSuggestion:(id)arg1;	// IMP=0x00000001000b97d0
- (void)_keyPressed:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000001000b96f4
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000001000b9524
- (id)keyCommands;	// IMP=0x00000001000b91f8
- (void)clearUserTypedText;	// IMP=0x00000001000b918c
- (void)focusAndInsertCursorAtEnd;	// IMP=0x00000001000b90d8
- (_Bool)becomeFirstResponder;	// IMP=0x00000001000b8fc4
- (_Bool)resignFirstResponder;	// IMP=0x00000001000b8f64
- (void)layoutSubviews;	// IMP=0x00000001000b8e64
- (struct CGRect)editRect;	// IMP=0x00000001000b8dc0
@property(readonly, nonatomic) double placeholderHorizontalInset;
- (void)_layoutTopHitCompletionView;	// IMP=0x00000001000b873c
- (void)topHitDidBecomeReady;	// IMP=0x00000001000b8624
- (void)_setReflectedItem:(id)arg1 updateUserTypedPrefix:(_Bool)arg2;	// IMP=0x00000001000b81cc
- (void)_restoreUserTypedText;	// IMP=0x00000001000b8138
- (void)_setTopHit:(id)arg1;	// IMP=0x00000001000b80a4
- (void)_promoteCompletionToSelection:(_Bool)arg1 andMoveForward:(_Bool)arg2;	// IMP=0x00000001000b7e14
- (void)_promoteCompletionToSelection;	// IMP=0x00000001000b7e00
- (void)_moveLeft;	// IMP=0x00000001000b7dd8
- (void)_moveRight;	// IMP=0x00000001000b7db0
- (id)_reflectedItemCompletionString;	// IMP=0x00000001000b7cec
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000001000b7c98
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000001000b7c20
- (void)_removeTopHitCompletionView;	// IMP=0x00000001000b7b14
- (void)cut:(id)arg1;	// IMP=0x00000001000b7a54
- (void)copy:(id)arg1;	// IMP=0x00000001000b79e8
- (id)_textForPasteboard;	// IMP=0x00000001000b7828
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;	// IMP=0x00000001000b7770
- (void)setAttributedText:(id)arg1;	// IMP=0x00000001000b7720
- (void)setText:(id)arg1;	// IMP=0x00000001000b76d0
- (_Bool)keyboardInputShouldDelete:(id)arg1;	// IMP=0x00000001000b75b4
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;	// IMP=0x00000001000b7440
- (void)_cancelPendingTopHitNavigation;	// IMP=0x00000001000b7428
- (id)_topHitForCurrentText;	// IMP=0x00000001000b7380
- (_Bool)_waitingForTopHitForCurrentText;	// IMP=0x00000001000b72e0
- (void)_textDidChangeFromTyping;	// IMP=0x00000001000b70e8
- (void)_updateReturnKey;	// IMP=0x00000001000b7014
- (void)_endEditingWithCurrentText;	// IMP=0x00000001000b6e58
- (unsigned long long)_unifiedFieldInputType;	// IMP=0x00000001000b6dfc
- (id)_textWithoutWhitespace;	// IMP=0x00000001000b6d70
- (id)_clearButtonImageForState:(unsigned long long)arg1;	// IMP=0x00000001000b6c74
@property(copy, nonatomic) UIColor *placeholderColor;
- (_Bool)_hasContent;	// IMP=0x00000001000b6afc
- (void)pasteAndNavigate:(id)arg1;	// IMP=0x00000001000b6ab4
- (void)_handlePasteboardChangedNotification:(id)arg1;	// IMP=0x00000001000b6a4c
- (void)_updateMenuItems;	// IMP=0x00000001000b693c
- (void)paste:(id)arg1;	// IMP=0x00000001000b68f8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b67d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UnifiedFieldDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
