/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPhotosUICompanion/NanoPhotosUICompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult;

@interface NPTOLocketReader : NSObject <NSCopying> {

	/*^block*/id _albumContentsLoaderBlock;
	PHFetchResult* _albumContents;

}

@property (nonatomic,copy) id albumContentsLoaderBlock;                              //@synthesize albumContentsLoaderBlock=_albumContentsLoaderBlock - In the implementation block
@property (nonatomic,retain) PHFetchResult * albumContents;                          //@synthesize albumContents=_albumContents - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLoadedPhotos; 
@property (nonatomic,readonly) unsigned long long numberOfTotalPhotos; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfLoadedPhotos;
-(unsigned long long)numberOfTotalPhotos;
-(void)loadPhotoAtIndex:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfPhotoWithIdentifier:(id)arg1 ;
-(void)setAlbumContentsLoaderBlock:(id)arg1 ;
-(void)setAlbumContents:(PHFetchResult *)arg1 ;
-(PHFetchResult *)albumContents;
-(id)_assetsInRange:(NSRange)arg1 ;
-(void)enumerateThumbnailsInRange:(NSRange)arg1 handler:(/*^block*/id)arg2 ;
-(void)loadPhotosAtIndices:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)albumContentsLoaderBlock;
@end
