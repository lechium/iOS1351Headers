/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <CardKit/CRKCardSectionViewController.h>
#import <SiriUI/SiriUISnippetViewControllerDelegatePrivate.h>
#import <SiriUI/SiriUISnippetViewControllerDelegate.h>

@class SiriUISnippetViewController, SiriUICardSectionView, NSString;

@interface SiriUILegacyCardSectionViewController : CRKCardSectionViewController <SiriUISnippetViewControllerDelegatePrivate, SiriUISnippetViewControllerDelegate> {

	SiriUISnippetViewController* _snippetViewController;
	SiriUISnippetViewController* _containingSnippetViewController;

}

@property (nonatomic,retain) SiriUICardSectionView * view; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * containingSnippetViewController;              //@synthesize containingSnippetViewController=_containingSnippetViewController - In the implementation block
@property (nonatomic,readonly) SiriUISnippetViewController * backingSnippetViewController;                      //@synthesize snippetViewController=_snippetViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardSectionClasses;
-(void)setDelegate:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(id)_interaction;
-(void)_updateContentSize;
-(void)_loadCardSectionView;
-(void)cancelRequestForSiriSnippetViewController:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2 ;
-(void)siriViewController:(id)arg1 performAceCommands:(id)arg2 ;
-(void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(BOOL)siriViewControllerShouldPreventUserInteraction:(id)arg1 ;
-(void)siriViewControllerWillBeginEditing:(id)arg1 ;
-(void)siriViewControllerDidEndEditing:(id)arg1 ;
-(void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4 ;
-(void)siriViewControllerRequestTearDownEditingViewController:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)siriSnippetViewControllerViewDidLoad:(id)arg1 ;
-(double)siriViewControllerExpectedWidth:(id)arg1 ;
-(void)siriViewControllerHeightDidChange:(id)arg1 ;
-(id)localeForSiriViewController:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2 ;
-(void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2 ;
-(void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2 ;
-(id)_createReusableViewIfNeededWithClass:(Class)arg1 ;
-(SiriUISnippetViewController *)containingSnippetViewController;
-(void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3 ;
-(BOOL)siriSnippetViewControllerIsVisible:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2 ;
-(void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1 ;
-(unsigned long long)siriDeviceLockStateForSnippetViewController:(id)arg1 ;
-(id)siriEnabledAppListForSiriViewController:(id)arg1 ;
-(void)siriViewController:(id)arg1 performAceCommands:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2 ;
-(void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3 ;
-(id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1 ;
-(CGSize)siriViewControllerVisibleContentArea:(id)arg1 ;
-(void)siriViewController:(id)arg1 setContentOffset:(double)arg2 ;
-(id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2 ;
-(id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3 ;
-(id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2 ;
-(void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2 ;
-(id)persistentDataStoreForSiriViewController:(id)arg1 ;
-(void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2 ;
-(id)updatedUserUtteranceForSiriViewController:(id)arg1 ;
-(double)statusBarHeightForSiriViewController:(id)arg1 ;
-(void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(BOOL)arg2 ;
-(void)cancelSpeakingForSiriViewController:(id)arg1 ;
-(void)removeSiriViewController:(id)arg1 ;
-(BOOL)siriViewController:(id)arg1 openURL:(id)arg2 ;
-(id)additionalSpeechInterpretationsForSiriViewController:(id)arg1 ;
-(UIEdgeInsets)siriViewControllerBackgroundInsets:(id)arg1 ;
-(void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(BOOL)arg2 ;
-(UIEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1 ;
-(double)siriSnippetViewControllerExpectedWidth:(id)arg1 ;
-(void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2 ;
-(BOOL)siriViewController:(id)arg1 openPunchOut:(id)arg2 ;
-(id)persistentStoreForSiriViewController:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldAttemptToConnectToRemoteViewController;
-(SiriUISnippetViewController *)backingSnippetViewController;
-(void)setContainingSnippetViewController:(SiriUISnippetViewController *)arg1 ;
@end

