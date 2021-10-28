/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UILabel, NSLayoutConstraint;

@interface MiroDurationPickerCell : UIView {

	UILabel* _textLabel;
	NSLayoutConstraint* _textLabelLeadingConstraint;
	NSLayoutConstraint* _textLabelTrailingConstraint;

}

@property (nonatomic,retain) UILabel * textLabel;                                           //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLabelLeadingConstraint;               //@synthesize textLabelLeadingConstraint=_textLabelLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLabelTrailingConstraint;              //@synthesize textLabelTrailingConstraint=_textLabelTrailingConstraint - In the implementation block
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setTextLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextLabelTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textLabelLeadingConstraint;
-(NSLayoutConstraint *)textLabelTrailingConstraint;
@end
