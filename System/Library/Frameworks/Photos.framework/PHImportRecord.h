/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHImportExceptionRecorder.h>

@class NSString, PHImportAsset, NSMutableArray, PHImportTimerCollection;

@interface PHImportRecord : PHImportExceptionRecorder {

	NSString* _rawAssetIdentifier;
	BOOL _referencedImport;
	unsigned char _importType;
	NSString* _assetIdentifier;
	PHImportAsset* _importAsset;
	NSMutableArray* _relatedRecords;
	NSString* _downloadedPath;
	PHImportTimerCollection* _timers;

}

@property (nonatomic,retain) NSMutableArray * relatedRecords;               //@synthesize relatedRecords=_relatedRecords - In the implementation block
@property (assign,nonatomic) BOOL referencedImport;                         //@synthesize referencedImport=_referencedImport - In the implementation block
@property (nonatomic,retain) NSString * assetIdentifier;                    //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * rawAssetIdentifier; 
@property (nonatomic,retain) PHImportAsset * importAsset;                   //@synthesize importAsset=_importAsset - In the implementation block
@property (nonatomic,retain) NSString * downloadedPath;                     //@synthesize downloadedPath=_downloadedPath - In the implementation block
@property (nonatomic,retain) PHImportTimerCollection * timers;              //@synthesize timers=_timers - In the implementation block
@property (assign,nonatomic) unsigned char importType;                      //@synthesize importType=_importType - In the implementation block
@property (readonly) BOOL canReference; 
-(id)description;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(NSString *)assetIdentifier;
-(id)initWithImportAsset:(id)arg1 ;
-(id)descriptionWithPrefix:(id)arg1 ;
-(void)cleanupAfterFailure;
-(id)allAssetIdentifiers;
-(NSString *)rawAssetIdentifier;
-(void)addRelatedRecord:(id)arg1 ;
-(id)recordForAsset:(id)arg1 ;
-(id)allImportAssets;
-(id)allImportRecords;
-(BOOL)needsDownload;
-(BOOL)canReference;
-(PHImportAsset *)importAsset;
-(void)setImportAsset:(PHImportAsset *)arg1 ;
-(NSMutableArray *)relatedRecords;
-(void)setRelatedRecords:(NSMutableArray *)arg1 ;
-(BOOL)referencedImport;
-(void)setReferencedImport:(BOOL)arg1 ;
-(NSString *)downloadedPath;
-(void)setDownloadedPath:(NSString *)arg1 ;
-(PHImportTimerCollection *)timers;
-(void)setTimers:(PHImportTimerCollection *)arg1 ;
-(unsigned char)importType;
-(void)setImportType:(unsigned char)arg1 ;
@end

