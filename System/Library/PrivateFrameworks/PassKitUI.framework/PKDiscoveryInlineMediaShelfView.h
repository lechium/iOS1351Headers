/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDiscoveryShelfView.h>

@class PKDiscoveryInlineMediaShelf, PKDiscoveryMedia, UIView, UIImageView, PKDiscoveryInlineMediaCaptionView;

@interface PKDiscoveryInlineMediaShelfView : PKDiscoveryShelfView {

	PKDiscoveryInlineMediaShelf* _shelf;
	PKDiscoveryMedia* _media;
	UIView* _imageContainerView;
	UIImageView* _imageView;
	PKDiscoveryInlineMediaCaptionView* _captionView;
	BOOL _isInline;
	double _leadingSpace;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithShelf:(id)arg1 ;
-(void)_loadImageFromBundle;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
@end

