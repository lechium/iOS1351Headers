/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSManagedObjectID, NSData;

@interface PXThumbnailCacheEntry : NSObject {

	NSManagedObjectID* _objectID;
	NSData* _data;
	PHAssetResourceTableDataSpecification _dataSpec;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID;                                //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) PHAssetResourceTableDataSpecification dataSpec;              //@synthesize dataSpec=_dataSpec - In the implementation block
@property (nonatomic,readonly) NSData * data;                                               //@synthesize data=_data - In the implementation block
-(NSData *)data;
-(NSManagedObjectID *)objectID;
-(id)initWithObjectID:(id)arg1 dataSpec:(const PHAssetResourceTableDataSpecification*)arg2 data:(id)arg3 ;
-(PHAssetResourceTableDataSpecification)dataSpec;
@end

