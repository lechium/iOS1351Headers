/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIVisualEffectView, UILabel, NSArray, NSString;

@interface AVTUserInfoView : UIView {

	BOOL _isRegisteredForCategorySizeChange;
	UIColor* _containerBackgroundColor;
	UIVisualEffectView* _userInfoEffectView;
	UILabel* _userInfoLabel;
	NSArray* _activeConstraints;
	NSDirectionalEdgeInsets _textInsets;

}

@property (assign,nonatomic) BOOL isRegisteredForCategorySizeChange;               //@synthesize isRegisteredForCategorySizeChange=_isRegisteredForCategorySizeChange - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * userInfoEffectView;              //@synthesize userInfoEffectView=_userInfoEffectView - In the implementation block
@property (nonatomic,retain) UILabel * userInfoLabel;                              //@synthesize userInfoLabel=_userInfoLabel - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                          //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) NSDirectionalEdgeInsets textInsets;                   //@synthesize textInsets=_textInsets - In the implementation block
@property (assign,nonatomic) UIColor * containerBackgroundColor;                   //@synthesize containerBackgroundColor=_containerBackgroundColor - In the implementation block
+(double)textVerticalPadding;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(void)_configure;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(NSDirectionalEdgeInsets)textInsets;
-(void)setTextInsets:(NSDirectionalEdgeInsets)arg1 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(void)setContainerBackgroundColor:(UIColor *)arg1 ;
-(UIVisualEffectView *)userInfoEffectView;
-(BOOL)isRegisteredForCategorySizeChange;
-(void)setIsRegisteredForCategorySizeChange:(BOOL)arg1 ;
-(UIColor *)containerBackgroundColor;
-(UILabel *)userInfoLabel;
-(void)setUserInfoEffectView:(UIVisualEffectView *)arg1 ;
-(void)setUserInfoLabel:(UILabel *)arg1 ;
@end

