/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TIAssetManaging <NSObject>
@property (nonatomic,copy) id enabledInputModeIdentifiersProviderBlock; 
@required
-(id)enabledInputModes;
-(id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2;
-(id)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(BOOL)arg3;
-(void)requestAssetDownloadForLanguage:(id)arg1 completion:(/*^block*/id)arg2;
-(id)topActiveRegions;
-(id)enabledInputModeIdentifiersProviderBlock;
-(void)setEnabledInputModeIdentifiersProviderBlock:(/*^block*/id)arg1;

@end

