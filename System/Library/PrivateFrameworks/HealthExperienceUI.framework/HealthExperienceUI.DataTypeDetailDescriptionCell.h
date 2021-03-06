/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString, UILabel, UITextView, NSLayoutConstraint;

@interface HealthExperienceUI.DataTypeDetailDescriptionCell : UICollectionViewCell <UITextViewDelegate> {

	 detailTextLabel;
	 attributionTextView;
	 labelSpacingConstraint;
	 item;

}

@property (readonly,nonatomic) NSString * description; 
@property (assign,__weak,nonatomic) UILabel * detailTextLabel; 
@property (assign,__weak,nonatomic) UITextView * attributionTextView; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * labelSpacingConstraint; 
-(NSString *)description;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(UILabel *)detailTextLabel;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)labelSpacingConstraint;
-(void)setLabelSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(UITextView *)attributionTextView;
-(void)setAttributionTextView:(UITextView *)arg1 ;
@end

