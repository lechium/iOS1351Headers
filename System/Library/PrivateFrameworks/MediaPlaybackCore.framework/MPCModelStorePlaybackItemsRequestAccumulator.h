/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSMutableDictionary, NSArray, NSMutableArray, MPMutableSectionedCollection, MPStoreModelGenericObjectBuilder, ICUserIdentity, NSDate, MPCModelStorePlaybackItemsRequest, NSDictionary, MPSectionedCollection;

@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject {

	long long _currentBatchCount;
	long long _defaultLibraryPersonalizationStyle;
	NSMutableDictionary* _equivalencyMapping;
	BOOL _lastStoreIDBasedSectionWasPlaylist;
	NSArray* _orderedStoreIDs;
	NSMutableArray* _pendingOrderedStoreIDs;
	NSMutableArray* _pendingPrioritizedStoreIDs;
	NSMutableArray* _unprocessedItemIdentifiers;
	MPMutableSectionedCollection* _progressiveContentDescriptors;
	NSMutableDictionary* _receivedStoreIDs;
	MPStoreModelGenericObjectBuilder* _resultsGenericObjectBuilder;
	NSMutableDictionary* _sectionIndexToDeletedIndexSet;
	NSMutableDictionary* _storeIDToIndexPathReference;
	long long _unknownEndpointLibraryPersonalizationStyle;
	ICUserIdentity* _userIdentity;
	BOOL _allowsExplicitContent;
	BOOL _shouldLibraryPersonalize;
	long long _batchSize;
	NSDate* _earliestExpirationDate;
	long long _storePersonalizationStyle;
	MPCModelStorePlaybackItemsRequest* _request;

}

@property (nonatomic,readonly) BOOL allowsExplicitContent;                                            //@synthesize allowsExplicitContent=_allowsExplicitContent - In the implementation block
@property (assign,nonatomic) long long batchSize;                                                     //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy,readonly) NSDate * earliestExpirationDate;                                  //@synthesize earliestExpirationDate=_earliestExpirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * equivalencyMapping; 
@property (nonatomic,readonly) long long storePersonalizationStyle;                                   //@synthesize storePersonalizationStyle=_storePersonalizationStyle - In the implementation block
@property (nonatomic,copy,readonly) MPCModelStorePlaybackItemsRequest * request;                      //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL shouldLibraryPersonalize;                                         //@synthesize shouldLibraryPersonalize=_shouldLibraryPersonalize - In the implementation block
@property (nonatomic,readonly) MPSectionedCollection * unpersonalizedContentDescriptors; 
-(MPCModelStorePlaybackItemsRequest *)request;
-(long long)batchSize;
-(void)setBatchSize:(long long)arg1 ;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(NSDate *)earliestExpirationDate;
-(BOOL)allowsExplicitContent;
-(MPCModelStorePlaybackItemsRequestAccumulatorResult)handleResponse:(id)arg1 ;
-(id)_userIdentityWithRequest:(id)arg1 ;
-(void)_prepareRequestInformation;
-(id)_originalIndexPathsForStoreID:(id)arg1 ;
-(BOOL)_shouldUsePlaylistEntriesForSectionAtIndex:(long long)arg1 ;
-(id)_modelObjectWithStoreItemMetadata:(id)arg1 requestModelObject:(id)arg2 shouldUsePlaylistEntries:(BOOL)arg3 ;
-(MPCModelStorePlaybackItemEligibility)_eligibilityForItem:(id)arg1 ;
-(id)_indexPathAccountingForRemovalsWithOriginalIndexPath:(id)arg1 ;
-(void)_removeItemAtOriginalIndexPath:(id)arg1 ;
-(void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2 ;
-(long long)_appendProgressiveContentDescriptorsWithStoreItemMetadata:(id)arg1 ;
-(void)_addOriginalIndexPath:(id)arg1 forStoreID:(id)arg2 ;
-(id)initWithRequest:(id)arg1 shouldLibraryPersonalize:(BOOL)arg2 ;
-(NSDictionary *)equivalencyMapping;
-(id)newStoreItemMetadataRequest;
-(long long)storePersonalizationStyle;
-(BOOL)shouldLibraryPersonalize;
@end

