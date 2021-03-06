/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBRecentDisplayItemsPersistenceDelegate.h>
#import <libobjc.A.dylib/SBRecentDisplayItemsControllerDelegate.h>
#import <libobjc.A.dylib/SBIconListModelObserver.h>

@protocol SBFloatingDockSuggestionsModelDelegate;
@class NSOrderedSet, SBBestAppSuggestion, SBApplication, SBAppSuggestionManager, SBRecentDisplayItemsController, SBRecentDisplayItemsDataStore, SBRecentDisplayItemsDefaults, SBIconListModel, SBIconController, SBApplicationController, SBIconModel, SBFloatingDockDefaults, SBFAnalyticsClient, NSMutableSet, NSMutableOrderedSet, PTSingleTestRecipe, NSString;

@interface SBFloatingDockSuggestionsModel : NSObject <SBRecentDisplayItemsPersistenceDelegate, SBRecentDisplayItemsControllerDelegate, SBIconListModelObserver> {

	BOOL _recentsEnabled;
	NSOrderedSet* _currentDisplayItems;
	SBBestAppSuggestion* _currentAppSuggestion;
	SBApplication* _requestedSuggestedApplication;
	id<SBFloatingDockSuggestionsModelDelegate> _delegate;
	unsigned long long _maxSuggestions;
	SBAppSuggestionManager* _appSuggestionManager;
	SBRecentDisplayItemsController* _recentsController;
	SBRecentDisplayItemsDataStore* _recentsDataStore;
	SBRecentDisplayItemsDefaults* _recentsDefaults;
	SBIconListModel* _userDockListModel;
	SBIconController* _iconController;
	SBApplicationController* _applicationController;
	SBIconModel* _iconModel;
	SBFloatingDockDefaults* _floatingDockDefaults;
	SBFAnalyticsClient* _analyticsClient;
	NSMutableSet* _pendingSuggestionUpdateReasons;
	NSMutableOrderedSet* _currentRecentDisplayItems;
	NSMutableOrderedSet* _currentRecentDisplayItemsSortedByRecency;
	PTSingleTestRecipe* _stressTestRecipe;

}

@property (nonatomic,readonly) unsigned long long maxSuggestions;                                           //@synthesize maxSuggestions=_maxSuggestions - In the implementation block
@property (nonatomic,readonly) SBAppSuggestionManager * appSuggestionManager;                               //@synthesize appSuggestionManager=_appSuggestionManager - In the implementation block
@property (nonatomic,readonly) SBRecentDisplayItemsController * recentsController;                          //@synthesize recentsController=_recentsController - In the implementation block
@property (nonatomic,readonly) SBRecentDisplayItemsDataStore * recentsDataStore;                            //@synthesize recentsDataStore=_recentsDataStore - In the implementation block
@property (nonatomic,readonly) SBRecentDisplayItemsDefaults * recentsDefaults;                              //@synthesize recentsDefaults=_recentsDefaults - In the implementation block
@property (nonatomic,retain) SBIconListModel * userDockListModel;                                           //@synthesize userDockListModel=_userDockListModel - In the implementation block
@property (nonatomic,readonly) SBIconController * iconController;                                           //@synthesize iconController=_iconController - In the implementation block
@property (nonatomic,readonly) SBApplicationController * applicationController;                             //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,retain) SBIconModel * iconModel;                                                       //@synthesize iconModel=_iconModel - In the implementation block
@property (nonatomic,readonly) SBFloatingDockDefaults * floatingDockDefaults;                               //@synthesize floatingDockDefaults=_floatingDockDefaults - In the implementation block
@property (assign,nonatomic) BOOL recentsEnabled;                                                           //@synthesize recentsEnabled=_recentsEnabled - In the implementation block
@property (nonatomic,retain) SBFAnalyticsClient * analyticsClient;                                          //@synthesize analyticsClient=_analyticsClient - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingSuggestionUpdateReasons;                               //@synthesize pendingSuggestionUpdateReasons=_pendingSuggestionUpdateReasons - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * currentRecentDisplayItems;                             //@synthesize currentRecentDisplayItems=_currentRecentDisplayItems - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * currentRecentDisplayItemsSortedByRecency;              //@synthesize currentRecentDisplayItemsSortedByRecency=_currentRecentDisplayItemsSortedByRecency - In the implementation block
@property (nonatomic,copy) NSOrderedSet * currentDisplayItems;                                              //@synthesize currentDisplayItems=_currentDisplayItems - In the implementation block
@property (nonatomic,readonly) PTSingleTestRecipe * stressTestRecipe;                                       //@synthesize stressTestRecipe=_stressTestRecipe - In the implementation block
@property (nonatomic,readonly) SBBestAppSuggestion * currentAppSuggestion;                                  //@synthesize currentAppSuggestion=_currentAppSuggestion - In the implementation block
@property (nonatomic,retain) SBApplication * requestedSuggestedApplication;                                 //@synthesize requestedSuggestedApplication=_requestedSuggestedApplication - In the implementation block
@property (assign,nonatomic,__weak) id<SBFloatingDockSuggestionsModelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<SBFloatingDockSuggestionsModelDelegate>)delegate;
-(void)setDelegate:(id<SBFloatingDockSuggestionsModelDelegate>)arg1 ;
-(SBApplicationController *)applicationController;
-(SBFloatingDockDefaults *)floatingDockDefaults;
-(void)_addStateCaptureHandlers;
-(SBIconModel *)iconModel;
-(void)dockViewDidResignVisible;
-(void)dockViewDidBecomeVisible;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didMoveIcon:(id)arg2 ;
-(void)_iconModelDidLayout:(id)arg1 ;
-(void)setIconModel:(SBIconModel *)arg1 ;
-(SBIconController *)iconController;
-(void)_initializeAndObserveDefaults;
-(BOOL)recentDisplayItemsController:(id)arg1 shouldAddItem:(id)arg2 ;
-(void)recentDisplayItemsController:(id)arg1 didAddItem:(id)arg2 ;
-(void)recentDisplayItemsController:(id)arg1 didAddItem:(id)arg2 andDropItem:(id)arg3 ;
-(void)recentDisplayItemsController:(id)arg1 didMoveItemToFront:(id)arg2 ;
-(void)recentDisplayItemsController:(id)arg1 didRemoveItem:(id)arg2 ;
-(SBApplication *)requestedSuggestedApplication;
-(void)setRequestedSuggestedApplication:(SBApplication *)arg1 ;
-(void)_iconModelDidChange:(id)arg1 ;
-(NSOrderedSet *)currentDisplayItems;
-(void)beginPendingUpdatesForReason:(id)arg1 ;
-(void)endPendingUpdatesForReason:(id)arg1 ;
-(SBBestAppSuggestion *)currentAppSuggestion;
-(SBRecentDisplayItemsDataStore *)recentsDataStore;
-(SBRecentDisplayItemsDefaults *)recentsDefaults;
-(SBAppSuggestionManager *)appSuggestionManager;
-(id)persistedDisplayItemsForDataStore:(id)arg1 ;
-(void)dataStore:(id)arg1 persistDisplayItems:(id)arg2 ;
-(BOOL)dataStore:(id)arg1 shouldRestorePersistedDisplayItem:(id)arg2 ;
-(id)initWithMaximumNumberOfSuggestions:(unsigned long long)arg1 iconController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 recentsDefaults:(id)arg5 floatingDockDefaults:(id)arg6 appSuggestionManager:(id)arg7 analyticsClient:(id)arg8 applicationController:(id)arg9 ;
-(SBRecentDisplayItemsController *)recentsController;
-(SBFAnalyticsClient *)analyticsClient;
-(void)setAnalyticsClient:(SBFAnalyticsClient *)arg1 ;
-(BOOL)recentsEnabled;
-(void)_setRecentsEnabled:(BOOL)arg1 ;
-(id)_dockListModelFromIconController;
-(void)setUserDockListModel:(SBIconListModel *)arg1 ;
-(void)_reloadRecentsAndSuggestions;
-(void)_appSuggestionsChanged:(id)arg1 ;
-(void)_runStressTest;
-(BOOL)_isPendingAppSuggestionsUpdate;
-(void)_performAppSuggestionChangedWithNewSuggestion:(id)arg1 ;
-(void)_updateCurrentDisplayItemsAfterContinuityChange:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(id)_moveOrAddRecentThenCull:(id)arg1 ;
-(id)_displayItemForAppSuggestion:(id)arg1 ;
-(unsigned long long)_indexForAppSuggestion:(id)arg1 ;
-(id)_oldestRecent;
-(BOOL)_displayItemContainedInUserDock:(id)arg1 ;
-(void)_handleNewRecentItem:(id)arg1 ;
-(void)setCurrentDisplayItems:(NSOrderedSet *)arg1 ;
-(id)_filterRecentDisplayItems:(id)arg1 filteredOutItems:(id*)arg2 ;
-(BOOL)_shouldProcessAppSuggestion:(id)arg1 ;
-(unsigned long long)maxSuggestions;
-(SBIconListModel *)userDockListModel;
-(void)setRecentsEnabled:(BOOL)arg1 ;
-(NSMutableSet *)pendingSuggestionUpdateReasons;
-(NSMutableOrderedSet *)currentRecentDisplayItems;
-(NSMutableOrderedSet *)currentRecentDisplayItemsSortedByRecency;
-(PTSingleTestRecipe *)stressTestRecipe;
@end

