/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PUMutableAssetExplorerReviewScreenAssetsDataSourceManager.h>

@class NSMutableDictionary, NSString;

@interface PUMutableAssetExplorerReviewScreenAssetsDataSourceManagerImplementation : NSObject <PUMutableAssetExplorerReviewScreenAssetsDataSourceManager> {

	NSMutableDictionary* _replacementAssetsByUUID;

}

@property (nonatomic,readonly) NSMutableDictionary * replacementAssetsByUUID;              //@synthesize replacementAssetsByUUID=_replacementAssetsByUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)replaceAssetInDataSourceWithAsset:(id)arg1 ;
-(void)removeReplacementAssetInDataSourceForUUID:(id)arg1 ;
-(id)initWithReplacementAssetsByUUID:(id)arg1 ;
-(NSMutableDictionary *)replacementAssetsByUUID;
@end

