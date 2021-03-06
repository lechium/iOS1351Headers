/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIServiceCellDelegate;
@class UITextView;

@interface RTTUIServiceUpdateCell : UITableViewCell {

	UITextView* _titleView;
	UITextView* _subtitleView;
	id<RTTUIServiceCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIServiceCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightForWidth:(double)arg1 withDelegate:(id)arg2 ;
-(id<RTTUIServiceCellDelegate>)delegate;
-(void)setDelegate:(id<RTTUIServiceCellDelegate>)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)layoutSubviews;
-(void)updateLayout;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)adjustTextViewSize;
-(id)serviceMessage;
@end

