/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient
-(void)batchSaveAssetsWithJobDictionaries:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareRevertToOriginalForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestMasterThumbnailForAssetUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)purgeExpiredOutboundSharingAssetsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

