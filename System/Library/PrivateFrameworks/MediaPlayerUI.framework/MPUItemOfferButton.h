/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <StoreKitUI/SKUIItemOfferButton.h>

@interface MPUItemOfferButton : SKUIItemOfferButton {

	UIEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitRectInsets;              //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
-(CGSize)intrinsicContentSize;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(UIEdgeInsets)hitRectInsets;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
@end
