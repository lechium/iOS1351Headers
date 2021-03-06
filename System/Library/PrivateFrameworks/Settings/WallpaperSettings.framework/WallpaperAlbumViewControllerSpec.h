/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WallpaperSettings/WallpaperSettings-Structs.h>
@class PUPhotosGridViewControllerSpec;

@interface WallpaperAlbumViewControllerSpec : NSObject {

	PUPhotosGridViewControllerSpec* _gridSpec;

}

@property (nonatomic,readonly) PUPhotosGridViewControllerSpec * gridSpec;              //@synthesize gridSpec=_gridSpec - In the implementation block
+(Class)gridSpecClass;
-(id)init;
-(PUPhotosGridViewControllerSpec *)gridSpec;
-(void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(void)configureFactoryGridLayout:(id)arg1 forWidth:(double)arg2 andThumbnailSize:(CGSize)arg3 ;
@end

