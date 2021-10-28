/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemindersUI.framework/RemindersUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemindersUI/RemindersUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, RMUIUpNextLabel, UIImageView, RMUIUpNextRowSeparator, UIView;

@interface RMUIUpNextCell : UIView {

	UIVisualEffectView* _primaryVibrantView;
	UIVisualEffectView* _secondaryVibrantView;
	UIVisualEffectView* _tertiaryVibrantView;
	RMUIUpNextLabel* _timeLabel;
	RMUIUpNextLabel* _titleLabel;
	RMUIUpNextLabel* _locationLabel;
	UIImageView* _circleImageView;
	RMUIUpNextRowSeparator* _rowSeparator;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(UIView *)contentView;
-(void)setFrame:(CGRect)arg1 ;
-(void)setupConstraints;
-(id)titleStringForReminder:(id)arg1 ;
-(void)updateMaxLayoutWidth;
-(double)timeViewWidth;
-(double)rightMarginForTimeViewWidth:(double)arg1 ;
-(double)leftMarginForTimeViewWidth:(double)arg1 ;
-(id)priorityImageForLevel:(long long)arg1 withColor:(id)arg2 ;
-(id)initWithReminder:(id)arg1 showRowSeparator:(BOOL)arg2 ;
@end
