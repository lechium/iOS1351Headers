/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSOrderedSet;


@protocol PUSharingHeaderDataProvider <NSObject>
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) unsigned long long sourceOrigin; 
@property (nonatomic,copy,readonly) id<PXDisplayAsset> keyAsset; 
@property (nonatomic,copy,readonly) NSOrderedSet * orderedSelectedAssets; 
@property (nonatomic,readonly) PXAssetMediaTypeCount assetTypeCount; 
@property (nonatomic,readonly) BOOL isActionSheet; 
@property (nonatomic,readonly) BOOL shareAsCMM; 
@property (nonatomic,readonly) BOOL excludeLiveness; 
@property (nonatomic,readonly) BOOL excludeLocation; 
@property (nonatomic,readonly) BOOL sendAsOriginals; 
@required
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(id<PXDisplayAsset>)keyAsset;
-(unsigned long long)sourceOrigin;
-(BOOL)excludeLiveness;
-(BOOL)excludeLocation;
-(BOOL)isActionSheet;
-(NSOrderedSet *)orderedSelectedAssets;
-(PXAssetMediaTypeCount)assetTypeCount;
-(BOOL)shareAsCMM;
-(BOOL)sendAsOriginals;

@end

