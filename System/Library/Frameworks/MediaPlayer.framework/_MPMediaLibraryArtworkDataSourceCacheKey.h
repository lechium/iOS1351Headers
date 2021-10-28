/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject {

	id _catalogIdentifier;
	CGSize _representationSize;

}

@property (nonatomic,copy) id catalogIdentifier;                     //@synthesize catalogIdentifier=_catalogIdentifier - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)representationSize;
-(void)setRepresentationSize:(CGSize)arg1 ;
-(id)initWithArtworkCatalog:(id)arg1 representativeSize:(CGSize)arg2 ;
-(id)catalogIdentifier;
-(void)setCatalogIdentifier:(id)arg1 ;
@end
