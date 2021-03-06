/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate.h>

@protocol WFActionDrawerSiriSuggestionsTableViewCellDelegate;
@class WFActionDrawerSection, UIViewController, WFModuleTitleView, UIButton, UICollectionView, INIntent, UIImage, WFActionDrawerSiriSuggestionsCollectionViewManager, NSLayoutConstraint;

@interface WFActionDrawerSiriSuggestionsTableViewCell : UITableViewCell <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> {

	BOOL _configuredForDailyRoutines;
	WFActionDrawerSection* _section;
	id<WFActionDrawerSiriSuggestionsTableViewCellDelegate> _delegate;
	UIViewController* _containingViewController;
	WFModuleTitleView* _titleView;
	UIButton* _infoButton;
	UICollectionView* _donationsCollectionView;
	INIntent* _intent;
	UIImage* _icon;
	WFActionDrawerSiriSuggestionsCollectionViewManager* _donationsCollectionViewManager;
	NSLayoutConstraint* _collectionViewHeightConstraint;

}

@property (assign,nonatomic,__weak) WFModuleTitleView * titleView;                                                             //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * infoButton;                                                                     //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * donationsCollectionView;                                                //@synthesize donationsCollectionView=_donationsCollectionView - In the implementation block
@property (nonatomic,retain) INIntent * intent;                                                                                //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                                                                   //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) WFActionDrawerSiriSuggestionsCollectionViewManager * donationsCollectionViewManager;              //@synthesize donationsCollectionViewManager=_donationsCollectionViewManager - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collectionViewHeightConstraint;                                              //@synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint - In the implementation block
@property (nonatomic,retain) WFActionDrawerSection * section;                                                                  //@synthesize section=_section - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerSiriSuggestionsTableViewCellDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * containingViewController;                                               //@synthesize containingViewController=_containingViewController - In the implementation block
@property (assign,nonatomic) BOOL configuredForDailyRoutines;                                                                  //@synthesize configuredForDailyRoutines=_configuredForDailyRoutines - In the implementation block
-(id<WFActionDrawerSiriSuggestionsTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerSiriSuggestionsTableViewCellDelegate>)arg1 ;
-(INIntent *)intent;
-(void)traitCollectionDidChange:(id)arg1 ;
-(WFActionDrawerSection *)section;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(WFModuleTitleView *)titleView;
-(void)setTitleView:(WFModuleTitleView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSection:(WFActionDrawerSection *)arg1 ;
-(void)setIntent:(INIntent *)arg1 ;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(void)setCollectionViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)collectionViewHeightConstraint;
-(void)setContainingViewController:(UIViewController *)arg1 ;
-(UIViewController *)containingViewController;
-(void)setConfiguredForDailyRoutines:(BOOL)arg1 ;
-(BOOL)configuredForDailyRoutines;
-(void)siriSuggestionsCollectionViewManager:(id)arg1 didSelectAction:(id)arg2 ;
-(void)siriSuggestionsCollectionViewManager:(id)arg1 showViewController:(id)arg2 ;
-(void)configureWithActionDrawerSection:(id)arg1 ;
-(void)configureLoading;
-(void)infoButtonPressed;
-(UICollectionView *)donationsCollectionView;
-(void)setDonationsCollectionView:(UICollectionView *)arg1 ;
-(WFActionDrawerSiriSuggestionsCollectionViewManager *)donationsCollectionViewManager;
-(void)setDonationsCollectionViewManager:(WFActionDrawerSiriSuggestionsCollectionViewManager *)arg1 ;
@end

