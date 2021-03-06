//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SRTranscriptViewControllerDataSource-Protocol.h"
#import "SRTranscriptViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSTimer, SRTranscriptStackView, UINavigationController;
@protocol SRTranscriptStackViewControllerDataSource, SRTranscriptStackViewControllerDelegate;

@interface SRTranscriptStackViewController : UIViewController <SRTranscriptViewControllerDataSource, SRTranscriptViewControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _inUITrackingRunLoopMode;	// 8 = 0x8
    id <SRTranscriptStackViewControllerDataSource> _dataSource;	// 16 = 0x10
    id <SRTranscriptStackViewControllerDelegate> _delegate;	// 24 = 0x18
    UINavigationController *_navigationController;	// 32 = 0x20
    NSMutableArray *_navigationTransitionQueue;	// 40 = 0x28
    NSTimer *_navigationTransitionTimer;	// 48 = 0x30
}

+ (id)_createViewControllerWithItemIdentifier:(id)arg1;	// IMP=0x00000001000071d4
- (void).cxx_destruct;	// IMP=0x000000010000bc24
@property(nonatomic, getter=_isInUITrackingRunLoopMode, setter=_setInUITrackingRunLoopMode:) _Bool inUITrackingRunLoopMode; // @synthesize inUITrackingRunLoopMode=_inUITrackingRunLoopMode;
@property(retain, nonatomic, getter=_navigationTransitionTimer, setter=_setNavigationTransitionTimer:) NSTimer *navigationTransitionTimer; // @synthesize navigationTransitionTimer=_navigationTransitionTimer;
@property(retain, nonatomic, getter=_navigationTransitionQueue, setter=_navigationTransitionQueue:) NSMutableArray *navigationTransitionQueue; // @synthesize navigationTransitionQueue=_navigationTransitionQueue;
@property(readonly, nonatomic, getter=_navigationController) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <SRTranscriptStackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SRTranscriptStackViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010000bb54
- (void)navigationControllerInteractivePopGestureRecognized:(id)arg1;	// IMP=0x000000010000bb04
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000b82c
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000b738
- (unsigned long long)navigationIndexOfTranscriptViewController:(id)arg1;	// IMP=0x000000010000b6a0
- (_Bool)inTextInputModeForTranscriptViewController:(id)arg1;	// IMP=0x000000010000b64c
- (CDStruct_a82615c4)keyboardInfoForTranscriptViewController:(id)arg1;	// IMP=0x000000010000b5dc
- (void)transcriptViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x000000010000b594
- (void)transcriptViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;	// IMP=0x000000010000b590
- (void)transcriptViewController:(id)arg1 didFinishTest:(id)arg2;	// IMP=0x000000010000b520
- (void)transcriptViewController:(id)arg1 willStartTest:(id)arg2;	// IMP=0x000000010000b4b0
- (void)transcriptViewController:(id)arg1 viewDidSetContentSize:(struct CGSize)arg2;	// IMP=0x000000010000b3fc
- (void)transcriptViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b38c
- (unsigned long long)deviceLockStateForTranscriptViewController:(id)arg1;	// IMP=0x000000010000b338
- (id)transcriptViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x000000010000b2b4
- (id)transcriptViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x000000010000b230
- (void)transcriptViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000010000b1a4
- (void)transcriptViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x000000010000b0d8
- (void)transcriptViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x000000010000b02c
- (void)transcriptViewController:(id)arg1 didScrollForInterval:(double)arg2;	// IMP=0x000000010000afa0
- (void)transcriptViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x000000010000af20
- (void)transcriptViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ae94
- (void)transcriptViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ae0c
- (void)transcriptViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000adac
- (void)transcriptViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x000000010000ad54
- (void)transcriptViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x000000010000ace4
- (void)transcriptViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x000000010000ac74
- (void)transcriptViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x000000010000ac04
- (void)transcriptViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x000000010000ab94
- (void)transcriptViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;	// IMP=0x000000010000ab3c
- (void)transcriptViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x000000010000aae4
- (void)cancelSpeakingForTranscriptViewController:(id)arg1;	// IMP=0x000000010000aa9c
- (void)transcriptViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000aa00
- (void)cancelRequestForTranscriptViewController:(id)arg1;	// IMP=0x000000010000a9b8
- (void)transcriptViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010000a970
- (void)transcriptViewControllerWillBeginEditing:(id)arg1;	// IMP=0x000000010000a928
- (void)transcriptViewControllerRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a8bc
- (_Bool)transcriptViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x000000010000a868
- (void)willSendStartRequestForTranscriptViewController:(id)arg1;	// IMP=0x000000010000a820
- (void)transcriptViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000a770
- (void)transcriptViewController:(id)arg1 showSiriStatusWithText:(id)arg2 speakableDescription:(id)arg3;	// IMP=0x000000010000a76c
- (void)transcriptViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(long long)arg4 userSelectionResults:(id)arg5;	// IMP=0x000000010000a668
- (void)transcriptViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000a5b8
- (id)effectiveCoreLocationBundleForTranscriptViewController:(id)arg1;	// IMP=0x000000010000a55c
- (void)transcriptViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010000a4ec
- (void)transcriptViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010000a440
- (void)transcriptViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010000a394
- (void)transcriptViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010000a324
- (void)transcriptViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x000000010000a2dc
- (_Bool)transcriptViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x000000010000a288
- (_Bool)transcriptViewControllerShouldDelaySuggestions:(id)arg1;	// IMP=0x000000010000a234
- (long long)initialDisplayTypeForTranscriptViewController:(id)arg1;	// IMP=0x000000010000a1e0
- (double)statusViewHeightForTranscriptViewController:(id)arg1;	// IMP=0x000000010000a184
- (struct CGRect)statusBarFrameForTranscriptViewController:(id)arg1;	// IMP=0x000000010000a108
- (struct CGSize)estimatedVisibleContentSizeForTranscriptViewController:(id)arg1;	// IMP=0x000000010000a060
- (double)contentWidthForTranscriptViewController:(id)arg1;	// IMP=0x000000010000a004
- (id)siriEnabledAppListForTranscriptViewController:(id)arg1;	// IMP=0x0000000100009fa8
- (id)domainObjectStoreForTranscriptViewController:(id)arg1;	// IMP=0x0000000100009f4c
- (id)conversationItemListForTranscriptViewController:(id)arg1;	// IMP=0x0000000100009e74
- (long long)siriStateForTranscriptViewController:(id)arg1;	// IMP=0x0000000100009e20
- (void)_exitUITrackingRunLoopMode;	// IMP=0x0000000100009de0
- (void)_enterUITrackingRunLoopMode;	// IMP=0x0000000100009d9c
- (void)_enumerateSortedParentItemIndexPathsForItemIndexPaths:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009d48
- (void)_enumerateSortedParentItemIndexPathsForItemIndexPaths:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009998
- (id)_indexPathsForItemsAtIndexes:(id)arg1 inTranscriptViewController:(id)arg2;	// IMP=0x00000001000097c8
- (id)_indexPathForItemAtIndex:(long long)arg1 inTranscriptViewController:(id)arg2;	// IMP=0x0000000100009768
- (id)_indexPathForViewControllerDisplayingItemAtIndexPath:(id)arg1;	// IMP=0x0000000100009758
- (id)_transcriptViewControllerDisplayingChildrenOfItemAtIndexPath:(id)arg1;	// IMP=0x00000001000096f8
- (id)_transcriptViewControllerDisplayingChildrenOfItemWithIdentifier:(id)arg1;	// IMP=0x00000001000094ac
- (id)_indexPathForParentOfItemsInTranscriptViewController:(id)arg1;	// IMP=0x0000000100009448
- (id)_indexPathForItemWithIdentifier:(id)arg1;	// IMP=0x00000001000093c8
- (id)_identifierOfItemAtIndexPath:(id)arg1;	// IMP=0x0000000100009348
- (id)_topTranscriptViewController;	// IMP=0x00000001000092f4
- (_Bool)logActiveTranscriptContents;	// IMP=0x00000001000092a8
- (void)siriDidDetectSpeechStartpoint;	// IMP=0x0000000100009268
- (void)siriStoppedFingerprintingMusic;	// IMP=0x0000000100009228
- (void)siriBeganFingerprintingMusic;	// IMP=0x00000001000091e8
- (void)showSpeechAlternatives:(id)arg1;	// IMP=0x000000010000917c
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x0000000100009110
- (void)handleGetResponseAlternativesPlayback:(id)arg1;	// IMP=0x00000001000090a4
- (void)changeUtterance:(id)arg1;	// IMP=0x0000000100009038
- (void)_processTransitionQueue;	// IMP=0x0000000100008e28
- (void)_queuePushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100008c7c
- (void)_queuePopToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100008a70
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1;	// IMP=0x00000001000089b8
- (void)presentationStateDidChangeForItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001000088d4
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexPaths:(id)arg2 parentItemIdentifiers:(id)arg3;	// IMP=0x000000010000849c
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001000083b8
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x000000010000806c
@property(readonly, nonatomic) _Bool transcriptIsAnimating;
- (void)restoreTopTranscriptPositionAnimated:(_Bool)arg1;	// IMP=0x0000000100007fd8
- (void)showTranscriptEnd;	// IMP=0x0000000100007f98
- (void)showTranscriptStart;	// IMP=0x0000000100007f38
@property(readonly, nonatomic) _Bool transcriptEndIsVisible;
@property(readonly, nonatomic) _Bool transcriptStartIsVisible;
- (id)_conversation;	// IMP=0x0000000100007e44
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x0000000100007dd0
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x0000000100007d64
- (void)siriRequestWillStart;	// IMP=0x0000000100007d24
- (void)siriDidDeactivate;	// IMP=0x0000000100007bb4
- (_Bool)currentSnippetContainsFooterButtons;	// IMP=0x0000000100007b68
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x0000000100007a34
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x0000000100007908
@property(readonly, nonatomic) NSArray *requestContext;
- (void)keyboardHeightDidChange;	// IMP=0x000000010000786c
- (void)statusViewHeightDidChange;	// IMP=0x0000000100007824
- (void)statusBarFrameDidChange;	// IMP=0x00000001000077dc
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x00000001000076b0
- (void)showRootTranscript;	// IMP=0x0000000100007638
- (void)pinLastDisplayedChildOfItemWithIdentifier:(id)arg1;	// IMP=0x00000001000075ec
- (void)pinItemWithIdentifier:(id)arg1;	// IMP=0x0000000100007534
- (id)identifierOfLastDisplayedChildOfItemWithIdentifier:(id)arg1;	// IMP=0x00000001000074e0
- (void)resumeTouchesIfNecessary;	// IMP=0x00000001000073c4
- (void)cancelTouchesIfNecessary;	// IMP=0x00000001000072a8
- (id)_transcriptViewControllers;	// IMP=0x0000000100007254
- (id)_createViewControllerWithItemIdentifier:(id)arg1;	// IMP=0x000000010000714c
- (void)reloadData;	// IMP=0x0000000100007014
- (void)loadView;	// IMP=0x0000000100006dd0
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x0000000100006dc4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100006d04
- (void)dealloc;	// IMP=0x0000000100006b58
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x00000001000067f4
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000100006790
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000672c
- (void)srsvc_setConversation:(id)arg1;	// IMP=0x000000010007b9ec
- (id)srsvc_conversation;	// IMP=0x000000010007b9e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRTranscriptStackView *view; // @dynamic view;

@end

