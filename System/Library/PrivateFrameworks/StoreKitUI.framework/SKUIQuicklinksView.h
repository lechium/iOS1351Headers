/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor, UILabel, NSString;

@interface SKUIQuicklinksView : UIView {

	UIView* _borderView;
	UIView* _collectionView;
	UIColor* _titleColor;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)collectionView;
-(void)setCollectionView:(UIView *)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
@end

