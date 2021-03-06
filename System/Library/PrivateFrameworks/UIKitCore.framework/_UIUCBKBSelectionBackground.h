/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKBKeyView;

@interface _UIUCBKBSelectionBackground : UIView {

	UIKBKeyView* _backgroundProvidingView;
	BOOL _showButtonShape;

}

@property (assign,nonatomic) BOOL showButtonShape;              //@synthesize showButtonShape=_showButtonShape - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setShowButtonShape:(BOOL)arg1 ;
-(void)_updateBackgroundProvidingView;
-(id)_makeBackgroundView;
-(BOOL)showButtonShape;
@end

