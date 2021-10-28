/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIActivityIndicatorView, NSArray, UILabel, EKGroupInfoButton, EKCalendarChooser, EKGroupInfo;

@interface EKCalendarChooserHeaderView : UITableViewHeaderFooterView {

	UIActivityIndicatorView* _spinner;
	NSArray* _primaryLabelWithShowAllButtonLargeConstraints;
	NSArray* _primaryLabelWithoutShowAllButtonLargeConstraints;
	NSArray* _commonLargeConstraints;
	NSArray* _primaryLabelWithShowAllButtonNormalConstraints;
	NSArray* _primaryLabelWithoutShowAllButtonNormalConstraints;
	NSArray* _commonNormalConstraints;
	NSArray* _commonConstraints;
	UILabel* _primaryLabel;
	EKGroupInfoButton* _showAllButton;
	EKCalendarChooser* _chooser;
	EKGroupInfo* _group;

}

@property (nonatomic,retain) UILabel * primaryLabel;                          //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) EKGroupInfoButton * showAllButton;               //@synthesize showAllButton=_showAllButton - In the implementation block
@property (assign,nonatomic) BOOL showAllButtonHidden; 
@property (assign,nonatomic,__weak) EKCalendarChooser * chooser;              //@synthesize chooser=_chooser - In the implementation block
@property (nonatomic,retain) EKGroupInfo * group;                             //@synthesize group=_group - In the implementation block
-(void)setGroup:(EKGroupInfo *)arg1 ;
-(EKGroupInfo *)group;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)_createConstraints;
-(UILabel *)primaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)_activateConstraints;
-(EKGroupInfoButton *)showAllButton;
-(BOOL)showAllButtonHidden;
-(void)_groupShowAllButtonTapped:(id)arg1 ;
-(void)_eventStoreChanged;
-(void)updateSpinner;
-(EKCalendarChooser *)chooser;
-(void)setChooser:(EKCalendarChooser *)arg1 ;
-(void)setShowAllButtonHidden:(BOOL)arg1 ;
-(void)setShowAllButton:(EKGroupInfoButton *)arg1 ;
@end
