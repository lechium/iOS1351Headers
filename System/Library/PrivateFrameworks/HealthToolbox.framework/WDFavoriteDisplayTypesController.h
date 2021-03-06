/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HKObserverSet, NSMutableSet, WDUserDefaults;

@interface WDFavoriteDisplayTypesController : NSObject {

	HKObserverSet* _observers;
	NSMutableSet* _favoritedDisplayTypes;
	BOOL _cycleTrackingSummaryFavorited;
	BOOL _shouldPersistChanges;
	long long _state;
	WDUserDefaults* _userDefaults;
	BOOL _shouldRecoverFromErrors;

}

@property (assign,nonatomic) BOOL shouldRecoverFromErrors;              //@synthesize shouldRecoverFromErrors=_shouldRecoverFromErrors - In the implementation block
@property (nonatomic,readonly) BOOL hasLoadedInitialState; 
+(long long)cycleTrackingSummaryFavoritedIdentifier;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_needsFetch;
-(void)_handleFetchSuccess:(id)arg1 ;
-(void)_handleFetchError:(id)arg1 ;
-(void)addObserver:(id)arg1 queue:(id)arg2 ;
-(BOOL)hasLoadedInitialState;
-(BOOL)displayTypeIsFavorited:(id)arg1 ;
-(void)setIsFavorited:(BOOL)arg1 displayType:(id)arg2 ;
-(id)favoritedDisplayTypes;
-(id)initWithWDUserDefaults:(id)arg1 shouldPersistChanges:(BOOL)arg2 ;
-(void)setCycleTrackingSummaryFavorited:(BOOL)arg1 ;
-(BOOL)cycleTrackingSummaryIsFavorited;
-(void)setIsFavorited:(BOOL)arg1 displayTypes:(id)arg2 ;
-(void)fetchFavorites;
-(void)userHasUpdatedFavortiesWithCompletion:(/*^block*/id)arg1 ;
-(void)userUpdatedFavorites;
-(void)_fetchUserDefaultsIfNecessary;
-(void)_recoverFromFailureStateIfNecessary;
-(void)_persistFavoritedDisplayTypes;
-(void)_alertObserversDidUpdate;
-(void)_alertObserversDidFail;
-(void)_reportFavoritedDisplayTypes;
-(void)_alertObserversControllerReady;
-(id)_displayTypeIdentifiersFromDisplayTypes:(id)arg1 ;
-(void)_alertObserversDidSuccessfullyPersist;
-(void)removeAllFavorites;
-(BOOL)shouldRecoverFromErrors;
-(void)setShouldRecoverFromErrors:(BOOL)arg1 ;
@end

