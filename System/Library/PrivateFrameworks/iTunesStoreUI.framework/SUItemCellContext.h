/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUArtworkCellContext.h>

@interface SUItemCellContext : SUArtworkCellContext {

	CFDictionaryRef _cachedRatingImages;
	SCD_Struct_SU7* _stringSizeCacheKeyCallBacks;
	CFDictionaryRef _stringSizes;

}

@property (assign,nonatomic) SCD_Struct_SU7* stringSizeCacheKeyCallBacks;              //@synthesize stringSizeCacheKeyCallBacks=_stringSizeCacheKeyCallBacks - In the implementation block
-(id)init;
-(void)dealloc;
-(void)resetLayoutCaches;
-(id)ratingImageForRating:(float)arg1 style:(long long)arg2 ;
-(CGSize)sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(CGSize)arg3 ;
-(SCD_Struct_SU7*)stringSizeCacheKeyCallBacks;
-(void)setStringSizeCacheKeyCallBacks:(SCD_Struct_SU7*)arg1 ;
@end
