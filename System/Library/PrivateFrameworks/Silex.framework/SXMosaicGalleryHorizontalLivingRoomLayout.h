/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXMosaicGalleryGroupLayout.h>

@interface SXMosaicGalleryHorizontalLivingRoomLayout : SXMosaicGalleryGroupLayout {

	BOOL _reverseLayout;

}

@property (assign,nonatomic) BOOL reverseLayout;              //@synthesize reverseLayout=_reverseLayout - In the implementation block
-(double)calculateHeight;
-(double)desiredHeightForLargeItem;
-(double)desiredHeightForSmallerItems;
-(NSRange)columnRangeForItem:(id)arg1 ;
-(NSRange)columnRangeForLargeItem;
-(NSRange)columnRangeForSmallerItems;
-(unsigned long long)indexOfLargeItem;
-(BOOL)reverseLayout;
-(id)calculateFrames;
-(void)setReverseLayout:(BOOL)arg1 ;
@end

