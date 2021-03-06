/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UITabBarAccessoryView : UIView {

	UIView* _contentView;
	CGSize _preferredSize;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                //@synthesize preferredSize=_preferredSize - In the implementation block
-(id)init;
-(void)commonInit;
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
@end

