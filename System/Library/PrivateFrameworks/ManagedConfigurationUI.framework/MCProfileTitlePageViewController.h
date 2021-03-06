/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCSectionBasedTableViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MCProfileTitlePageViewModelDelegate.h>
#import <libobjc.A.dylib/MCUISignInViewControllerDelegate.h>
#import <libobjc.A.dylib/MCProfileQuestionsControllerDelegate.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <libobjc.A.dylib/MCUIDismissalAwareViewController.h>

@class MCProfileTitlePageViewModel, MCProfileTitlePageView, MCProfileTitlePageMetaDataSectionController, MCProfileTitlePageMetaDataSectionAnimationController, MCInstallProfileQuestionViewController, MCActivityViewController, NSString;

@interface MCProfileTitlePageViewController : MCSectionBasedTableViewController <UIScrollViewDelegate, MCProfileTitlePageViewModelDelegate, MCUISignInViewControllerDelegate, MCProfileQuestionsControllerDelegate, DevicePINControllerDelegate, MCUIDismissalAwareViewController> {

	BOOL _hasUpdatedBottomInset;
	MCProfileTitlePageViewModel* _viewModel;
	MCProfileTitlePageView* _profileTitlePageView;
	double _metaDataSectionHeight;
	MCProfileTitlePageMetaDataSectionController* _metaDataSectionController;
	MCProfileTitlePageMetaDataSectionAnimationController* _animationController;
	MCInstallProfileQuestionViewController* _questionsController;
	MCActivityViewController* _activityViewController;
	/*^block*/id _passcodeCompletionHandler;
	/*^block*/id _authenticationCompletionHandler;
	/*^block*/id _authenticationPreparationHandler;
	/*^block*/id _userInputCompletionHandler;

}

@property (nonatomic,retain) MCProfileTitlePageViewModel * viewModel;                                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) MCProfileTitlePageView * profileTitlePageView;                                           //@synthesize profileTitlePageView=_profileTitlePageView - In the implementation block
@property (assign,nonatomic) double metaDataSectionHeight;                                                            //@synthesize metaDataSectionHeight=_metaDataSectionHeight - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedBottomInset;                                                              //@synthesize hasUpdatedBottomInset=_hasUpdatedBottomInset - In the implementation block
@property (nonatomic,retain) MCProfileTitlePageMetaDataSectionController * metaDataSectionController;                 //@synthesize metaDataSectionController=_metaDataSectionController - In the implementation block
@property (nonatomic,retain) MCProfileTitlePageMetaDataSectionAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,retain) MCInstallProfileQuestionViewController * questionsController;                            //@synthesize questionsController=_questionsController - In the implementation block
@property (nonatomic,retain) MCActivityViewController * activityViewController;                                       //@synthesize activityViewController=_activityViewController - In the implementation block
@property (nonatomic,copy) id passcodeCompletionHandler;                                                              //@synthesize passcodeCompletionHandler=_passcodeCompletionHandler - In the implementation block
@property (nonatomic,copy) id authenticationCompletionHandler;                                                        //@synthesize authenticationCompletionHandler=_authenticationCompletionHandler - In the implementation block
@property (nonatomic,copy) id authenticationPreparationHandler;                                                       //@synthesize authenticationPreparationHandler=_authenticationPreparationHandler - In the implementation block
@property (nonatomic,copy) id userInputCompletionHandler;                                                             //@synthesize userInputCompletionHandler=_userInputCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setAnimationController:(MCProfileTitlePageMetaDataSectionAnimationController *)arg1 ;
-(MCProfileTitlePageMetaDataSectionAnimationController *)animationController;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(MCActivityViewController *)activityViewController;
-(void)setActivityViewController:(MCActivityViewController *)arg1 ;
-(id)defaultView;
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)infoButtonTapped:(id)arg1 ;
-(void)_showAlertForInstallError:(id)arg1 ;
-(void)signInViewController:(id)arg1 willAuthenticateWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)signInViewControllerDidCancelAuthentication:(id)arg1 ;
-(void)setCurrentQuestionsController:(id)arg1 ;
-(void)questionsController:(id)arg1 didFinishWithResponses:(id)arg2 ;
-(BOOL)questionsControllerIsDisplayedInSheet:(id)arg1 ;
-(void)promptForPasscodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)installationFinishedSuccessfully:(BOOL)arg1 shouldDismiss:(BOOL)arg2 shouldRedirect:(BOOL)arg3 errorToDisplay:(id)arg4 ;
-(void)promptForUserInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentAuthenticationViewControllerWithContext:(id)arg1 authenticationPreparationHandler:(/*^block*/id)arg2 authenticationCompletionHandler:(/*^block*/id)arg3 ;
-(void)presentSpinnerViewController;
-(void)informQuestionViewControllerOfPreflightResult:(id)arg1 profileConnection:(id)arg2 ;
-(id)initWithViewModel:(id)arg1 ;
-(id)_sectionControllersWithProfile:(id)arg1 ;
-(void)setProfileTitlePageView:(MCProfileTitlePageView *)arg1 ;
-(MCProfileTitlePageView *)profileTitlePageView;
-(MCProfileTitlePageMetaDataSectionController *)metaDataSectionController;
-(void)_updateMetaDataSectionHeight;
-(void)installButtonTapped:(id)arg1 ;
-(void)_updateBottomInsetToEnableCompleteScrollAnimation;
-(MCProfileTitlePageViewModel *)viewModel;
-(void)setMetaDataSectionHeight:(double)arg1 ;
-(BOOL)hasUpdatedBottomInset;
-(void)setHasUpdatedBottomInset:(BOOL)arg1 ;
-(double)metaDataSectionHeight;
-(void)_resetNavigationBarStyleForViewController:(id)arg1 ;
-(void)setPasscodeCompletionHandler:(id)arg1 ;
-(void)setUserInputCompletionHandler:(id)arg1 ;
-(void)setAuthenticationPreparationHandler:(id)arg1 ;
-(void)setAuthenticationCompletionHandler:(id)arg1 ;
-(id)passcodeCompletionHandler;
-(void)setQuestionsController:(MCInstallProfileQuestionViewController *)arg1 ;
-(id)userInputCompletionHandler;
-(id)authenticationCompletionHandler;
-(id)authenticationPreparationHandler;
-(void)viewControllerHasBeenDismissed;
-(void)setViewModel:(MCProfileTitlePageViewModel *)arg1 ;
-(void)setMetaDataSectionController:(MCProfileTitlePageMetaDataSectionController *)arg1 ;
-(MCInstallProfileQuestionViewController *)questionsController;
@end

