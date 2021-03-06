/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class NSMutableDictionary, NSDictionary;

@interface PXFileBackedAssetsDataSourceManager : PXAssetsDataSourceManager {

	NSMutableDictionary* _fileURLsBySection;

}

@property (nonatomic,readonly) NSDictionary * fileURLsBySection;              //@synthesize fileURLsBySection=_fileURLsBySection - In the implementation block
-(void)_createDataSource;
-(id)initWithFileURLsBySection:(id)arg1 ;
-(void)removeFileURLsAtIndexes:(id)arg1 inSection:(long long)arg2 ;
-(void)insertFileURL:(id)arg1 atIndex:(long long)arg2 inSection:(long long)arg3 ;
-(NSDictionary *)fileURLsBySection;
@end

