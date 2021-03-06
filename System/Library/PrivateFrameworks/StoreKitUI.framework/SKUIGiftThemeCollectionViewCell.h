/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class SKUIGiftConfiguration, SKUIGift, UIImageView, SKUIGiftItemView, UILabel, SKUIGiftTheme, UIImage;

@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell {

	SKUIGiftConfiguration* _giftConfiguration;
	SKUIGift* _gift;
	UIImageView* _headerImageView;
	SKUIGiftItemView* _itemView;
	UILabel* _messageLabel;
	UILabel* _priceLabel;
	UILabel* _senderNameLabel;
	UILabel* _senderNameLabelLabel;
	SKUIGiftTheme* _theme;

}

@property (nonatomic,retain) SKUIGiftConfiguration * giftConfiguration;              //@synthesize giftConfiguration=_giftConfiguration - In the implementation block
@property (nonatomic,retain) SKUIGift * gift;                                        //@synthesize gift=_gift - In the implementation block
@property (nonatomic,retain) SKUIGiftTheme * theme;                                  //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)_setMessage:(id)arg1 ;
-(id)_itemView;
-(SKUIGiftTheme *)theme;
-(void)setTheme:(SKUIGiftTheme *)arg1 ;
-(void)_setPrice:(id)arg1 ;
-(SKUIGift *)gift;
-(SKUIGiftConfiguration *)giftConfiguration;
-(void)setItemImage:(UIImage *)arg1 ;
-(void)setGift:(SKUIGift *)arg1 ;
-(void)reloadThemeHeaderImage;
-(void)setGiftConfiguration:(SKUIGiftConfiguration *)arg1 ;
-(UIImage *)itemImage;
-(void)_setHeaderImage:(id)arg1 ;
-(void)_setSenderName:(id)arg1 ;
-(void)_reloadItemView;
@end

