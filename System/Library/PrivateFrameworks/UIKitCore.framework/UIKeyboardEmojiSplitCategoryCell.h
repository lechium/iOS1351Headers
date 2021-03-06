/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell {

	UIImageView* _symbol;
	UILabel* _title;
	UIView* _selectedCircle;

}

@property (nonatomic,retain) UIImageView * symbol;                 //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,retain) UILabel * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * selectedCircle;              //@synthesize selectedCircle=_selectedCircle - In the implementation block
-(void)dealloc;
-(UIImageView *)symbol;
-(UILabel *)title;
-(void)setTitle:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)titleFont;
-(void)setPressIndicatorHidden:(BOOL)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(void)setSelectedCircleBlendMode:(BOOL)arg1 ;
-(id)symbolFont;
-(void)setSymbol:(UIImageView *)arg1 ;
-(UIView *)selectedCircle;
-(void)setSelectedCircle:(UIView *)arg1 ;
@end

