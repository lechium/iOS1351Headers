/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NMSMediaContainerQuotaData;

@interface NMSMediaItemGroup : NSObject {

	BOOL _manuallyAdded;
	BOOL _downloadedItemsOnly;
	id _referenceObj;
	NMSMediaContainerQuotaData* _quotaData;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id referenceObj;                                     //@synthesize referenceObj=_referenceObj - In the implementation block
@property (nonatomic,retain) NMSMediaContainerQuotaData * quotaData;              //@synthesize quotaData=_quotaData - In the implementation block
@property (assign,nonatomic) BOOL manuallyAdded;                                  //@synthesize manuallyAdded=_manuallyAdded - In the implementation block
@property (nonatomic,readonly) BOOL isEstimate; 
@property (assign,nonatomic) BOOL downloadedItemsOnly;                            //@synthesize downloadedItemsOnly=_downloadedItemsOnly - In the implementation block
+(id)itemGroupWithSyncedPlaylistID:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithSyncedAlbumID:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithStoreRecommendation:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithLibraryHeavyRotationRecommendation:(id)arg1 playlistID:(id)arg2 downloadedItemsOnly:(BOOL)arg3 ;
+(id)itemGroupWithLibraryHeavyRotationRecommendation:(id)arg1 albumID:(id)arg2 downloadedItemsOnly:(BOOL)arg3 ;
+(id)itemGroupWithPodcastStationUUID:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2 episodeLimit:(unsigned long long)arg3 manuallyAdded:(BOOL)arg4 downloadedItemsOnly:(BOOL)arg5 ;
+(id)itemGroupWithAudiobookIdentifier:(id)arg1 downloadLimit:(unsigned long long)arg2 manuallyAdded:(BOOL)arg3 downloadedItemsOnly:(BOOL)arg4 ;
+(id)_itemsForContainerClass:(Class)arg1 containerIDs:(id)arg2 includingNonLibraryContent:(BOOL)arg3 includingDownloadedContentOnly:(BOOL)arg4 manuallyAdded:(BOOL)arg5 ;
+(id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2 ;
+(id)itemGroupWithQuotaRefObj:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)identifiers;
-(BOOL)isEstimate;
-(id)itemList;
-(NMSMediaContainerQuotaData *)quotaData;
-(BOOL)manuallyAdded;
-(id)referenceObj;
-(id)identifiersForContainerType:(unsigned long long)arg1 ;
-(BOOL)downloadedItemsOnly;
-(id)initWithType:(unsigned long long)arg1 refObj:(id)arg2 manuallyAdded:(BOOL)arg3 quotaRefObj:(id)arg4 downloadedItemsOnly:(BOOL)arg5 ;
-(BOOL)isEqualToContainer:(id)arg1 ;
-(void)setReferenceObj:(id)arg1 ;
-(void)setQuotaData:(NMSMediaContainerQuotaData *)arg1 ;
-(void)setManuallyAdded:(BOOL)arg1 ;
-(void)setDownloadedItemsOnly:(BOOL)arg1 ;
@end
