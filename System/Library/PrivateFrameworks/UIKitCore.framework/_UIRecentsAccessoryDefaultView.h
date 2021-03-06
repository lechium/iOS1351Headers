/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _UIRecentsAccessoryDefaultView : UIView {

	UILabel* _titleLabel;
	UILabel* _subheadLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subheadLabel;              //@synthesize subheadLabel=_subheadLabel - In the implementation block
-(id)init;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateLabelTextColors;
-(UILabel *)subheadLabel;
-(void)setSubheadLabel:(UILabel *)arg1 ;
@end

