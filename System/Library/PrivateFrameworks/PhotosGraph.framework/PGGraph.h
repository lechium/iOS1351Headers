/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <KnowledgeGraphKit/MAGraph.h>

@protocol OS_dispatch_queue;
@class NSDate, NSNumber, PGMessageProfile, NSDateFormatter, NSRecursiveLock, NSSet, NSMutableDictionary, NSArray, NSDictionary, PGManager, CLSFocusPeopleCache, NSString, NSObject;

@interface PGGraph : MAGraph {

	NSDate* _creationDate;
	NSNumber* _canUseLocationDomain;
	BOOL _didFetchRoutineInfo;
	PGMessageProfile* _messageProfile;
	NSDateFormatter* _dateFormatter;
	NSRecursiveLock* _supersetLock;
	NSSet* _supersets;
	NSSet* _supersetCityNodes;
	NSSet* _supersetCountyNodes;
	NSSet* _supersetStateNodes;
	NSSet* _supersetCountryNodes;
	NSSet* _supersetLocales;
	NSSet* _interestingCityNodes;
	NSSet* _highlyInterestingMomentNodes;
	NSMutableDictionary* _personNodesByPersonID;
	NSMutableDictionary* _isCelebratingInGeneralCache;
	NSArray* _preprocessors;
	NSArray* _postprocessors;
	NSDictionary* _zeroKeywordMappingByMeaningLabel;
	NSMutableDictionary* _momentNodeByMomentUUID;
	NSMutableDictionary* _highlightNodeByHighlightUUID;
	BOOL _keepsExistingAssetCurationScores;
	BOOL _canWrite;
	PGManager* _manager;
	CLSFocusPeopleCache* _focusPeopleIngestCache;
	long long _numberOfUtilityAssets;
	long long _numberOfDefaultAssets;
	long long _numberOfImprovedAssets;
	long long _numberOfBetterAssets;
	NSString* _geoServiceProviderID;
	unsigned long long _relatedAlgorithmsVersion;
	unsigned long long _curationAlgorithmsVersion;
	unsigned long long _memoriesAlgorithmsVersion;
	NSString* _locale;
	double _personalGoodAestheticsThreshold;
	double _personalHighAestheticsThreshold;
	NSObject*<OS_dispatch_queue> _graphQueue;
	PGRoutineInfoStruct _routineInfo;

}

@property (nonatomic,readonly) NSSet * musicSessions; 
@property (nonatomic,readonly) NSDictionary * zeroKeywordMappingByMeaningLabel; 
@property (nonatomic,readonly) NSSet * supersets; 
@property (nonatomic,readonly) NSSet * supersetCityNodes; 
@property (nonatomic,readonly) NSSet * supersetCountyNodes; 
@property (nonatomic,readonly) NSSet * supersetStateNodes; 
@property (nonatomic,readonly) NSSet * supersetCountryNodes; 
@property (nonatomic,readonly) NSSet * supersetLocales; 
@property (nonatomic,readonly) NSObject*<OS_os_log> relatedLoggingConnection; 
@property (nonatomic,readonly) NSObject*<OS_os_log> ingestLoggingConnection; 
@property (nonatomic,readonly) NSObject*<OS_os_log> graphLoggingConnection; 
@property (nonatomic,retain) NSString * geoServiceProviderID;                                //@synthesize geoServiceProviderID=_geoServiceProviderID - In the implementation block
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) unsigned long long curationAlgorithmsVersion;                   //@synthesize curationAlgorithmsVersion=_curationAlgorithmsVersion - In the implementation block
@property (assign,nonatomic) unsigned long long relatedAlgorithmsVersion;                    //@synthesize relatedAlgorithmsVersion=_relatedAlgorithmsVersion - In the implementation block
@property (assign,nonatomic) unsigned long long memoriesAlgorithmsVersion;                   //@synthesize memoriesAlgorithmsVersion=_memoriesAlgorithmsVersion - In the implementation block
@property (nonatomic,retain) NSString * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL canUseLocationDomain; 
@property (assign,nonatomic) PGRoutineInfoStruct routineInfo;                                //@synthesize routineInfo=_routineInfo - In the implementation block
@property (assign,nonatomic) double personalGoodAestheticsThreshold;                         //@synthesize personalGoodAestheticsThreshold=_personalGoodAestheticsThreshold - In the implementation block
@property (assign,nonatomic) double personalHighAestheticsThreshold;                         //@synthesize personalHighAestheticsThreshold=_personalHighAestheticsThreshold - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * dateFormatter;                              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) CLSFocusPeopleCache * focusPeopleIngestCache;                   //@synthesize focusPeopleIngestCache=_focusPeopleIngestCache - In the implementation block
@property (assign,nonatomic) long long numberOfUtilityAssets;                                //@synthesize numberOfUtilityAssets=_numberOfUtilityAssets - In the implementation block
@property (assign,nonatomic) long long numberOfDefaultAssets;                                //@synthesize numberOfDefaultAssets=_numberOfDefaultAssets - In the implementation block
@property (assign,nonatomic) long long numberOfImprovedAssets;                               //@synthesize numberOfImprovedAssets=_numberOfImprovedAssets - In the implementation block
@property (assign,nonatomic) long long numberOfBetterAssets;                                 //@synthesize numberOfBetterAssets=_numberOfBetterAssets - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) long long librarySizeRange; 
@property (assign,nonatomic) BOOL keepsExistingAssetCurationScores;                          //@synthesize keepsExistingAssetCurationScores=_keepsExistingAssetCurationScores - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> graphQueue;                 //@synthesize graphQueue=_graphQueue - In the implementation block
@property (readonly) BOOL isOnGraphQueue; 
@property (assign) BOOL canWrite;                                                            //@synthesize canWrite=_canWrite - In the implementation block
@property (nonatomic,readonly) NSSet * allMomentUUIDs; 
@property (nonatomic,retain) PGMessageProfile * messageProfile;                              //@synthesize messageProfile=_messageProfile - In the implementation block
@property (__weak) PGManager * manager;                                                      //@synthesize manager=_manager - In the implementation block
@property (readonly) BOOL needsRebuild; 
+(Class)nodeClass;
+(Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2 ;
+(Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2 ;
+(BOOL)location:(CLLocationCoordinate2D)arg1 isCloseToLocation:(CLLocationCoordinate2D)arg2 ;
+(Class)edgeClass;
+(double)topTierAestheticScoreForRatio:(double)arg1 inPhotoLibrary:(id)arg2 ;
+(id)sceneBabyLabels;
+(id)blacklistSceneBabyLabels;
+(id)_graphNodePOILabelByPlaceType;
+(id)_poiLabelForPOIType:(id)arg1 ;
+(long long)_librarySizeRangeForNumberOfAssets:(unsigned long long)arg1 ;
+(id)assetPropertySetsForIngest;
+(id)graphURLForName:(id)arg1 parentDirectoryURL:(id)arg2 ;
+(BOOL)graphExistsWithName:(id)arg1 parentDirectoryURL:(id)arg2 ;
+(id)socialGroupPeopleSortDescriptorForSocialGroupNode:(id)arg1 ;
+(BOOL)_hasMomentsForPersonIdentifiers:(id)arg1 inGraph:(id)arg2 photoLibrary:(id)arg3 ;
+(id)parentMeaningLabelForMeaningLabel:(id)arg1 ;
+(void)traverseParentMeaningsForMeaningLabel:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)_traverseMeaningLabelsUsingBlock:(/*^block*/id)arg1 ;
+(id)_meaningLabelTree;
+(id)_findParentMeaningLabelForMeaningLabel:(id)arg1 inTree:(id)arg2 currentParent:(id)arg3 ;
+(void)_traverseMeaningLabelsInTree:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)matchingBlasklistedSceneLabels;
+(id)defaultMatchingSortDescriptors;
+(id)matchingWeightToDictionary;
+(id)_closestRelationshipEdgeLabelForPerson:(id)arg1 andOtherPerson:(id)arg2 ;
+(id)_personClosestToMeBetweenPerson:(id)arg1 andOtherPerson:(id)arg2 ;
+(id)lessMeaningfulMeanings;
+(id)frequentMeaningLabels;
+(id)mostSignificantMeaningLabels;
+(id)stringForMeaning:(unsigned long long)arg1 ;
+(id)meaningLabelForMeaning:(unsigned long long)arg1 ;
+(unsigned long long)meaningForMeaningLabel:(id)arg1 ;
+(id)allMeaningfulMeanings;
+(id)veryMeaningfulMeanings;
+(id)stellarMeanings;
+(id)scenePetLabels;
+(id)blacklistScenePetLabels;
+(id)blacklistSceneLabelsForHobbyType:(long long)arg1 ;
+(id)confidenceThresholdBySceneIdentifierForSceneNames:(id)arg1 blacklisted:(BOOL)arg2 ;
+(id)sceneLabelsForHobbyType:(long long)arg1 ;
+(id)aggregateKeyByMeaningLabel;
+(id)aggregateKeyByPublicEventCategoryLabel;
-(id)init;
-(void)dealloc;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)parents;
-(PGManager *)manager;
-(NSDateFormatter *)dateFormatter;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setManager:(PGManager *)arg1 ;
-(id)children;
-(id)familyMembers;
-(unsigned long long)numberOfAssets;
-(id)friends;
-(BOOL)canWrite;
-(void)setCanWrite:(BOOL)arg1 ;
-(id)socialGroupsForPersonIdentifiers:(id)arg1 ;
-(id)allSocialGroupsForPersonIdentifier:(id)arg1 ;
-(id)_infoNode;
-(void)invalidateMemoryCaches;
-(id)trips;
-(id)momentNodes;
-(NSSet *)supersetCityNodes;
-(void)writePendingScoresToPhotosDatabase;
-(void)insertAssetCurationScoreInLibraryForFeeder:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)computeAndStoreTopTierAestheticScore;
-(double)topTierAestheticScoreForTripKeyAsset;
-(void)_writeCurationScoresToPhotosDatabase:(id)arg1 ;
-(void)_writeInteractionScoresToPhotosDatabase:(id)arg1 ;
-(double)topTierAestheticScore;
-(void)addInteractionScore:(float)arg1 forAsset:(id)arg2 ;
-(BOOL)_shouldUpdateCurationScore:(double)arg1 withNewCurationScore:(double)arg2 ;
-(void)addCurationScore:(double)arg1 forAsset:(id)arg2 ;
-(id)babyNodes;
-(void)enumerateBabyNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)_neighborsFromMomentNode:(id)arg1 count:(unsigned long long)arg2 locationRequired:(BOOL)arg3 minDayDuration:(unsigned long long)arg4 maxDayDuration:(unsigned long long)arg5 ;
-(id)_peopleUUIDsForMomentNode:(id)arg1 ;
-(double)_peopleScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andPeopleUUIDs:(id)arg3 ;
-(double)_locationScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andLocationCoordinate:(const CLLocationCoordinate2D*)arg3 ;
-(double)neighborScoreForMomentNode:(id)arg1 ;
-(double)_calculateScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 referenceDistance:(double)arg3 andDistanceBlock:(/*^block*/id)arg4 ;
-(double)_calculateScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andDistanceBlock:(/*^block*/id)arg3 ;
-(double)neighborScoreForLocalDate:(id)arg1 ;
-(double)routineScoreForLocalDate:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 andPeopleUUIDs:(id)arg4 ;
-(double)_densityScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andNumberOfAssets:(unsigned long long)arg3 ;
-(id)seasonNodes;
-(id)celebratedHolidayNodes;
-(id)businessNodes;
-(id)maximalSocialGroupsForPersonIdentifiers:(id)arg1 ;
-(id)searchNodesForAsset:(id)arg1 inMoment:(id)arg2 ;
-(unsigned long long)relatedAlgorithmsVersion;
-(void)setRelatedAlgorithmsVersion:(unsigned long long)arg1 ;
-(long long)librarySizeRange;
-(id)_strictEventNodeLookupForAssetCollection:(id)arg1 error:(id*)arg2 ;
-(id)_fuzzyEventNodeLookupForAssetCollection:(id)arg1 error:(id*)arg2 ;
-(id)momentNodeForMoment:(id)arg1 ;
-(id)highlightNodeForHighlight:(id)arg1 ;
-(id)momentNodeForMomentUUID:(id)arg1 ;
-(id)highlightNodeForHighlightUUID:(id)arg1 ;
-(id)_nodeForAssetCollection:(id)arg1 error:(id*)arg2 ;
-(void)_enumerateMomentForMomentNode:(id)arg1 paddingTime:(double)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(id)_eventNodesForDateComponents:(id)arg1 error:(id*)arg2 ;
-(id)_fuzzyMomentLookupForMomentNode:(id)arg1 error:(id*)arg2 ;
-(id)momentsResultForMomentNodes:(id)arg1 sortChronologically:(BOOL)arg2 ;
-(id)monthNodeForMonth:(long long)arg1 ;
-(id)yearNodeForYear:(long long)arg1 ;
-(id)dayNodeForDay:(long long)arg1 ;
-(id)momentNodesForDateNode:(id)arg1 ;
-(id)dateNodesIgnoringYearForLocalDate:(id)arg1 ;
-(id)_previousSeasonForSeason:(id)arg1 ;
-(id)dateNodesForLocalDateInterval:(id)arg1 ;
-(id)momentNodesForLocalDate:(id)arg1 ;
-(id)eventNodeForAssetCollection:(id)arg1 ;
-(id)momentNodeForAsset:(id)arg1 ;
-(id)momentNodesForMomentIdentifiers:(id)arg1 ;
-(id)momentNodesForMoments:(id)arg1 ;
-(id)highlightForHighlightNode:(id)arg1 ;
-(id)momentForMomentNode:(id)arg1 ;
-(id)momentsForMomentNodes:(id)arg1 sortChronologically:(BOOL)arg2 ;
-(id)momentNodesIgnoringYearForLocalDate:(id)arg1 ;
-(id)dateNodesForMonth:(long long)arg1 ;
-(id)dateNodesForYear:(long long)arg1 ;
-(id)dateNodesForWeekOfYear:(long long)arg1 ;
-(id)dateNodesForWeekOfMonth:(long long)arg1 ;
-(id)seasonNodeForLocalDate:(id)arg1 ;
-(id)previousSeasonNodeForSeasonNode:(id)arg1 ;
-(id)momentNodesOverlappingLocalDateInterval:(id)arg1 ;
-(id)closestMomentNodeForLocalDate:(id)arg1 ;
-(id)localDatesForMomentNode:(id)arg1 ;
-(long long)libraryAge;
-(id)dateNodeForLocalDate:(id)arg1 ;
-(BOOL)_enumerateEventNodesForAssetCollection:(id)arg1 paddingTime:(double)arg2 error:(id*)arg3 enumerationBlock:(/*^block*/id)arg4 ;
-(id)_strictMomentLookupForMomentNode:(id)arg1 ;
-(unsigned long long)numberOfMomentNodes;
-(id)momentNodesSortedByDate;
-(id)momentNodesSortedByDateFromMomentNodes:(id)arg1 ;
-(id)meaningfulMomentNodesSortedByDate;
-(void)enumerateMomentNodesWithBlock:(/*^block*/id)arg1 ;
-(id)momentNodeForUUID:(id)arg1 ;
-(id)addMomentNodeWithProperties:(id)arg1 ;
-(id)insertROIWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 ;
-(id)insertPOIWithFeeder:(id)arg1 fromMomentNode:(id)arg2 isNearHomeOrWork:(BOOL)arg3 ;
-(id)insertBusiness:(id)arg1 fromEventNode:(id)arg2 ;
-(id)connectPublicEventNode:(id)arg1 withBusinessNode:(id)arg2 ;
-(id)insertROINodeWithPlace:(id)arg1 fromEventNode:(id)arg2 ;
-(id)insertSpecialPOIAmusementParkNodeFromMomentNode:(id)arg1 ;
-(id)insertPOINodeWithPlace:(id)arg1 fromEventNode:(id)arg2 hasInsertedSpecialPOIAmusementParkNode:(BOOL)arg3 ;
-(id)insertSceneNodeWithScene:(id)arg1 fromEventNode:(id)arg2 ;
-(id)insertSceneNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 ;
-(id)_commonNodeForLocationNode:(id)arg1 andLocationNode:(id)arg2 ;
-(id)densestCloseLocationNodeFromLocationNode:(id)arg1 withDateInterval:(id)arg2 locationMask:(unsigned long long)arg3 ;
-(id)relevantLocationNodesForMomentNodes:(id)arg1 ;
-(BOOL)_locationNodesRepresentSameCity:(id)arg1 ;
-(id)_mostVisitedLocationNodeForLocationNodes:(id)arg1 ;
-(id)meNode;
-(id)sceneNodeForSceneName:(id)arg1 ;
-(id)allPersonNodesExceptMeNode;
-(id)partners;
-(id)coworkers;
-(id)dateNodeNameWithLocalDate:(id)arg1 ;
-(id)allTimeYearsNodes;
-(double)libraryDuration;
-(id)bestFittingAreaNodeFromAreaNodes:(id)arg1 ;
-(void)enumerateAreaNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateBusinessNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePublicEventNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)relevantAddressNodesForMomentNodes:(id)arg1 ;
-(id)commonLocationNodeForRelevantLocationNodes:(id)arg1 locationMask:(unsigned long long)arg2 ;
-(id)dayOfWeekNodes;
-(id)dayOfWeekNodeForDayOfWeek:(long long)arg1 ;
-(id)_userLocales;
-(id)sceneNodesForSceneNames:(id)arg1 ;
-(id)largeFrequentLocationNodes;
-(void)enumerateCelebratedHolidayNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)allMomentNodes;
-(id)_validLocationNodeForLocationNode:(id)arg1 withLocationMask:(unsigned long long)arg2 ;
-(CLLocationCoordinate2D)_approximateCoordinateForLocationNode:(id)arg1 ;
-(id)insertAddressNodeWithProjectedPlacemark:(id)arg1 atEventLocation:(id)arg2 usingImprovedPlacemark:(BOOL)arg3 ;
-(id)insertLocationMobilityNodeWithMobility:(id)arg1 fromEventNode:(id)arg2 edgeWeight:(float)arg3 ;
-(id)insertLocationHierarchyWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 ;
-(id)insertLocationMobilityNodeWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 ;
-(long long)_uuidForPlacemark:(id)arg1 forNodeLabel:(id)arg2 ;
-(void)insertAreasOfInterestForProjectedPlacemark:(id)arg1 fromAddressNode:(id)arg2 ;
-(void)insertLocationHierarchyWithProjectedPlacemark:(id)arg1 fromAddressNode:(id)arg2 ;
-(id)insertAddressNodeWithPlacemark:(id)arg1 location:(id)arg2 weight:(float)arg3 duringDateInterval:(id)arg4 fromEventNode:(id)arg5 ;
-(void)deletePersonsWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)insertMomentsWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)_registerInsertedMomentNodes:(id)arg1 inGraphUpdate:(id)arg2 ;
-(void)performChangeForGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_feederForInsertingAssetCollection:(id)arg1 ;
-(id)_cleanUpMoments:(id)arg1 ;
-(id)_insertMomentNodeForClueCollection:(id)arg1 feeder:(id)arg2 insertedAndUpdatedPersonNodes:(id*)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)_insertRoutineInfo;
-(void)performBatchUpdatesWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_momentNodesFromPersonNodes:(id)arg1 ;
-(id)insertMomentNodeForClueCollection:(id)arg1 feeder:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_deleteMomentsWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)insertPet:(id)arg1 ;
-(unsigned long long)curationAlgorithmsVersion;
-(void)setCurationAlgorithmsVersion:(unsigned long long)arg1 ;
-(unsigned long long)memoriesAlgorithmsVersion;
-(void)setMemoriesAlgorithmsVersion:(unsigned long long)arg1 ;
-(PGMessageProfile *)messageProfile;
-(void)setMessageProfile:(PGMessageProfile *)arg1 ;
-(void)setGraphQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_checkCanWrite;
-(void)_checkCanRead;
-(BOOL)isOnGraphQueue;
-(id)initWithURL:(id)arg1 persistenceOptions:(long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(NSObject*<OS_os_log>)relatedLoggingConnection;
-(NSObject*<OS_os_log>)ingestLoggingConnection;
-(NSObject*<OS_os_log>)graphLoggingConnection;
-(BOOL)saveToURL:(id)arg1 ;
-(BOOL)needsRebuild;
-(void)prepareForRebuild;
-(NSString *)geoServiceProviderID;
-(void)setGeoServiceProviderID:(NSString *)arg1 ;
-(BOOL)canUseLocationDomain;
-(long long)numberOfBetterAssets;
-(long long)numberOfDefaultAssets;
-(long long)numberOfImprovedAssets;
-(long long)numberOfUtilityAssets;
-(void)saveNumberOfAssetsToInfoNode;
-(void)setCanUseLocationDomain:(BOOL)arg1 ;
-(PGRoutineInfoStruct)routineInfo;
-(void)setRoutineInfo:(PGRoutineInfoStruct)arg1 ;
-(double)personalGoodAestheticsThreshold;
-(void)setPersonalGoodAestheticsThreshold:(double)arg1 ;
-(double)personalHighAestheticsThreshold;
-(void)setPersonalHighAestheticsThreshold:(double)arg1 ;
-(void)unloadMessageProfile;
-(NSSet *)allMomentUUIDs;
-(id)cachedMomentNodeForMomentUUID:(id)arg1 ;
-(void)cacheMomentNode:(id)arg1 forMomentUUID:(id)arg2 checkUnicity:(BOOL)arg3 ;
-(void)uncacheMomentNodesForMomentUUIDs:(id)arg1 ;
-(void)uncacheMomentNodeForMomentUUID:(id)arg1 checkExistence:(BOOL)arg2 ;
-(id)cachedHighlightNodeForHighlightUUID:(id)arg1 ;
-(void)cacheHighlightNode:(id)arg1 forHighlightUUID:(id)arg2 checkUnicity:(BOOL)arg3 ;
-(void)uncacheHighlightNodesForHighlightUUIDs:(id)arg1 ;
-(void)uncacheHighlightNodeForHighlightUUID:(id)arg1 checkExistence:(BOOL)arg2 ;
-(CLSFocusPeopleCache *)focusPeopleIngestCache;
-(void)setFocusPeopleIngestCache:(CLSFocusPeopleCache *)arg1 ;
-(void)setNumberOfUtilityAssets:(long long)arg1 ;
-(void)setNumberOfDefaultAssets:(long long)arg1 ;
-(void)setNumberOfImprovedAssets:(long long)arg1 ;
-(void)setNumberOfBetterAssets:(long long)arg1 ;
-(BOOL)keepsExistingAssetCurationScores;
-(void)setKeepsExistingAssetCurationScores:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)graphQueue;
-(id)personLocalIdentifiersBySocialGroupUUIDWithSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(BOOL)arg2 ;
-(id)personNodesForPersonIdentifiers:(id)arg1 ;
-(id)socialGroupNodeForPersonNodes:(id)arg1 ;
-(id)commonSocialGroupNodesForPersonNodes:(id)arg1 ;
-(id)personNodeForPersonLocalIdentifier:(id)arg1 ;
-(id)socialGroupsIdentifiersFromSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(BOOL)arg2 ;
-(id)inferredMeNode;
-(id)bestSocialGroupNodes;
-(BOOL)hasSocialGroups;
-(BOOL)isBestPairSocialGroup:(id)arg1 ;
-(id)assetCollectionsForPersonNodes:(id)arg1 ;
-(id)personNodesForSocialGroupNode:(id)arg1 ;
-(id)momentNodesForPersonNodes:(id)arg1 ;
-(unsigned long long)_countOfDistinctSocialGroups:(id)arg1 ;
-(id)_personNodeIntersectingSocialGroups:(id)arg1 ;
-(id)sortedSocialGroupNodes;
-(BOOL)isPairSocialGroup:(id)arg1 ;
-(id)commonSocialGroupNodesForPersonNodes:(id)arg1 withThreshold:(double)arg2 ;
-(id)_socialGroupNodeForPersonNodes:(id)arg1 searchWithTolerance:(BOOL)arg2 ;
-(NSSet *)musicSessions;
-(id)musicGenreDistributionUsingTaggedGenres:(BOOL)arg1 ;
-(void)enumerateMusicSessionNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)staticGraphSchema;
-(id)_createZeroKeywordMappingByMeaningLabel;
-(id)momentNodesConnectedToNode:(id)arg1 ;
-(NSDictionary *)zeroKeywordMappingByMeaningLabel;
-(id)meaningfulEvents;
-(id)longTripHighlightTypeNode;
-(id)shortTripHighlightTypeNode;
-(id)longTripNodes;
-(id)shortTripNodes;
-(id)aggregationHighlightTypeNode;
-(id)dayHighlightNodes;
-(id)onGoingTripHighlightTypeNode;
-(id)defaultHighlightTypeNode;
-(id)allTripNodes;
-(id)aggregationNodes;
-(id)defaultHighlightNodes;
-(id)onGoingTripNodes;
-(id)nodeLabelForHighlightType:(unsigned short)arg1 ;
-(id)insertBaby:(id)arg1 ;
-(id)insertMusicAlbumNodeWithAlbumTitle:(id)arg1 ;
-(id)insertMusicTrackWithTrackTitle:(id)arg1 durationInSeconds:(id)arg2 ;
-(id)insertMusicSessionNodeWithLocalStartDate:(id)arg1 localEndDate:(id)arg2 ;
-(id)insertMusicGenreNodeWithGenreName:(id)arg1 ;
-(void)performProcessingSteps:(id)arg1 withGraphUpdate:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)performPreprocessingWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)performPostprocessingWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_timeMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2 ;
-(id)_locationMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2 ;
-(id)_eventMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2 ;
-(id)_placeMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2 ;
-(id)_sceneMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2 ;
-(id)_peopleMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3 ;
-(id)_timeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3 ;
-(id)_locationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3 ;
-(id)_eventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3 ;
-(id)_placeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3 ;
-(id)_sceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3 ;
-(id)_peopleMatchingResultFromEvent:(id)arg1 matchedEvent:(id)arg2 presentPeopleCountForEvent:(unsigned long long)arg3 presentPeopleCountForMatchedEvent:(unsigned long long)arg4 commonPeople:(id)arg5 relationshipScoreCache:(id)arg6 needsKeywords:(BOOL)arg7 ;
-(unsigned long long)_peopleCountWithoutMe:(id)arg1 focusOnNodes:(id)arg2 ;
-(id)_peopleWithoutMe:(id)arg1 focusOnNodes:(id)arg2 ;
-(double)_relationshipScoreForPerson:(id)arg1 ;
-(id)_eventsFromEvents:(id)arg1 withTargetDomain:(unsigned short)arg2 ;
-(id)_coreLocationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3 ;
-(id)_firstLocationNodeFromAddressNode:(id)arg1 inLocationNodes:(id)arg2 ;
-(id)_commonAreaNodesBetweenAddressAreaNodes:(id)arg1 andAddressNode:(id)arg2 ;
-(double)_distanceForLocationLabel:(id)arg1 ;
-(id)_closestLocationNodeFromAddressNode:(id)arg1 toAddressNode:(id)arg2 ;
-(id)_commonAreaNodesBetweenAddressNode:(id)arg1 andAddressNode:(id)arg2 ;
-(id)_coreEventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3 ;
-(id)_corePlaceMatchingIdsToScoresFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3 ;
-(double)_scoreForPlaceSubDomain:(unsigned short)arg1 ;
-(id)_coreSceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3 ;
-(id)matchEvent:(id)arg1 options:(id)arg2 ;
-(id)matchEvent:(id)arg1 withEvent:(id)arg2 options:(id)arg3 ;
-(id)matchPeopleNodes:(id)arg1 sortDescriptors:(id)arg2 ;
-(BOOL)exportMatchMomentEventResults:(id)arg1 relatedType:(unsigned long long)arg2 focusOnNodes:(id)arg3 toFileURL:(id)arg4 error:(id*)arg5 ;
-(id)_peopleMatchingIdsToResultsFromEvent:(id)arg1 options:(id)arg2 ;
-(void)enumeratePeopleClustersWithLinkage:(unsigned long long)arg1 threshold:(double)arg2 includingMeNode:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)_enumerateSocialGroupsIncludingMeNode:(BOOL)arg1 withValidGroupsBlock:(/*^block*/id)arg2 invalidGroupsBlock:(/*^block*/id)arg3 averageWeight:(out float*)arg4 ;
-(void)enumeratePeopleClustersIncludingMeNode:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_locationNodesOfSupersetsWithLocationNodeLabel:(id)arg1 ;
-(NSSet *)supersetCountryNodes;
-(id)_dateIntervalForMomentNodes:(id)arg1 ;
-(id)_supersetsForLocalDateInterval:(id)arg1 intersectingMomentNodes:(id)arg2 earlyStop:(BOOL)arg3 ;
-(id)supersetsForLocalDateInterval:(id)arg1 ;
-(NSSet *)supersets;
-(id)highlyInterestingMomentNodes;
-(id)mainUrbanCityNodes;
-(void)invalidateProcessingCaches;
-(void)invalidateSupersetCaches;
-(void)enumerateSocialGroupsWithBlock:(/*^block*/id)arg1 ;
-(id)socialGroupsDebugStringIncludingMeNode:(BOOL)arg1 ;
-(NSSet *)supersetCountyNodes;
-(NSSet *)supersetStateNodes;
-(NSSet *)supersetLocales;
-(id)supersetsIntersectingMomentNodes:(id)arg1 ;
-(BOOL)supersetsIntersectMomentNodes:(id)arg1 ;
-(id)supersetsForLocalDate:(id)arg1 ;
-(id)weekends;
-(id)highlyInterestingMomentNodesForMomentNodes:(id)arg1 ;
-(id)celebratedHolidays;
-(void)_randomWalkCommunityDetectionWithWeightThreshold:(float)arg1 ;
-(id)_peopleSocialGraphWithLoops:(BOOL)arg1 ;
-(id)interestingCityNodes;
-(id)interestingAreaNodes;
-(unsigned long long)_cluePeopleForRelationships:(id)arg1 ;
-(void)addParentMeaningHierarchyForMeaningNode:(id)arg1 ;
-(BOOL)eventIsVeryMeaningful:(id)arg1 ;
-(BOOL)eventIsStellar:(id)arg1 ;
-(id)meaningsFromMeaningfulEvent:(id)arg1 ;
-(id)momentNodesWithMeaning:(unsigned long long)arg1 ;
-(id)preciseMeaningLabelForMeaningLabel:(id)arg1 meaningfulEvent:(id)arg2 ;
-(id)bestMeaningLabelForMeaningfulEvent:(id)arg1 ;
-(id)meaningfulEventNodeForUUID:(id)arg1 ;
-(void)addMeaningToMeaningfulEventNode:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(BOOL)arg3 ;
-(void)enumerateMeaningsFromMeaningfulEvent:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateMeaningfulEventsWithMeaningLabel:(id)arg1 visitedMeaningfulEvents:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateMomentNodesWithMeaning:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateMeaningfulEventsWithMeaning:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)preciseMeaningNodeForMeaningLabel:(id)arg1 meaningfulEvent:(id)arg2 ;
-(id)insertMomentNodeForMoment:(id)arg1 ;
-(void)enumeratePetNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)petNodes;
-(id)insertHighlightGroupNodeWithHighlight:(id)arg1 ;
-(void)updateHighlightsForHighlightDayGroupNode:(id)arg1 withHighlightDayGroup:(id)arg2 ;
-(id)nodesForHighlightsInHighlightDayGroup:(id)arg1 ;
-(void)deleteHighlightsWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)insertHighlightsWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)updateHighlightNode:(id)arg1 withHighlight:(id)arg2 ;
-(void)insertHighlightDaysWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)insertHighlightDayGroupsWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)insertHighlightNodeWithHighlight:(id)arg1 ;
-(void)updateMomentsForHighlightNode:(id)arg1 withHighlight:(id)arg2 ;
-(id)nodesForMomentsInHighlight:(id)arg1 ;
-(id)_propertiesFromIngestHighlight:(id)arg1 ;
-(id)insertPublicEvent:(id)arg1 fromEventNode:(id)arg2 ;
-(id)allHobbies;
-(id)hobbiesForType:(long long)arg1 ;
-(id)insertPersonNodeForPerson:(id)arg1 ;
-(void)addRelationshipEdgesBetweenPersonNode:(id)arg1 andPersonNode:(id)arg2 forRelationship:(unsigned long long)arg3 confidence:(float)arg4 properties:(id)arg5 ;
-(void)addRelationshipEdgesBetweenPersonNode:(id)arg1 andSocialGroupNode:(id)arg2 forRelationship:(unsigned long long)arg3 confidence:(float)arg4 properties:(id)arg5 ;
-(id)insertPeopleWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 addressNodes:(id)arg3 isNearPeopleAddress:(BOOL*)arg4 ;
-(void)updatePersonNode:(id)arg1 withPerson:(id)arg2 forPropertyNames:(id)arg3 ;
-(id)insertContactSuggestion:(id)arg1 forPersonNode:(id)arg2 confidence:(double)arg3 edgeProperties:(id)arg4 ;
-(id)insertMePersonNodeForPerson:(id)arg1 ;
-(id)insertHomeWorkNodeForPerson:(id)arg1 personNode:(id)arg2 fromAddressNodes:(id)arg3 ;
-(id)insertPersonNodeForPerson:(id)arg1 fromEventNode:(id)arg2 numberOfAssetsWithPerson:(unsigned long long)arg3 edgeWeight:(float)arg4 ;
-(void)reportAGGDLogs;
-(void)_reportMePersonHomeWorkInfo;
-(void)_reportMeaningfulEvents;
-(void)_reportDisambiguatedLocations;
-(void)_reportBusinessItems;
-(void)_reportPublicEvents;
-(id)allDatesForEventRule:(id)arg1 yearRange:(NSRange)arg2 ;
-(BOOL)isCelebratingHolidayEventInGeneralForEventRule:(id)arg1 ;
-(id)celebratingMomentNodesForDateNode:(id)arg1 eventRule:(id)arg2 ;
-(void)invalidateIsCelebratingInGeneralCache;
-(void)_cacheEventRule:(id)arg1 isCelebrating:(BOOL)arg2 ;
-(id)allDatesForEventRule:(id)arg1 ;
-(id)_requiredSceneNodesToMatchForHolidayEventRule:(id)arg1 ;
-(BOOL)_allRequiredRulesOfEventRule:(id)arg1 applyToLocalDate:(id)arg2 andAnyNodeFromMomentNodes:(id)arg3 ;
-(BOOL)_isMatchingRequiredScenes:(id)arg1 withMomentNodes:(id)arg2 ;
-(BOOL)_isInterestingForAnyNodeFromMomentNodes:(id)arg1 ;
-(BOOL)_isMatchingRequiredScenes:(id)arg1 withMomentNode:(id)arg2 ;
-(id)_dayOfWeekNameForDate:(id)arg1 ;
-(id)insertDateNodeHierarchyWithDateComponents:(id)arg1 ;
-(id)insertDateNodesFromLocalStartDate:(id)arg1 toLocalEndDate:(id)arg2 fromEventNode:(id)arg3 ;
-(id)insertTimeNodesWithDateComponents:(id)arg1 fromEventNode:(id)arg2 ;
-(void)enumerateDateComponentsBetweenLocalStartDate:(id)arg1 andLocalEndDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)insertPartOfDayNodeWithPartOfDayName:(id)arg1 fromEventNode:(id)arg2 edgeWeight:(float)arg3 ;
-(id)insertDateNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 ;
-(id)insertDateNodesFromEventNode:(id)arg1 ;
-(id)insertPartOfDayNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 ;
@end

