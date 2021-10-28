/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>
#import <libobjc.A.dylib/RERelevanceProviderEnvironmentProperties.h>
#import <libobjc.A.dylib/REElementRelevanceProviderGenerator.h>

@protocol RERelevanceProviderEnvironmentDelegate;
@class REFeatureSet, NSDictionary, NSMutableArray, NSMapTable, REUpNextDisjointSet, REDependencyGraph, NSHashTable, NSLock, REUpNextScheduler, NSMutableSet;

@interface RERelevanceProviderEnvironment : RERelevanceEngineSubsystem <RERelevanceProviderEnvironmentProperties, REElementRelevanceProviderGenerator> {

	NSMutableArray* _relevanceManagers;
	NSMapTable* _relevanceClassManagerMap;
	NSMapTable* _relevanceHistogramMap;
	REUpNextDisjointSet* _relevanceProviderSet;
	REDependencyGraph* _dependencyGraph;
	NSMapTable* _relevanceValues;
	NSHashTable* _customProviders;
	NSLock* _relevanceValuesLock;
	REFeatureSet* _supportedFeatures;
	REUpNextScheduler* _scheduler;
	NSHashTable* _providersToUpdate;
	NSMutableSet* _providerManagersToUpdate;
	NSMutableArray* _updateCompletionBlocks;
	BOOL _allowsLocationUse;
	id<RERelevanceProviderEnvironmentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RERelevanceProviderEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsLocationUse;                                                  //@synthesize allowsLocationUse=_allowsLocationUse - In the implementation block
@property (nonatomic,readonly) unsigned long long relevanceProviderCount; 
@property (nonatomic,readonly) REFeatureSet * supportedFeatures; 
@property (nonatomic,readonly) NSDictionary * allProviderValues; 
-(void)dealloc;
-(id<RERelevanceProviderEnvironmentDelegate>)delegate;
-(void)setDelegate:(id<RERelevanceProviderEnvironmentDelegate>)arg1 ;
-(void)pause;
-(void)resume;
-(REFeatureSet *)supportedFeatures;
-(void)immediateUpdateForRelevanceProviderManager:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleUpdateForRelevanceProviderManager:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleUpdateForRelevanceProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)allowsLocationUse;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(BOOL)isSupportedRelevanceProvider:(id)arg1 ;
-(id)currentRelevanceProvidersState;
-(id)initWithRelevanceEngine:(id)arg1 ;
-(void)_setupRelevanceProviderManagers;
-(void)_queue_performUpdate:(/*^block*/id)arg1 ;
-(id)_histogramForFeature:(id)arg1 ;
-(id)_providerManagerForProvider:(id)arg1 ;
-(void)_removeRelevanceValueForProvider:(id)arg1 ;
-(void)_addRelevanceValue:(id)arg1 forProvider:(id)arg2 ;
-(id)_histogramForProvider:(id)arg1 ;
-(BOOL)containsRelevanceProvider:(id)arg1 ;
-(id)relevancesForRelevanceProvider:(id)arg1 ;
-(void)_scaleRelevanceProviderValues:(id)arg1 values:(id)arg2 ;
-(id)featuresForRelevanceProvider:(id)arg1 ;
-(id)_relevaneProviderWithType:(id)arg1 withOptions:(id)arg2 ;
-(NSDictionary *)allProviderValues;
-(id)createRelevaneProviderWithType:(id)arg1 withOptions:(id)arg2 ;
-(id)encodeRelevaneProvider:(id)arg1 ;
-(unsigned long long)relevanceProviderCount;
-(void)addRelevanceProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeRelevanceProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isRelevanceProviderLoaded:(id)arg1 ;
-(void)relateRelevanceProvider:(id)arg1 toRelevanceProvider:(id)arg2 ;
-(BOOL)isRelevanceProviderHistoric:(id)arg1 ;
-(id)relevancesForRelevanceProvider:(id)arg1 usingContext:(id)arg2 ;
-(void)accessHistogramForFeature:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end
