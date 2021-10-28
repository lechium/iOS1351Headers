/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsDataSource.h>

@class PXForYouSuggestionAssetCollection, NSArray, NSString;

@interface PXForYouSuggestionsAssetsDataSource : PXAssetsDataSource {

	PXForYouSuggestionAssetCollection* _collection;
	NSArray* _assets;
	NSString* _collectionTitle;

}

@property (nonatomic,copy) NSArray * assets;                        //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) NSString * collectionTitle;              //@synthesize collectionTitle=_collectionTitle - In the implementation block
+(id)new;
-(id)init;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2 ;
-(NSString *)collectionTitle;
-(id)initWithDisplayAssets:(id)arg1 collectionTitle:(id)arg2 ;
-(PXSimpleIndexPath)indexPathForAssetReference:(id)arg1 ;
-(void)setCollectionTitle:(NSString *)arg1 ;
@end
