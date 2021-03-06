/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHAssetCollection, PHFetchResult, NSMutableSet, NSMutableIndexSet, NSIndexSet, NSArray;

@interface PUPhotoSelectionEntry : NSObject <NSCopying> {

	BOOL _hasValidAssetIndexes;
	PHAssetCollection* _assetCollection;
	PHFetchResult* _fetchResult;
	NSMutableSet* _selectedAssets;
	NSMutableIndexSet* _selectedIndexes;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * fetchResult;                      //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) NSIndexSet * selectedIndexes; 
@property (nonatomic,readonly) NSArray * selectedAssets; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(PHFetchResult *)fetchResult;
-(PHAssetCollection *)assetCollection;
-(NSArray *)selectedAssets;
-(void)handlePhotoLibraryChange:(id)arg1 ;
-(void)invalidateAllAssetIndexes;
-(NSIndexSet *)selectedIndexes;
-(void)enumerateSelectedAssetsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isIndexSelected:(unsigned long long)arg1 ;
-(void)deselectAssetsAtIndexes:(id)arg1 ;
-(void)selectAssetsAtIndexes:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 fetchResult:(id)arg2 uniqueSelectedAssets:(id)arg3 ;
-(void)_ensureValidAssetIndexes;
-(void)setSelectedAssetsSet:(id)arg1 ;
@end

