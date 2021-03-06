/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo {

	BOOL _shouldFetchAssetContentInMemory;
	NSArray* _assetsToDownload;
	NSArray* _packageIndexSets;
	NSArray* _assetsToDownloadInMemory;
	NSArray* _assetURLInfosToFillOut;

}

@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;              //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,retain) NSArray * assetsToDownload;                        //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
@property (nonatomic,retain) NSArray * packageIndexSets;                        //@synthesize packageIndexSets=_packageIndexSets - In the implementation block
@property (nonatomic,retain) NSArray * assetsToDownloadInMemory;                //@synthesize assetsToDownloadInMemory=_assetsToDownloadInMemory - In the implementation block
@property (nonatomic,retain) NSArray * assetURLInfosToFillOut;                  //@synthesize assetURLInfosToFillOut=_assetURLInfosToFillOut - In the implementation block
-(BOOL)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(void)setAssetsToDownload:(NSArray *)arg1 ;
-(NSArray *)assetsToDownload;
-(NSArray *)packageIndexSets;
-(NSArray *)assetsToDownloadInMemory;
-(NSArray *)assetURLInfosToFillOut;
-(void)setPackageIndexSets:(NSArray *)arg1 ;
-(void)setAssetsToDownloadInMemory:(NSArray *)arg1 ;
-(void)setAssetURLInfosToFillOut:(NSArray *)arg1 ;
@end

