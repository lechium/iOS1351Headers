//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AFUIDebugControllerDelegate-Protocol.h"
#import "AFUIInternalDebugControllerDelegate-Protocol.h"
#import "AFUIStateMachineDelegate-Protocol.h"
#import "RadiosPreferencesDelegate-Protocol.h"
#import "SRPagerViewControllerDelegate-Protocol.h"
#import "SRSirilandViewDelegate-Protocol.h"
#import "SRSuggestionsViewControllerDelegate-Protocol.h"
#import "SRTranscriptStackViewControllerDataSource-Protocol.h"
#import "SRTranscriptStackViewControllerDelegate-Protocol.h"
#import "SRUserAttentionControllerDelegate-Protocol.h"
#import "SUICAutoDismissalStrategyDelegate-Protocol.h"
#import "SiriUIModalContainerViewControllerDelegate-Protocol.h"
#import "SiriUIPresentation-Protocol.h"
#import "SiriUIVideoPlayerViewControllerDelegate-Protocol.h"

@class AFUIStateMachine, NSString, RadiosPreferences, SFStartSearchFeedback, SRPagerViewController, SRSirilandView, SRSuggestionsViewController, SRUserAttentionController, SUICAutoDismissalStrategy, UIAlertController;
@protocol AFUIDebugControlling, AFUIInternalDebugControlling, SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SRSirilandViewController : UIViewController <AFUIDebugControllerDelegate, AFUIInternalDebugControllerDelegate, SRPagerViewControllerDelegate, SRSirilandViewDelegate, SRTranscriptStackViewControllerDataSource, SRSuggestionsViewControllerDelegate, SRTranscriptStackViewControllerDelegate, RadiosPreferencesDelegate, AFUIStateMachineDelegate, SiriUIVideoPlayerViewControllerDelegate, SiriUIModalContainerViewControllerDelegate, SRUserAttentionControllerDelegate, SUICAutoDismissalStrategyDelegate, SiriUIPresentation>
{
    AFUIStateMachine *_stateMachine;	// 8 = 0x8
    long long _currentRequestSource;	// 16 = 0x10
    _Bool _passcodeUnlockViewIsShowing;	// 24 = 0x18
    _Bool _presentedPreviousConversationFromBreadcrumb;	// 25 = 0x19
    CDStruct_a82615c4 _keyboardInfo;	// 32 = 0x20
    long long _autoDismissalReason;	// 80 = 0x50
    long long _previousRequestSource;	// 88 = 0x58
    id <SiriUIPresentationDataSource> _dataSource;	// 96 = 0x60
    id <SiriUIPresentationDelegate> _delegate;	// 104 = 0x68
    SRSuggestionsViewController *_siriUnavailableViewController;	// 112 = 0x70
    SRPagerViewController *_pagerViewController;	// 120 = 0x78
    id <AFUIDebugControlling> _debugController;	// 128 = 0x80
    UIViewController<AFUIInternalDebugControlling> *_internalDebugController;	// 136 = 0x88
    double _lastPresentationTime;	// 144 = 0x90
    UIAlertController *_debugAlertController;	// 152 = 0x98
    RadiosPreferences *_radioPreferences;	// 160 = 0xa0
    UIViewController *_presentedViewControllerForDebugController;	// 168 = 0xa8
    SFStartSearchFeedback *_currentStartSearchFeedback;	// 176 = 0xb0
    SRUserAttentionController *_userAttentionController;	// 184 = 0xb8
    SUICAutoDismissalStrategy *_autoDismissalStrategy;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000010007b8d0
@property(retain, nonatomic, getter=_autoDismissalStrategy, setter=_setAutoDismissalStrategy:) SUICAutoDismissalStrategy *autoDismissalStrategy; // @synthesize autoDismissalStrategy=_autoDismissalStrategy;
@property(retain, nonatomic, getter=_userAttentionController, setter=_setUserAttentionController:) SRUserAttentionController *userAttentionController; // @synthesize userAttentionController=_userAttentionController;
@property(retain, nonatomic) SFStartSearchFeedback *currentStartSearchFeedback; // @synthesize currentStartSearchFeedback=_currentStartSearchFeedback;
@property(nonatomic) __weak UIViewController *presentedViewControllerForDebugController; // @synthesize presentedViewControllerForDebugController=_presentedViewControllerForDebugController;
@property(retain, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
@property(retain, nonatomic, getter=_debugAlertController) UIAlertController *debugAlertController; // @synthesize debugAlertController=_debugAlertController;
@property(nonatomic) double lastPresentationTime; // @synthesize lastPresentationTime=_lastPresentationTime;
@property(retain, nonatomic) UIViewController<AFUIInternalDebugControlling> *internalDebugController; // @synthesize internalDebugController=_internalDebugController;
@property(retain, nonatomic) id <AFUIDebugControlling> debugController; // @synthesize debugController=_debugController;
@property(readonly, nonatomic, getter=_pagerViewController) SRPagerViewController *pagerViewController; // @synthesize pagerViewController=_pagerViewController;
@property(readonly, nonatomic, getter=_siriUnavailableViewController) SRSuggestionsViewController *siriUnavailableViewController; // @synthesize siriUnavailableViewController=_siriUnavailableViewController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_topTranscriptViewController;	// IMP=0x000000010007b6b8
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010007b6b4
- (void)_handleWillLeaveEmergencyCallView:(id)arg1;	// IMP=0x000000010007b6a4
- (void)_handleDidShowEmergencyCallView:(id)arg1;	// IMP=0x000000010007b694
- (void)siriNetworkAvailabilityDidChange;	// IMP=0x000000010007b634
- (void)_updateSiriAvailability:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010007b544
- (void)airplaneModeChanged;	// IMP=0x000000010007b4f0
- (void)_handleVideoPlaybackDidFinishNotification;	// IMP=0x000000010007b4ac
- (void)_handleVideoPlaybackDidStartNotification;	// IMP=0x000000010007b468
- (void)autoDismissalStrategyDidChangeAutoDismissalDecision:(id)arg1 dismissalReason:(long long)arg2 permanent:(_Bool)arg3;	// IMP=0x000000010007b2d0
- (void)userAttentionController:(id)arg1 didGainAttentionWithEvent:(long long)arg2;	// IMP=0x000000010007b164
- (void)userAttentionController:(id)arg1 didLoseAttentionWithEvent:(long long)arg2;	// IMP=0x000000010007b040
- (void)_setViewRequiringExtendedTimeoutVisible:(_Bool)arg1;	// IMP=0x000000010007afd4
- (void)_cancelDelayedUserAttentionControllerStop;	// IMP=0x000000010007af9c
- (void)_stopUserAttentionControllerIfNeededAfterDelay:(double)arg1;	// IMP=0x000000010007af4c
- (void)_stopUserAttentionControllerIfNeeded;	// IMP=0x000000010007ae00
- (void)_startUserAttentionControllerIfNeededForTypes:(unsigned long long)arg1;	// IMP=0x000000010007a824
- (void)_startUserAttentionControllerIfNeeded;	// IMP=0x000000010007a814
- (void)_updateConversationAvailability:(unsigned long long)arg1;	// IMP=0x000000010007a52c
- (void)showSpeechAlternatives:(id)arg1;	// IMP=0x000000010007a4c0
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x000000010007a454
- (void)handleGetResponseAlternativesPlayback:(id)arg1;	// IMP=0x000000010007a3e8
- (void)changeUtterance:(id)arg1;	// IMP=0x000000010007a37c
- (id)requestContext;	// IMP=0x000000010007a328
- (id)dismissalUserInfo;	// IMP=0x000000010007a234
- (void)_presentInternalDebugController;	// IMP=0x000000010007a170
- (void)_presentRadarComposeController;	// IMP=0x00000001000799a8
- (void)transcriptStackViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x0000000100079960
- (void)transcriptStackViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;	// IMP=0x0000000100079890
- (void)transcriptStackViewController:(id)arg1 didFinishTest:(id)arg2;	// IMP=0x00000001000797e4
- (void)transcriptStackViewController:(id)arg1 willStartTest:(id)arg2;	// IMP=0x0000000100079738
- (_Bool)inTextInputModeForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000796e4
- (void)transcriptStackViewController:(id)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2;	// IMP=0x000000010007958c
- (void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007951c
- (unsigned long long)deviceLockStateForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000794c8
- (id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x0000000100079444
- (id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x00000001000793c0
- (void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x0000000100079334
- (void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x0000000100079268
- (void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x00000001000791bc
- (void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3;	// IMP=0x000000010007913c
- (void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x00000001000790bc
- (void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100078fcc
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100078f44
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100078ee4
- (void)transcriptStackViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x0000000100078e8c
- (void)transcriptStackViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x0000000100078e1c
- (void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x0000000100078dac
- (void)transcriptStackViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x0000000100078d3c
- (void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x0000000100078ccc
- (void)transcriptStackViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;	// IMP=0x0000000100078c20
- (void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x0000000100078bc8
- (void)willSendStartRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100078b24
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x0000000100078ad8
- (void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100078a28
- (id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000789cc
- (void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100078940
- (void)stopSpeakingForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000788f8
- (void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100078830
- (void)cancelRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100078824
- (void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100078774
- (void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5;	// IMP=0x0000000100078634
- (void)transcriptStackViewControllerDidEndEditing:(id)arg1;	// IMP=0x00000001000785ec
- (void)transcriptStackViewControllerWillBeginEditing:(id)arg1;	// IMP=0x0000000100078594
- (void)transcriptStackViewControllerRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100078528
- (void)transcriptStackViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2;	// IMP=0x00000001000784b8
- (void)transcriptStackViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x0000000100078448
- (void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x00000001000783d8
- (void)transcriptStackViewControllerPulseHelpButton:(id)arg1;	// IMP=0x0000000100078390
- (void)transcriptStackViewController:(id)arg1 setHelpButtonEmphasized:(_Bool)arg2;	// IMP=0x0000000100078338
- (void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x00000001000782d4
- (void)transcriptStackViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x00000001000781f4
- (_Bool)transcriptStackViewControllerShouldDelaySuggestions:(id)arg1;	// IMP=0x00000001000781a0
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x0000000100078150
- (long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100078050
- (double)statusViewHeightForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100077ff4
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100077f78
- (void)transcriptStackViewControllerDidExitSiriland:(id)arg1;	// IMP=0x0000000100077f34
- (void)transcriptStackViewControllerWillEnterSiriland:(id)arg1;	// IMP=0x0000000100077ef0
- (double)contentWidthForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100077e94
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(id)arg1;	// IMP=0x0000000100077e74
- (void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100077dc4
- (id)siriEnabledAppListForSuggestionsController:(id)arg1;	// IMP=0x0000000100077d18
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100077cbc
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100077c60
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x0000000100077be4
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x0000000100077be0
- (CDStruct_a82615c4)keyboardInfoForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100077bc0
- (id)siriEnabledAppListForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100077b14
- (id)domainObjectStoreForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100077ab8
- (id)conversationForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100077aa8
- (long long)siriStateForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100077a54
- (void)internalDebugControllerWantsDismissViewController;	// IMP=0x0000000100077a08
- (void)debugController:(id)arg1 openURL:(id)arg2;	// IMP=0x0000000100077990
- (void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100077920
- (void)debugController:(id)arg1 wantsDismissViewController:(id)arg2;	// IMP=0x0000000100077834
- (void)debugController:(id)arg1 wantsPresentViewController:(id)arg2;	// IMP=0x000000010007772c
- (void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2;	// IMP=0x000000010007764c
- (double)statusViewHeightForSirilandView:(id)arg1;	// IMP=0x00000001000775f0
- (struct CGRect)statusBarFrameForSirilandView:(id)arg1;	// IMP=0x0000000100077574
- (void)pagerViewControllerDidChangeTransitionState:(id)arg1;	// IMP=0x00000001000772a0
- (void)pagerViewController:(id)arg1 didActivatePageViewController:(id)arg2 oldActivePageViewController:(id)arg3;	// IMP=0x0000000100076f48
- (void)siriDidDetectMusic;	// IMP=0x0000000100076e44
- (void)_hideAcousticIDSpinner;	// IMP=0x0000000100076c88
- (void)acousticIDRequestDidFinishWithSuccess:(_Bool)arg1;	// IMP=0x0000000100076bcc
- (void)acousticIDRequestDidStart;	// IMP=0x0000000100076aa4
- (void)modalContainerViewControllerViewDidDisappear:(id)arg1;	// IMP=0x0000000100076a34
- (void)modalContainerViewControllerViewWillDisappear:(id)arg1;	// IMP=0x00000001000769c4
- (void)_dismissVideoPlayerViewController;	// IMP=0x00000001000768a8
- (void)playbackDidFailForVideoPlayerViewController:(id)arg1;	// IMP=0x000000010007689c
- (void)playbackDidFinishForVideoPlayerViewController:(id)arg1;	// IMP=0x0000000100076890
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x0000000100076888
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x0000000100076880
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x0000000100076838
- (void)handlePlayContentCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100076480
- (id)prepareUpdateViewsCommandForConversation:(id)arg1;	// IMP=0x0000000100076470
- (id)prepareAddViewsCommandForConversation:(id)arg1;	// IMP=0x0000000100076460
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x0000000100076314
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x00000001000761d0
- (void)siriFailTest:(id)arg1 withReason:(id)arg2;	// IMP=0x0000000100076100
- (void)siriDidFinishTest:(id)arg1;	// IMP=0x0000000100076054
- (void)siriWillStartTest:(id)arg1;	// IMP=0x0000000100075fa8
- (void)speechRecordingDidDetectSpeechStartpoint;	// IMP=0x0000000100075f68
- (void)speechRecordingDidFailForRequest:(id)arg1 onAVRecordRoute:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100075f5c
- (void)speechRecordingDidCancelForRequest:(id)arg1 onAVRecordRoute:(id)arg2;	// IMP=0x0000000100075f50
- (void)speechRecordingDidEndForRequest:(id)arg1 onAVRecordRoute:(id)arg2;	// IMP=0x0000000100075f44
- (void)didReceiveBugButtonLongPress;	// IMP=0x0000000100075908
- (void)didReceiveReportBugAction;	// IMP=0x00000001000758fc
- (void)didReceiveHelpAction;	// IMP=0x0000000100075474
- (_Bool)supportsTextInput;	// IMP=0x000000010007546c
- (void)_dismissForLongIdling;	// IMP=0x0000000100075378
- (void)_cancelScheduledAutoDismissalForLongIdlingIfNeeded;	// IMP=0x00000001000752ac
- (void)_scheduleAutoDismissalForLongIdling;	// IMP=0x00000001000751c0
- (void)siriRequestWillStartWithRequestOptions:(id)arg1;	// IMP=0x0000000100074ea0
- (id)configureOptionsForImminentRequest:(id)arg1;	// IMP=0x0000000100074e14
- (void)_logParsecEndSearchFeedback;	// IMP=0x0000000100074cc8
- (void)_logParsecStartSearchFeedback;	// IMP=0x0000000100074b80
- (void)siriWillStartTextInputRequest;	// IMP=0x0000000100074ab8
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x000000010007489c
- (_Bool)siriIsShowingPasscodeUnlock;	// IMP=0x000000010007488c
- (void)siriDidHidePasscodeUnlock;	// IMP=0x00000001000747f0
- (void)siriWillHidePasscodeUnlock;	// IMP=0x00000001000747ec
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;	// IMP=0x0000000100074760
- (void)siriWillShowPasscodeUnlock;	// IMP=0x0000000100074750
- (void)reloadData;	// IMP=0x0000000100074708
- (void)startNewConversation;	// IMP=0x0000000100074698
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x0000000100074628
- (void)conversation:(id)arg1 didChangePresentationStateForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010007459c
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x00000001000744d0
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100074444
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100074298
- (void)siriDidDeactivate;	// IMP=0x0000000100074128
- (_Bool)currentSnippetContainsFooterButtons;	// IMP=0x00000001000740dc
- (_Bool)_isUsingBuiltInSpeaker;	// IMP=0x0000000100073f08
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x0000000100073b50
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x0000000100073a18
- (void)statusViewHeightDidChange;	// IMP=0x00000001000739d0
- (void)statusBarFrameDidChange;	// IMP=0x000000010007394c
- (long long)options;	// IMP=0x0000000100073944
- (id)viewController;	// IMP=0x0000000100073940
- (void)_speakText:(id)arg1;	// IMP=0x0000000100073930
- (void)_speakText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000738a4
- (void)_cancelRequest;	// IMP=0x000000010007385c
- (id)_conversationItemAtIndexPath:(id)arg1 forTranscriptStackViewController:(id)arg2;	// IMP=0x00000001000737d8
- (id)_createTranscriptStackViewController;	// IMP=0x000000010007379c
- (id)_transcriptStackViewControllerForConversation:(id)arg1;	// IMP=0x00000001000736dc
- (id)_freshTranscriptStackViewController;	// IMP=0x0000000100073610
- (id)_activeTranscriptStackViewController;	// IMP=0x00000001000735bc
- (id)_previousTranscriptStackViewController;	// IMP=0x00000001000734f8
- (id)_transcriptStackViewControllers;	// IMP=0x00000001000734a4
- (id)_itemInCurrentConversationAtIndexPath:(id)arg1;	// IMP=0x0000000100073424
- (id)_itemInPreviousConversationAtIndexPath:(id)arg1;	// IMP=0x00000001000733a4
- (id)_activeConversation;	// IMP=0x00000001000732f4
- (id)_previousConversation;	// IMP=0x0000000100073264
- (id)_identifierOfPreviousConversation;	// IMP=0x00000001000731dc
- (id)_conversationIdentifiers;	// IMP=0x0000000100073180
- (void)_updatePreviousAndActiveConversation;	// IMP=0x0000000100072fc0
- (void)conversationListDidChange;	// IMP=0x0000000100072fb4
- (void)_performTransitionForEvent:(long long)arg1;	// IMP=0x0000000100072e04
- (id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2;	// IMP=0x0000000100072dd8
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;	// IMP=0x0000000100072d58
- (long long)_state;	// IMP=0x0000000100072d0c
- (id)_stateMachine;	// IMP=0x0000000100072b70
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x0000000100072afc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000728f8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100072770
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100072618
- (void)viewDidLoad;	// IMP=0x0000000100072488
- (void)loadView;	// IMP=0x0000000100072434
- (void)updateKeyboardInfo:(CDStruct_a82615c4)arg1;	// IMP=0x0000000100072364
- (_Bool)_isTextInputEnabled;	// IMP=0x0000000100072328
- (void)dealloc;	// IMP=0x000000010007223c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000100071f50
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000100071eec
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100071e88
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100071e6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRSirilandView *view; // @dynamic view;

@end

