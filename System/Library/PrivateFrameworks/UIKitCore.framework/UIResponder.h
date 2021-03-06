/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextInput_Internal.h>
#import <UIKit/UITextInputAdditions.h>
#import <UIKit/UIUserActivityRestoring.h>
#import <UIKitCore/_UIStateRestorationContinuation.h>
#import <UIKitCore/_UITouchable.h>
#import <UIKit/UIResponderStandardEditActions.h>

@class UIView, UITextInputAssistantItem, UIInputViewController, UITextInputMode, NSString, NSArray, NSUserActivity, NSUndoManager;

@interface UIResponder : NSObject <UITextInput_Internal, UITextInputAdditions, UIUserActivityRestoring, _UIStateRestorationContinuation, _UITouchable, UIResponderStandardEditActions> {

	struct {
		unsigned hasOverrideClient : 1;
		unsigned hasOverrideHost : 1;
		unsigned hasInputAssistantItem : 1;
		unsigned suppressSoftwareKeyboard : 1;
	}  _responderFlags;

}

@property (nonatomic,retain) id<UIActivityItemsConfigurationReading> activityItemsConfiguration; 
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@property (nonatomic,readonly) UIView * inputView; 
@property (nonatomic,readonly) UIView * inputAccessoryView; 
@property (nonatomic,readonly) UITextInputAssistantItem * inputAssistantItem; 
@property (nonatomic,readonly) UIInputViewController * inputViewController; 
@property (nonatomic,readonly) UIInputViewController * inputAccessoryViewController; 
@property (nonatomic,readonly) UITextInputMode * textInputMode; 
@property (nonatomic,readonly) NSString * textInputContextIdentifier; 
@property (nonatomic,readonly) NSArray * keyCommands; 
@property (nonatomic,retain) NSUserActivity * userActivity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * restorationIdentifier; 
@property (setter=_setCopyConfiguration:,nonatomic,retain) id<_UICopyConfigurationReading> _copyConfiguration; 
@property (nonatomic,readonly) UIResponder * _editingDelegate; 
@property (nonatomic,readonly) UIResponder * _responderForEditing; 
@property (nonatomic,readonly) UIResponder * nextResponder; 
@property (nonatomic,readonly) BOOL canBecomeFirstResponder; 
@property (nonatomic,readonly) BOOL canResignFirstResponder; 
@property (nonatomic,readonly) BOOL isFirstResponder; 
@property (nonatomic,readonly) NSUndoManager * undoManager; 
@property (nonatomic,readonly) long long editingInteractionConfiguration; 
+(id)objectWithRestorationIdentifierPath:(id)arg1 ;
+(void)_startDeferredTrackingObjectsWithIdentifiers;
+(void)_cleanupAllStateRestorationTables;
+(void)_updateStateRestorationIdentifierMap;
+(void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2 ;
+(void)_prepareForSecondPassStateRestoration;
+(void)_finishStateRestoration;
+(void)clearTextInputContextIdentifier:(id)arg1 ;
+(void)_stopDeferredTrackingObjectsWithIdentifiers;
+(void)_cleanupStateRestorationObjectIdentifierTrackingTables;
-(void)dealloc;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(long long)selectionAffinity;
-(BOOL)isFirstResponder;
-(id)_window;
-(UIResponder *)nextResponder;
-(BOOL)becomeFirstResponder;
-(id)firstResponder;
-(void)_windowBecameKey;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(id)_showServiceForType:(long long)arg1 withContext:(id)arg2 ;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(UIInputViewController *)inputViewController;
-(BOOL)_containsResponder:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(id)textInputView;
-(void)validateCommand:(id)arg1 ;
-(BOOL)_ownsInputAccessoryView;
-(UITextInputAssistantItem *)inputAssistantItem;
-(void)reloadInputViews;
-(BOOL)canResignFirstResponder;
-(BOOL)isEditing;
-(long long)_textInputSource;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(BOOL)_becomeFirstResponderWhenPossible;
-(void)_becomeFirstResponder;
-(void)_clearBecomeFirstResponderWhenCapable;
-(NSRange)_selectedNSRange;
-(id)_textRangeFromNSRange:(NSRange)arg1 ;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(BOOL)_range:(id)arg1 containsRange:(id)arg2 ;
-(id)_intersectionOfRange:(id)arg1 andRange:(id)arg2 ;
-(BOOL)_range:(id)arg1 intersectsRange:(id)arg2 ;
-(void)set_textInputSource:(long long)arg1 ;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_beginPinningInputViews;
-(void)_endPinningInputViews;
-(NSUserActivity *)userActivity;
-(id)_deepestUnambiguousResponder;
-(void)_didChangeDeepestUnambiguousResponder;
-(NSString *)restorationIdentifier;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(id)_responderSelectionContainerViewForResponder:(id)arg1 ;
-(id)_restorationIdentifierPath;
-(BOOL)_containedInAbsoluteResponderChain;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(id)_primaryContentResponder;
-(void)_setFirstResponder:(id)arg1 ;
-(BOOL)_finishResignFirstResponder;
-(id)_firstResponder;
-(id)_nextResponderOverride;
-(id)_responderWindow;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
-(BOOL)_canBecomeFirstResponderWhenPossible;
-(NSArray *)keyCommands;
-(BOOL)_isViewController;
-(BOOL)_canResignIfContainsFirstResponder;
-(id)_keyCommands;
-(void)_clearOverrideNextResponder;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(void)updateUserActivityState:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(BOOL)isEditable;
-(NSUndoManager *)undoManager;
-(id)_effectiveActivityItemsConfigurationForSender:(id)arg1 ;
-(UIResponder *)_responderForEditing;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(id)_effectiveActivityItemsConfiguration;
-(id<UIActivityItemsConfigurationReading>)activityItemsConfiguration;
-(id)_effectiveActivityItemsConfigurationForView:(id)arg1 location:(CGPoint)arg2 sender:(id)arg3 ;
-(void)_share:(id)arg1 ;
-(void)setActivityItemsConfiguration:(id<UIActivityItemsConfigurationReading>)arg1 ;
-(id)_firstNonnullActivityItemsConfigurationInResponderChainForView:(id)arg1 location:(CGPoint)arg2 sender:(id)arg3 responder:(id*)arg4 ;
-(BOOL)_handleActivityItemsConfigurationCanPerformAction:(SEL)arg1 sender:(id)arg2 ;
-(BOOL)_handleActivityItemsConfigurationDoesNotHandleSelector:(SEL)arg1 ;
-(BOOL)_handleActivityItemsConfigurationShare:(id)arg1 ;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(id)_keyboardResponder;
-(BOOL)_requiresKeyboardResetOnReload;
-(void)_overrideInputViewNextResponderWithResponder:(id)arg1 ;
-(UIInputViewController *)inputAccessoryViewController;
-(void)_overrideInputAccessoryViewNextResponderWithResponder:(id)arg1 ;
-(void)_tagAsRestorableResponder;
-(BOOL)_restoreFirstResponder;
-(void)_moveWithEvent:(id)arg1 ;
-(void)selectToHere:(id)arg1 ;
-(void)_lookup:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(BOOL)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2 ;
-(BOOL)_hasMarkedText;
-(BOOL)_usesAsynchronousProtocol;
-(CGRect)_selectionClipRect;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(NSString *)textInputContextIdentifier;
-(UITextInputMode *)textInputMode;
-(void)_unmarkText;
-(id)recentsAccessoryView;
-(void)_nonDestructivelyResignFirstResponder;
-(id)_proxyTextInput;
-(id)_responderSelectionImage;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(NSRange)_selectedRangeWithinMarkedText;
-(unsigned)_characterBeforeCaretSelection;
-(unsigned)_characterAfterCaretSelection;
-(id)interactionAssistant;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1 ;
-(UIView*<UITextInputPrivate>)_textSelectingContainer;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1 ;
-(id)textInputSuggestionDelegate;
-(void)_preserveResponderOverridesWhilePerforming:(/*^block*/id)arg1 ;
-(id)pasteConfiguration;
-(id)_nextKeyResponder;
-(id)_rangeFromCurrentRangeWithDelta:(NSRange)arg1 ;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfParagraph;
-(void)_transpose;
-(void)_deleteByWord;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1 ;
-(void)_extendCurrentSelection:(int)arg1 ;
-(void)_setCaretSelectionAtEndOfSelection;
-(void)_setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_setGestureRecognizers;
-(void)_replaceDocumentWithText:(id)arg1 ;
-(id)_previousKeyResponder;
-(void)_becomeFirstResponderAndMakeVisible;
-(void)_moveCurrentSelection:(int)arg1 ;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)_deleteForwardAndNotify:(BOOL)arg1 ;
-(id)_wordContainingCaretSelection;
-(id)_normalizedStringForRangeComparison:(id)arg1 ;
-(id)_rangeOfEnclosingWord:(id)arg1 ;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2 ;
-(id)_fullText;
-(CGRect)_lastRectForRange:(id)arg1 ;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2 ;
-(void)_replaceCurrentWordWithText:(id)arg1 ;
-(void)_selectAll;
-(BOOL)_selectionAtDocumentStart;
-(BOOL)_suppressSoftwareKeyboard;
-(id)_captureOverrideState;
-(void)_restoreOverrideState:(id)arg1 ;
-(id)_rangeOfSmartSelectionIncludingRange:(id)arg1 ;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1 ;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2 ;
-(unsigned)_characterInRelationToPosition:(id)arg1 amount:(int)arg2 ;
-(id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2 ;
-(id)_selectableText;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1 ;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2 ;
-(long long)_opposingDirectionFromDirection:(long long)arg1 ;
-(id)_keyInput;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isEmptySelection;
-(id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(id)_setSelectionRangeWithHistory:(id)arg1 ;
-(long long)_selectionAffinity;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(void)_setSelectionToPosition:(id)arg1 ;
-(BOOL)_selectionAtWordStart;
-(BOOL)_selectionAtDocumentEnd;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(void)_deleteToEndOfLine;
-(id)_rangeOfLineEnclosingPosition:(id)arg1 ;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1 ;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1 ;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3 ;
-(void)_clearTextInputSource;
-(id)__textInteractionFromAssistant;
-(id)_asTextSelection;
-(void)__createInteractionAssistantIfNecessaryWithMode:(long long)arg1 ;
-(void)__prepareInteractionAssistantIfNecessary;
-(void)__tearDownInteractionAssistantIfNecessary;
-(CGRect)_caretRect;
-(void)_gatherKeyResponders:(id)arg1 indexOfSelf:(unsigned long long*)arg2 visibilityTest:(/*^block*/id)arg3 passingTest:(/*^block*/id)arg4 subviewsTest:(/*^block*/id)arg5 ;
-(void)_willChangeToFirstResponder:(id)arg1 ;
-(long long)editingInteractionConfiguration;
-(UIResponder *)_editingDelegate;
-(id)_keyCommandsInChainPassingTest:(/*^block*/id)arg1 skipViewControllersPresentingModally:(BOOL)arg2 ;
-(id)_keyCommandForEvent:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)_keyCommandForEvent:(id)arg1 target:(out id*)arg2 ;
-(void)_handleKeyEvent:(GSEventRef)arg1 ;
-(void)motionBegan:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(long long)arg1 withEvent:(id)arg2 ;
-(void)_handleGameControllerEvent:(id)arg1 ;
-(BOOL)_canShowTextServices;
-(id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(id)_showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)buildMenuWithBuilder:(id)arg1 ;
-(void)_rebuildStateRestorationIdentifierPath;
-(id)_userActivity;
-(void)_clearRestorableResponderStatus;
-(void)_resignFirstResponder;
-(id)nextFirstResponder;
-(id)_effectivePasteConfiguration;
-(id)_textServicesResponderProxy;
-(id)_selectToHereResponderProxy;
-(id)_targetCanPerformBlock:(/*^block*/id)arg1 nextTargetBlock:(/*^block*/id)arg2 ;
-(id)_targetForAction:(SEL)arg1 sender:(id)arg2 skipViewControllersPresentingModally:(BOOL)arg3 ;
-(void)pasteItemProviders:(id)arg1 ;
-(id)_currentOverrideClient;
-(BOOL)_isTransitioningFromView:(id)arg1 ;
-(void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 index:(unsigned long long)arg4 ;
-(long long)_dragDataOwner;
-(long long)_dropDataOwner;
-(void)updateTextAttributesWithConversionHandler:(/*^block*/id)arg1 ;
-(void)scrollWheel:(GSEventRef)arg1 ;
-(void)gestureStarted:(GSEventRef)arg1 ;
-(void)gestureEnded:(GSEventRef)arg1 ;
-(void)gestureChanged:(GSEventRef)arg1 ;
-(BOOL)_isRootForKeyResponderCycle;
-(id)_targetCanPerformBlock:(/*^block*/id)arg1 ;
-(void)_buildMenuFromChainWithBuilder:(id)arg1 ;
-(id)_currentOverrideHost;
-(id)_overrideHost;
-(void)_clearOverrideHost;
-(BOOL)_requiresKeyboardWindowWhenFirstResponder;
-(BOOL)_resignIfContainsFirstResponder;
-(id)_nextResponderThatCanBecomeFirstResponder;
-(BOOL)_nextResponderChainContainsResponder:(id)arg1 ;
-(BOOL)_isPinningInputViews;
-(void)_windowResignedKey;
-(void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 ;
-(CGRect)_responderExternalTouchRectForWindow:(id)arg1 ;
-(id)_responderForBecomeFirstResponder;
-(BOOL)_supportsBecomeFirstResponderWhenPossible;
-(void)setPasteConfiguration:(id)arg1 ;
-(BOOL)canPasteItemProviders:(id)arg1 ;
-(void)_setDragDataOwner:(long long)arg1 ;
-(void)_setDropDataOwner:(long long)arg1 ;
-(BOOL)shouldReloadInputViews;
-(void)reloadInputViewsWithoutReset;
-(void)_setSuppressSoftwareKeyboard:(BOOL)arg1 ;
-(id<_UICopyConfigurationReading>)_copyConfiguration;
-(void)_setCopyConfiguration:(id)arg1 ;
@end

