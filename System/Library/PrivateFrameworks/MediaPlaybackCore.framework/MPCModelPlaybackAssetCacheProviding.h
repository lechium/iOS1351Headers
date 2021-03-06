/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPCModelPlaybackAssetCacheProviding <NSObject>
@required
-(void)getPlaybackAssetCacheDestinationURL:(id*)arg1 purchaseBundleDestinationURL:(id*)arg2 forGenericObject:(id)arg3 assetQualityType:(long long)arg4 pathExtension:(id)arg5;
-(void)setPlaybackAssetCacheFileAsset:(id)arg1 forGenericObject:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end

