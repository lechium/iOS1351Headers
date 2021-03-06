/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIBaseSnippetViewController.h>

@protocol SiriUIReusableView;
@class UICollectionReusableView, NSUUID, UIColor, NSAttributedString, NSString, NSArray, SAUIAppPunchOut, UIView, SAUIConfirmationOptions;

@interface SiriUISnippetViewController : SiriUIBaseSnippetViewController {

	UICollectionReusableView*<SiriUIReusableView> _headerView;
	UICollectionReusableView*<SiriUIReusableView> _footerView;
	UICollectionReusableView*<SiriUIReusableView> _transparentHeaderView;
	UICollectionReusableView*<SiriUIReusableView> _transparentFooterView;
	BOOL _wantsConfirmationInsets;
	BOOL _isFullPadWidth;
	BOOL _isTransparent;
	BOOL _loading;
	BOOL _confirmed;
	BOOL _cancelled;
	BOOL _virgin;
	BOOL _willAnimateConfirmation;
	BOOL _willAnimateCancellation;
	BOOL _awaitingSuccessOrFailureEvent;
	BOOL _showHeaderChevron;
	BOOL _provisional;
	NSUUID* _instrumentationTurnIdentifier;
	UIColor* _titleTextColor;
	UIColor* _titleBackgroundColor;
	NSAttributedString* _attributedSubtitle;
	NSString* _navigationTitle;
	NSArray* _requestContext;
	SAUIAppPunchOut* _headerPunchOut;
	SAUIAppPunchOut* _snippetPunchOut;
	UIView* _containingView;
	long long _defaultKeylineType;
	SAUIConfirmationOptions* _previousConfirmationOptions;
	UIEdgeInsets _defaultViewInsets;

}

@property (assign,setter=_setWillAnimateConfirmation:,getter=_willAnimateConfirmation,nonatomic) BOOL willAnimateConfirmation;                                               //@synthesize willAnimateConfirmation=_willAnimateConfirmation - In the implementation block
@property (assign,setter=_setWillAnimateCancellation:,getter=_willAnimateCancellation,nonatomic) BOOL willAnimateCancellation;                                               //@synthesize willAnimateCancellation=_willAnimateCancellation - In the implementation block
@property (setter=_setPreviousConfirmationOptions:,getter=_previousConfirmationOptions,nonatomic,retain) SAUIConfirmationOptions * previousConfirmationOptions;              //@synthesize previousConfirmationOptions=_previousConfirmationOptions - In the implementation block
@property (assign,setter=_setAwaitingSuccessOrFailureEvent:,getter=_isAwaitingSuccessOrFailureEvent,nonatomic) BOOL awaitingSuccessOrFailureEvent;                           //@synthesize awaitingSuccessOrFailureEvent=_awaitingSuccessOrFailureEvent - In the implementation block
@property (assign,nonatomic) BOOL showHeaderChevron;                                                                                                                         //@synthesize showHeaderChevron=_showHeaderChevron - In the implementation block
@property (assign,setter=_setProvisional:,getter=_isProvisional,nonatomic) BOOL provisional;                                                                                 //@synthesize provisional=_provisional - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISnippetViewControllerDelegate> delegate; 
@property (nonatomic,retain) NSUUID * instrumentationTurnIdentifier;                                                                                                         //@synthesize instrumentationTurnIdentifier=_instrumentationTurnIdentifier - In the implementation block
@property (nonatomic,copy) UIColor * titleTextColor;                                                                                                                         //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,copy) UIColor * titleBackgroundColor;                                                                                                                   //@synthesize titleBackgroundColor=_titleBackgroundColor - In the implementation block
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSAttributedString * attributedSubtitle;                                                                                                          //@synthesize attributedSubtitle=_attributedSubtitle - In the implementation block
@property (nonatomic,copy) NSString * navigationTitle;                                                                                                                       //@synthesize navigationTitle=_navigationTitle - In the implementation block
@property (nonatomic,copy) NSArray * requestContext;                                                                                                                         //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * headerPunchOut;                                                                                                               //@synthesize headerPunchOut=_headerPunchOut - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * snippetPunchOut;                                                                                                              //@synthesize snippetPunchOut=_snippetPunchOut - In the implementation block
@property (assign,nonatomic) UIEdgeInsets defaultViewInsets;                                                                                                                 //@synthesize defaultViewInsets=_defaultViewInsets - In the implementation block
@property (assign,nonatomic) BOOL wantsConfirmationInsets;                                                                                                                   //@synthesize wantsConfirmationInsets=_wantsConfirmationInsets - In the implementation block
@property (assign,nonatomic) BOOL isFullPadWidth;                                                                                                                            //@synthesize isFullPadWidth=_isFullPadWidth - In the implementation block
@property (assign,nonatomic) BOOL isTransparent;                                                                                                                             //@synthesize isTransparent=_isTransparent - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                                                                                                  //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isConfirmed,nonatomic) BOOL confirmed;                                                                                                              //@synthesize confirmed=_confirmed - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                                                                                              //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic,__weak) UIView * containingView;                                                                                                                 //@synthesize containingView=_containingView - In the implementation block
@property (getter=isVirgin,nonatomic,readonly) BOOL virgin;                                                                                                                  //@synthesize virgin=_virgin - In the implementation block
@property (getter=isIndicatingActivity,nonatomic,readonly) BOOL indicatingActivity; 
@property (assign,nonatomic) long long defaultKeylineType;                                                                                                                   //@synthesize defaultKeylineType=_defaultKeylineType - In the implementation block
-(BOOL)isCancelled;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_headerView;
-(UIView *)containingView;
-(id)_footerView;
-(void)setCancelled:(BOOL)arg1 ;
-(id)_privateDelegate;
-(void)setContainingView:(UIView *)arg1 ;
-(BOOL)isTransparent;
-(BOOL)isLoading;
-(NSArray *)requestContext;
-(void)setRequestContext:(NSArray *)arg1 ;
-(NSString *)navigationTitle;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isConfirmed;
-(void)setConfirmed:(BOOL)arg1 ;
-(BOOL)isVirgin;
-(UIColor *)titleTextColor;
-(void)cancelButtonTapped:(id)arg1 ;
-(NSAttributedString *)attributedSubtitle;
-(void)setAttributedSubtitle:(NSAttributedString *)arg1 ;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(UIColor *)titleBackgroundColor;
-(void)setTitleBackgroundColor:(UIColor *)arg1 ;
-(void)confirmSnippet;
-(void)setNavigationTitle:(NSString *)arg1 ;
-(void)_cancelTouchesIfNecessary;
-(void)_resumeTouchesIfNecessary;
-(BOOL)isIndicatingActivity;
-(void)setManageBackgroundColor:(BOOL)arg1 ;
-(void)setDefaultViewInsets:(UIEdgeInsets)arg1 ;
-(BOOL)usePlatterStyle;
-(Class)footerViewClass;
-(void)configureReusableFooterView:(id)arg1 ;
-(double)desiredHeightForFooterView;
-(BOOL)shouldHidePriorViews;
-(BOOL)removedAfterDialogProgresses;
-(void)_setVirgin:(BOOL)arg1 ;
-(long long)_pinAnimationType;
-(long long)_insertionAnimation;
-(long long)_replacementAnimation;
-(BOOL)logContentsIfApplicable;
-(void)_setAwaitingSuccessOrFailureEvent:(BOOL)arg1 ;
-(void)willCancel;
-(BOOL)_isAwaitingSuccessOrFailureEvent;
-(void)willConfirm;
-(Class)transparentHeaderViewClass;
-(UIEdgeInsets)defaultViewInsets;
-(void)configureReusableTransparentHeaderView:(id)arg1 ;
-(double)desiredHeightForTransparentHeaderView;
-(BOOL)_hasConfirmationOrCancelledInsets;
-(void)siriWillLayoutSnippetView;
-(void)_cellDidLayoutSubviews;
-(void)siriDidLayoutSnippetView;
-(BOOL)_hasConfirmationButtons;
-(BOOL)_willAnimateConfirmation;
-(BOOL)_willAnimateCancellation;
-(double)desiredHeightForHeaderView;
-(double)desiredHeightForTransparentFooterView;
-(id)_transparentHeaderView;
-(id)_transparentFooterView;
-(SAUIAppPunchOut *)snippetPunchOut;
-(void)_snippetPunchOutButtonTapped;
-(SAUIAppPunchOut *)headerPunchOut;
-(BOOL)showHeaderChevron;
-(Class)headerViewClass;
-(id)_createReusableViewIfNeededWithClass:(Class)arg1 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(void)setWantsConfirmationInsets:(BOOL)arg1 ;
-(void)setShowHeaderChevron:(BOOL)arg1 ;
-(BOOL)_isProvisional;
-(BOOL)wantsConfirmationInsets;
-(id)_previousConfirmationOptions;
-(void)configureReusableTransparentFooterView:(id)arg1 ;
-(void)headerTapped:(id)arg1 ;
-(void)confirmButtonTapped:(id)arg1 ;
-(Class)transparentFooterViewClass;
-(BOOL)isMemoryIntensive;
-(void)_snippetViewControllerWillBeRemoved;
-(id)alternativeAceCommandsToPerformIfNotExposingViews;
-(BOOL)wantsToManageBackgroundColor;
-(void)setTopKeylineHidden:(BOOL)arg1 ;
-(NSUUID *)instrumentationTurnIdentifier;
-(void)setInstrumentationTurnIdentifier:(NSUUID *)arg1 ;
-(void)setHeaderPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setSnippetPunchOut:(SAUIAppPunchOut *)arg1 ;
-(BOOL)isFullPadWidth;
-(void)setIsFullPadWidth:(BOOL)arg1 ;
-(void)setIsTransparent:(BOOL)arg1 ;
-(long long)defaultKeylineType;
-(void)setDefaultKeylineType:(long long)arg1 ;
-(void)_setWillAnimateConfirmation:(BOOL)arg1 ;
-(void)_setWillAnimateCancellation:(BOOL)arg1 ;
-(void)_setPreviousConfirmationOptions:(id)arg1 ;
-(void)_setProvisional:(BOOL)arg1 ;
@end

