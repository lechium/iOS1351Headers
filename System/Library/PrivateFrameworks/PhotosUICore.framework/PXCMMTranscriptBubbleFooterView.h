/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, NSString;

@interface PXCMMTranscriptBubbleFooterView : UIView {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIImageView* _chevronImageView;

}

@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (assign,nonatomic) BOOL chevronIsHidden; 
+(double)desiredHeight;
+(double)_primaryToSecondaryBaselineSpacing;
+(double)_topToPrimaryBaselineSpacing;
+(double)_secondaryBaselineToBottomSpacing;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setChevronIsHidden:(BOOL)arg1 ;
-(BOOL)chevronIsHidden;
@end

