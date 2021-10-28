/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLAssetSearchResult.h>

@class NSArray, NSMutableArray;

@interface PLCombinedAssetSearchResult : PLAssetSearchResult {

	unsigned long long _assetCount;
	NSArray* _assetUUIDs;
	BOOL _resultsCanOverlap;
	NSMutableArray* _assetSearchResults;

}

@property (nonatomic,retain) NSMutableArray * assetSearchResults;              //@synthesize assetSearchResults=_assetSearchResults - In the implementation block
@property (assign,nonatomic) BOOL resultsCanOverlap;                           //@synthesize resultsCanOverlap=_resultsCanOverlap - In the implementation block
@property (nonatomic,readonly) NSArray * groupResults; 
-(unsigned long long)assetCount;
-(id)assetUUIDs;
-(id)initWithAssetSearchResults:(id)arg1 canOverlap:(BOOL)arg2 ;
-(id)initWithAssetSearchResult:(id)arg1 ;
-(void)addAssetSearchResult:(id)arg1 isMainSearchResult:(BOOL)arg2 ;
-(unsigned long long)categoryMask;
-(id)groupDescription;
-(NSArray *)groupResults;
-(NSMutableArray *)assetSearchResults;
-(void)setAssetSearchResults:(NSMutableArray *)arg1 ;
-(BOOL)resultsCanOverlap;
-(void)setResultsCanOverlap:(BOOL)arg1 ;
@end
