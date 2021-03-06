/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXImageView.h>

@class SXGalleryItem;

@interface SXGalleryItemImageView : SXImageView {

	SXGalleryItem* _galleryItem;

}

@property (nonatomic,readonly) SXGalleryItem * galleryItem;              //@synthesize galleryItem=_galleryItem - In the implementation block
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)initWithGalleryItem:(id)arg1 imageResource:(id)arg2 resourceDataSource:(id)arg3 reachabilityProvider:(id)arg4 ;
-(SXGalleryItem *)galleryItem;
@end

