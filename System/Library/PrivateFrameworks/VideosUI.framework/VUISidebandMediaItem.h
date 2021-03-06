/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIMediaItem.h>
#import <libobjc.A.dylib/VUISidebandMediaEntityImageLoadParamsCreating.h>

@class VUIVideoManagedObject, VUISidebandMediaItemAssetController;

@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating> {

	VUIVideoManagedObject* _videoManagedObject;
	VUISidebandMediaItemAssetController* _assetController;

}

@property (nonatomic,retain) VUIVideoManagedObject * videoManagedObject;                         //@synthesize videoManagedObject=_videoManagedObject - In the implementation block
@property (nonatomic,retain) VUISidebandMediaItemAssetController * assetController;              //@synthesize assetController=_assetController - In the implementation block
-(void)dealloc;
-(id)title;
-(id)duration;
-(id)isLocal;
-(id)storeID;
-(id)isPlayable;
-(id)addedDate;
-(id)showTitle;
-(id)releaseDate;
-(id)seasonNumber;
-(id)genreTitle;
-(id)episodeNumber;
-(id)canonicalID;
-(VUISidebandMediaItemAssetController *)assetController;
-(void)setAssetController:(VUISidebandMediaItemAssetController *)arg1 ;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)showIdentifier;
-(id)seasonIdentifier;
-(id)episodeIndexInSeries;
-(id)seasonTitle;
-(id)initWithMediaLibrary:(id)arg1 videoManagedObject:(id)arg2 requestedProperties:(id)arg3 ;
-(id)downloadExpirationDate;
-(void)_videoManagedObjectPlaybackExpirationWillChange:(id)arg1 ;
-(VUIVideoManagedObject *)videoManagedObject;
-(void)setVideoManagedObject:(VUIVideoManagedObject *)arg1 ;
@end

