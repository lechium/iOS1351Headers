/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface SKUICategoryTableViewCell : UITableViewCell {

	UIView* _separatorView;
	CGSize _expectedImageSize;
	BOOL _layoutNeedsLayout;

}

@property (assign,nonatomic) CGSize expectedImageSize;              //@synthesize expectedImageSize=_expectedImageSize - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setExpectedImageSize:(CGSize)arg1 ;
-(CGSize)expectedImageSize;
@end
