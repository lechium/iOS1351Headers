/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKInlineNotificationView.h>

@class UIView, UIButton, UILabel, UIImage, NSString;

@interface CKTwoButtonInlineNotificationView : CKInlineNotificationView {

	UIView* _contentView;
	UIButton* _failureButton;
	UILabel* _headerLabel;
	UILabel* _descriptionLabel;
	UIButton* _leftButton;
	UIButton* _rightButton;
	UIView* _horizontalDivider;
	UIView* _verticalDivider;
	UIView* _leftGrayoutView;
	UIView* _rightGrayoutView;

}

@property (nonatomic,retain) UIButton * failureButton;                 //@synthesize failureButton=_failureButton - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                    //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;               //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * leftButton;                    //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                   //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) UIView * horizontalDivider;               //@synthesize horizontalDivider=_horizontalDivider - In the implementation block
@property (nonatomic,retain) UIView * verticalDivider;                 //@synthesize verticalDivider=_verticalDivider - In the implementation block
@property (nonatomic,retain) UIView * leftGrayoutView;                 //@synthesize leftGrayoutView=_leftGrayoutView - In the implementation block
@property (nonatomic,retain) UIView * rightGrayoutView;                //@synthesize rightGrayoutView=_rightGrayoutView - In the implementation block
@property (assign,nonatomic) BOOL leftButtonIsGrayedOut; 
@property (assign,nonatomic) BOOL rightButtonIsGrayedOut; 
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) NSString * headerText; 
@property (nonatomic,retain) NSString * descriptionText; 
@property (nonatomic,retain) NSString * leftButtonText; 
@property (nonatomic,retain) NSString * rightButtonText; 
-(void)dealloc;
-(id)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)leftButton;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setLeftButton:(UIButton *)arg1 ;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setVerticalDivider:(UIView *)arg1 ;
-(UIView *)verticalDivider;
-(void)setHorizontalDivider:(UIView *)arg1 ;
-(UIView *)horizontalDivider;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)_updateFonts;
-(UIButton *)rightButton;
-(void)setRightButton:(UIButton *)arg1 ;
-(CGSize)contentViewSizeThatFits:(CGSize)arg1 ;
-(void)setLeftButtonText:(NSString *)arg1 ;
-(void)setRightButtonText:(NSString *)arg1 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)_handleTouchDown:(id)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(void)_handleTouchUpOutside:(id)arg1 ;
-(UIButton *)failureButton;
-(void)setFailureButton:(UIButton *)arg1 ;
-(double)_heightForTopBoxWithContainerWidth:(double)arg1 failureButtonFrame:(CGRect*)arg2 labelFrame:(CGRect*)arg3 descriptionFrame:(CGRect*)arg4 ;
-(double)_heightForBottomBoxWithContainerWidth:(double)arg1 startingYOffset:(double)arg2 leftButtonFrame:(CGRect*)arg3 rightButtonFrame:(CGRect*)arg4 dividerFrame:(CGRect*)arg5 leftGrayoutViewFrame:(CGRect*)arg6 rightGrayoutViewFrame:(CGRect*)arg7 ;
-(UIView *)leftGrayoutView;
-(UIView *)rightGrayoutView;
-(void)setLeftButtonIsGrayedOut:(BOOL)arg1 ;
-(void)setRightButtonIsGrayedOut:(BOOL)arg1 ;
-(NSString *)leftButtonText;
-(NSString *)rightButtonText;
-(BOOL)leftButtonIsGrayedOut;
-(BOOL)rightButtonIsGrayedOut;
-(void)setLeftGrayoutView:(UIView *)arg1 ;
-(void)setRightGrayoutView:(UIView *)arg1 ;
@end

