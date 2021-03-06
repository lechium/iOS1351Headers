/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellSeparatorAppearanceDefining.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, UITextView, UIImageView, NSArray, UILayoutGuide, NSString;

@interface HUImageAndTextCell : UITableViewCell <HUCellSeparatorAppearanceDefining, HUCellProtocol> {

	HFItem* _item;
	UITextView* _messageTextView;
	UIImageView* _infoImageView;
	NSArray* _contentConstraints;
	UILayoutGuide* _infoImageViewTrailingMarginLayoutGuide;
	CGSize _imageViewRecommendedSize;

}

@property (nonatomic,readonly) UIImageView * infoImageView;                                         //@synthesize infoImageView=_infoImageView - In the implementation block
@property (nonatomic,retain) NSArray * contentConstraints;                                          //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * infoImageViewTrailingMarginLayoutGuide;              //@synthesize infoImageViewTrailingMarginLayoutGuide=_infoImageViewTrailingMarginLayoutGuide - In the implementation block
@property (nonatomic,readonly) UITextView * messageTextView;                                        //@synthesize messageTextView=_messageTextView - In the implementation block
@property (assign,nonatomic) CGSize imageViewRecommendedSize;                                       //@synthesize imageViewRecommendedSize=_imageViewRecommendedSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL prefersSeparatorsHidden; 
@property (nonatomic,retain) HFItem * item;                                                         //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)prepareForReuse;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setContentConstraints:(NSArray *)arg1 ;
-(NSArray *)contentConstraints;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(UITextView *)messageTextView;
-(UIImageView *)infoImageView;
-(void)setImageViewRecommendedSize:(CGSize)arg1 ;
-(void)_resetContentConstraints;
-(CGSize)imageViewRecommendedSize;
-(UILayoutGuide *)infoImageViewTrailingMarginLayoutGuide;
-(BOOL)prefersSeparatorsHidden;
@end

