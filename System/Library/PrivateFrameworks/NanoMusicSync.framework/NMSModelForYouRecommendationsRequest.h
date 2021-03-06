/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPModelForYouRecommendationsRequest.h>

@class NSArray, NSDictionary;

@interface NMSModelForYouRecommendationsRequest : MPModelForYouRecommendationsRequest {

	BOOL _nms_useCachedDataOnly;
	NSArray* _nms_cachedRecommendationsArray;
	NSDictionary* _nms_cachedStoreItemMetadataResults;

}

@property (assign,nonatomic) BOOL nms_useCachedDataOnly;                                     //@synthesize nms_useCachedDataOnly=_nms_useCachedDataOnly - In the implementation block
@property (nonatomic,retain) NSArray * nms_cachedRecommendationsArray;                       //@synthesize nms_cachedRecommendationsArray=_nms_cachedRecommendationsArray - In the implementation block
@property (nonatomic,retain) NSDictionary * nms_cachedStoreItemMetadataResults;              //@synthesize nms_cachedStoreItemMetadataResults=_nms_cachedStoreItemMetadataResults - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(NSArray *)nms_cachedRecommendationsArray;
-(NSDictionary *)nms_cachedStoreItemMetadataResults;
-(void)setNms_useCachedDataOnly:(BOOL)arg1 ;
-(void)setNms_cachedRecommendationsArray:(NSArray *)arg1 ;
-(void)setNms_cachedStoreItemMetadataResults:(NSDictionary *)arg1 ;
-(BOOL)nms_useCachedDataOnly;
@end

