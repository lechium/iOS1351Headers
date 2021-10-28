/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCollectionsDataSection.h>

@class PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection {

	long long _count;
	PXCollectionsDataSource* _collectionsDataSource;

}

@property (nonatomic,readonly) PXCollectionsDataSource * collectionsDataSource;              //@synthesize collectionsDataSource=_collectionsDataSource - In the implementation block
-(long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(id)content;
-(id)initWithCollectionsDataSource:(id)arg1 ;
-(long long)indexOfCollection:(id)arg1 ;
-(long long)countForCollection:(id)arg1 ;
-(PXCollectionsDataSource *)collectionsDataSource;
@end
