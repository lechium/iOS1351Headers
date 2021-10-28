/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol HKTitledBuddyHeaderViewDelegate;
@class UITextView, UIButton, NSString, NSLayoutConstraint, UILabel;

@interface HKTitledBuddyHeaderView : UIView {

	UITextView* _bodyTextView;
	UIButton* _optionalLinkButton;
	NSString* _bodyText;
	long long _bodyTextAlignment;
	NSLayoutConstraint* _logoTitleGapConstraint;
	NSLayoutConstraint* _bodyZeroHeightConstraint;
	NSLayoutConstraint* _bodyBottomConstraint;
	NSLayoutConstraint* _titleBottomConstraint;
	NSLayoutConstraint* _bodyFirstBaselineConstraint;
	NSLayoutConstraint* _bodyLastBaselineToLinkConstraint;
	NSLayoutConstraint* _linkButtonLastBaselineToBottomConstraint;
	NSLayoutConstraint* _titleLabelBaselineConstraint;
	id<HKTitledBuddyHeaderViewDelegate> _delegate;
	UILabel* _titleLabel;

}

@property (assign,nonatomic,__weak) id<HKTitledBuddyHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * bodyText; 
@property (assign,nonatomic) long long bodyTextAlignment; 
@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
-(id<HKTitledBuddyHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<HKTitledBuddyHeaderViewDelegate>)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(double)bottomPadding;
-(void)_updateForCurrentSizeCategory;
-(id)bodyTextView;
-(void)setBodyTextAlignment:(long long)arg1 ;
-(long long)bodyTextAlignment;
-(id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2 ;
-(void)setBodyText:(id)arg1 alignment:(long long)arg2 ;
-(void)deactivateDefaultTitleLabelBaselineConstraint;
-(void)_linkButtonTapped:(id)arg1 ;
-(id)_attributedBodyTextWithString:(id)arg1 alignment:(long long)arg2 ;
-(void)_updateBodyTextViewConstraints;
@end
