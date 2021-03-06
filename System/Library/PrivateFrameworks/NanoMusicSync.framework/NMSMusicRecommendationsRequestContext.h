/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableOrderedSet, NSMapTable, MPModelForYouRecommendationsResponse, MPModelResponse, NSArray, NSSet, NMSMutableMediaSyncInfo, NSOrderedSet;

@interface NMSMusicRecommendationsRequestContext : NSObject {

	NSMutableOrderedSet* _heavyRotationModelObjects;
	NSMutableOrderedSet* _personalMixesModelObjects;
	NSMapTable* _modelObjectSectionMap;
	MPModelForYouRecommendationsResponse* _forYouResponse;
	MPModelResponse* _lookupResponse;
	NSArray* _importedObjects;

}

@property (nonatomic,retain) MPModelForYouRecommendationsResponse * forYouResponse;                       //@synthesize forYouResponse=_forYouResponse - In the implementation block
@property (nonatomic,retain) MPModelResponse * lookupResponse;                                            //@synthesize lookupResponse=_lookupResponse - In the implementation block
@property (nonatomic,retain) NSArray * importedObjects;                                                   //@synthesize importedObjects=_importedObjects - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfHeavyRotationModelObjects; 
@property (nonatomic,readonly) unsigned long long minimumNumberOfHeavyRotationModelObjects; 
@property (nonatomic,readonly) NSSet * modelObjects; 
@property (nonatomic,readonly) NMSMutableMediaSyncInfo * importedStoreContainerItemMappings; 
@property (nonatomic,readonly) NSOrderedSet * recommendations; 
-(NSSet *)modelObjects;
-(NSOrderedSet *)recommendations;
-(void)setForYouResponse:(MPModelForYouRecommendationsResponse *)arg1 ;
-(void)setLookupResponse:(MPModelResponse *)arg1 ;
-(MPModelResponse *)lookupResponse;
-(void)setImportedObjects:(NSArray *)arg1 ;
-(MPModelForYouRecommendationsResponse *)forYouResponse;
-(NMSMutableMediaSyncInfo *)importedStoreContainerItemMappings;
-(void)_processResponsesIfNeeded;
-(unsigned long long)numberOfHeavyRotationModelObjects;
-(unsigned long long)minimumNumberOfHeavyRotationModelObjects;
-(NSArray *)importedObjects;
@end

