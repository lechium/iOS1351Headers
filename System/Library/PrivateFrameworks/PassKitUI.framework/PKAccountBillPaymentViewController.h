/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>
#import <libobjc.A.dylib/PKBillPaymentRingViewDelegate.h>
#import <libobjc.A.dylib/PKAccountBillPaymentControllerDelegate.h>
#import <libobjc.A.dylib/PKAddBankAccountInformationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKBillPaymentRingViewDataSource.h>
#import <libobjc.A.dylib/PKAccountBillPaymentAmountDescriptionViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceAccountResolutionControllerDelegate.h>

@protocol PKAccountBillPaymentObserver;
@class PKAccount, PKPaymentPass, NSArray, PKAccountBillPaymentController, PKBillPaymentSuggestedAmountController, PKBillPaymentSuggestedAmountList, PKCompoundInterestCalculator, NSMutableDictionary, NSDateFormatter, NSNumberFormatter, NSDecimalNumber, NSDictionary, PKAccountServiceAccountResolutionCofiguration, PKAccountBillPaymentAmountDescriptionView, PKBillPaymentRingView, UILabel, UIButton, PKContinuousButton, _PKUIKVisibilityBackdropView, UIScrollView, UIImageView, UITapGestureRecognizer, PKAddBankAccountInformationViewController, PKAccountServiceAccountResolutionController, CLInUseAssertion, NSString;

@interface PKAccountBillPaymentViewController : UIViewController <_PKUIKVisibilityBackdropViewDelegate, PKBillPaymentRingViewDelegate, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKBillPaymentRingViewDataSource, PKAccountBillPaymentAmountDescriptionViewDelegate, UIScrollViewDelegate, PKAccountServiceAccountResolutionControllerDelegate> {

	PKAccount* _account;
	PKPaymentPass* _pass;
	unsigned long long _interstitialState;
	unsigned long long _featuredViewState;
	NSArray* _installmentPlans;
	unsigned long long _screenType;
	PKAccountBillPaymentController* _billPaymentCoordinator;
	PKBillPaymentSuggestedAmountController* _suggestedAmountController;
	PKBillPaymentSuggestedAmountList* _suggestionList;
	PKCompoundInterestCalculator* _interestCalculator;
	NSMutableDictionary* _cachedInterestResults;
	NSDateFormatter* _interestDateFormatter;
	NSNumberFormatter* _amountFormatter;
	NSDecimalNumber* _apr;
	NSMutableDictionary* _smallRingInterestAttributes;
	NSDictionary* _smallRingInterestDateAttributes;
	PKAccountServiceAccountResolutionCofiguration* _configuration;
	BOOL _hasAnimatedRing;
	BOOL _performingAction;
	BOOL _buttonsArePayButtons;
	BOOL _shouldEnablePayLaterButton;
	BOOL _viewIsEnabled;
	BOOL _payButtonsEnabled;
	BOOL _usesAccessibilityLayout;
	BOOL _usesLargestAccessibilityLayout;
	BOOL _showKeyboard;
	BOOL _keyboardVisible;
	CGRect _keyboardFrame;
	CGRect _lastKeyboardFrame;
	BOOL _inLayoutSubviews;
	PKAccountBillPaymentAmountDescriptionView* _amountDescriptionView;
	PKBillPaymentRingView* _ringView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _tertiaryButton;
	PKContinuousButton* _primaryButton;
	PKContinuousButton* _secondaryButton;
	UILabel* _smallRingInterestLabel;
	_PKUIKVisibilityBackdropView* _backdropView;
	UIScrollView* _scrollView;
	UIImageView* _productHeroView;
	UITapGestureRecognizer* _ringViewTapRecognizer;
	PKAddBankAccountInformationViewController* _addBankAccountViewController;
	PKAccountServiceAccountResolutionController* _accountResolutionController;
	CLInUseAssertion* _CLInUse;
	unsigned char _visibility;
	id<PKAccountBillPaymentObserver> _observer;

}

@property (nonatomic,readonly) PKAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass;                                        //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountBillPaymentObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundColor;
+(UIEdgeInsets)contentMargins;
+(BOOL)canPayBillForAccount:(id)arg1 displayableError:(id*)arg2 ;
+(void)billPaymentViewControllerForAccount:(id)arg1 paymentPass:(id)arg2 configuration:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(id)alertControllerForDisplayableError:(id)arg1 ;
+(id)displayableErrorForAccount:(id)arg1 reason:(unsigned long long)arg2 ;
+(void)_billPaymentViewControllerForAccount:(id)arg1 paymentPass:(id)arg2 configuration:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(CGSize)smallRingSizeWithAccessibilityLayout:(BOOL)arg1 ;
+(double)ringTopMargin;
+(double)smallRingTopMargin;
-(void)dealloc;
-(id<PKAccountBillPaymentObserver>)observer;
-(void)setObserver:(id<PKAccountBillPaymentObserver>)arg1 ;
-(PKAccount *)account;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)_accountDidChange:(id)arg1 ;
-(id)_title;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_setAccount:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillChange:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(id)_paymentAmount;
-(void)_cancelButtonTapped:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)accountBillPaymentController:(id)arg1 hasChangedState:(unsigned long long)arg2 error:(id)arg3 updatedAccount:(id)arg4 ;
-(void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_presentAlertControllerForError:(id)arg1 ;
-(id)_addBankAccountInformationViewController;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1 ;
-(void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg1 ;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(id)initWithAccount:(id)arg1 paymentPass:(id)arg2 suggestedAmountController:(id)arg3 configuration:(id)arg4 interstitalState:(unsigned long long)arg5 ;
-(void)_updateSubtitle;
-(void)_setupAmountDescriptionViewForInterstitial;
-(void)_payNowButtonTapped:(id)arg1 ;
-(void)_payLaterButtonTapped:(id)arg1 ;
-(void)_showKeyboardButtonTapped:(id)arg1 ;
-(void)_contactSupportButtonTapped:(id)arg1 ;
-(void)_interstitialButtonTapped:(id)arg1 ;
-(void)_configureProductHeroView;
-(BOOL)_interestLabelIsOutsideSmallRing;
-(void)_updateNavigationTitle;
-(void)_updateForShowKeyboardAnimated:(BOOL)arg1 ;
-(void)_layoutFooterWithState:(SCD_Struct_PK5)arg1 ;
-(CGSize)_layoutScrollViewWithContentWidth:(double)arg1 ;
-(void)_showOrHideKeypad;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(id)_interestForAmount:(id)arg1 ;
-(id)_interestPostDate;
-(id)_interestStringForAmount:(id)arg1 ;
-(void)_setPayButtonsEnabled:(BOOL)arg1 ;
-(void)_updateInterestString;
-(void)_dismissViewControllerWithSuccess:(BOOL)arg1 ;
-(void)_updateLayoutForKeyboardAction:(/*^block*/id)arg1 ;
-(void)_setShowKeyboard:(BOOL)arg1 ;
-(void)_tappedSmallRingView:(id)arg1 ;
-(void)_performBillPaymentWithAmount:(id)arg1 billPaymentSuggestedAmountDataEvent:(id)arg2 ;
-(void)_presentAddBankAccount;
-(void)billPaymentRingView:(id)arg1 selectedSuggestedAmount:(id)arg2 selectedSuggestedAmountIsTarget:(BOOL)arg3 userInitiatedChange:(BOOL)arg4 ;
-(id)billPaymentRingView:(id)arg1 topCurvedTextForSuggestedAmount:(id)arg2 ;
-(id)billPaymentRingView:(id)arg1 bottomCurvedTextForSuggestedAmount:(id)arg2 ;
-(id)disabledTopCurvedTextForBillPaymentRingView:(id)arg1 ;
-(id)disabledBottomCurvedTextForBillPaymentRingView:(id)arg1 ;
-(id)billPaymentRingView:(id)arg1 interestTextForAmount:(id)arg2 ;
-(id)billPaymentRingViewZeroInterestText:(id)arg1 ;
-(void)billPaymentAmountDescriptionView:(id)arg1 hasChangedAmount:(id)arg2 isValidAmount:(BOOL)arg3 ;
-(void)billPaymentAmountDescriptionViewHasTappedLearnMore:(id)arg1 ;
-(id)initWithSuggestedAmountController:(id)arg1 paymentPass:(id)arg2 ;
@end

