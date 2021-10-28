/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface SKUILinkButton : UIButton {

	long long _arrowStyle;

}

@property (nonatomic,readonly) long long arrowStyle;              //@synthesize arrowStyle=_arrowStyle - In the implementation block
+(id)buttonWithArrowStyle:(long long)arg1 ;
-(void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)tintColorDidChange;
-(id)initWithArrowStyle:(long long)arg1 ;
-(void)_reloadIcons;
-(double)_linkImagePaddingLeft;
-(long long)arrowStyle;
@end
