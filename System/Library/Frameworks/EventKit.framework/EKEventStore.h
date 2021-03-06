/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKDaemonConnectionDelegate.h>

@protocol OS_dispatch_queue, CalCalendarDataContainerProvider;
@class CADDatabaseInitializationOptions, EKObjectID, NSMutableDictionary, NSNumber, NSTimeZone, NSMutableSet, EKDaemonConnection, NSObject, EKDataProtectionObserver, EKReminderStore, NSDictionary, EKCalendar, NSArray, NSString, EKAlarm;

@interface EKEventStore : NSObject <EKDaemonConnectionDelegate> {

	CADDatabaseInitializationOptions* _initializationOptions;
	EKObjectID* _localSourceID;
	EKObjectID* _birthdaySourceID;
	NSMutableDictionary* _defaultCalendarsForNewEventsIDBySourceID;
	EKObjectID* _defaultCalendarForNewRemindersID;
	EKObjectID* _suggestedEventCalendarID;
	EKObjectID* _naturalLanguageSuggestedEventCalendarID;
	EKObjectID* _subscribedCalendarsSourceID;
	NSMutableDictionary* _calendars;
	NSMutableDictionary* _sources;
	NSMutableDictionary* _cachedValidatedAddresses;
	NSNumber* _defaultTimedAlarmOffset;
	NSNumber* _defaultAllDayAlarmOffset;
	BOOL _allowsBirthdayCalendarModifications;
	BOOL _hasAccessToEvents;
	BOOL _hasAccessToReminders;
	BOOL _accessDetermined;
	BOOL _needsCommitForRemoteChanges;
	BOOL _inboxRepliedSectionHasContent;
	unsigned _flags;
	NSTimeZone* _timeZone;
	NSMutableSet* _insertedObjects;
	NSMutableSet* _deletedObjects;
	NSMutableSet* _updatedObjects;
	NSMutableSet* _objectsPendingCommit;
	EKDaemonConnection* _database;
	double _lastDatabaseNotificationTimestamp;
	NSObject*<OS_dispatch_queue> _calendarSourcesAndDefaultsQueue;
	NSObject*<OS_dispatch_queue> _registeredQueue;
	NSObject*<OS_dispatch_queue> _unsavedChangesQueue;
	NSObject*<OS_dispatch_queue> _dbChangedQueue;
	NSObject*<OS_dispatch_queue> _constraintsCacheQueue;
	NSObject*<OS_dispatch_queue> _notificationCollectionCacheQueue;
	EKDataProtectionObserver* _dataProtectionObserver;
	NSMutableDictionary* __cachedConstraints;
	NSMutableDictionary* __cachedNotificationCollections;
	EKReminderStore* _reminderStore;
	NSDictionary* _reminderSourceIDToEventSourceIDMapping;
	NSDictionary* _eventSourceIDToReminderSourceIDMapping;
	NSObject*<OS_dispatch_queue> _reminderSourceMapLock;
	NSMutableDictionary* _registeredObjects;
	id<CalCalendarDataContainerProvider> _calendarDataContainerProvider;

}

@property (nonatomic,retain) NSMutableSet * insertedObjects;                                                    //@synthesize insertedObjects=_insertedObjects - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedObjects;                                                     //@synthesize deletedObjects=_deletedObjects - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedObjects;                                                     //@synthesize updatedObjects=_updatedObjects - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectsPendingCommit;                                               //@synthesize objectsPendingCommit=_objectsPendingCommit - In the implementation block
@property (assign,nonatomic) BOOL needsCommitForRemoteChanges;                                                  //@synthesize needsCommitForRemoteChanges=_needsCommitForRemoteChanges - In the implementation block
@property (nonatomic,retain) EKDaemonConnection * database;                                                     //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) double lastDatabaseNotificationTimestamp;                                          //@synthesize lastDatabaseNotificationTimestamp=_lastDatabaseNotificationTimestamp - In the implementation block
@property (assign,nonatomic) unsigned flags;                                                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calendarSourcesAndDefaultsQueue;                    //@synthesize calendarSourcesAndDefaultsQueue=_calendarSourcesAndDefaultsQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> registeredQueue;                                    //@synthesize registeredQueue=_registeredQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> unsavedChangesQueue;                                //@synthesize unsavedChangesQueue=_unsavedChangesQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dbChangedQueue;                                     //@synthesize dbChangedQueue=_dbChangedQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> constraintsCacheQueue;                              //@synthesize constraintsCacheQueue=_constraintsCacheQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationCollectionCacheQueue;                   //@synthesize notificationCollectionCacheQueue=_notificationCollectionCacheQueue - In the implementation block
@property (nonatomic,retain) EKDataProtectionObserver * dataProtectionObserver;                                 //@synthesize dataProtectionObserver=_dataProtectionObserver - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedConstraints;                                          //@synthesize _cachedConstraints=__cachedConstraints - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedNotificationCollections;                              //@synthesize _cachedNotificationCollections=__cachedNotificationCollections - In the implementation block
@property (nonatomic,readonly) EKReminderStore * reminderStore;                                                 //@synthesize reminderStore=_reminderStore - In the implementation block
@property (nonatomic,retain) NSDictionary * reminderSourceIDToEventSourceIDMapping;                             //@synthesize reminderSourceIDToEventSourceIDMapping=_reminderSourceIDToEventSourceIDMapping - In the implementation block
@property (nonatomic,retain) NSDictionary * eventSourceIDToReminderSourceIDMapping;                             //@synthesize eventSourceIDToReminderSourceIDMapping=_eventSourceIDToReminderSourceIDMapping - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reminderSourceMapLock;                                //@synthesize reminderSourceMapLock=_reminderSourceMapLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredObjects;                                           //@synthesize registeredObjects=_registeredObjects - In the implementation block
@property (nonatomic,retain) EKCalendar * defaultCalendarForNewEvents; 
@property (nonatomic,readonly) NSArray * inboxRepliedSectionItems; 
@property (nonatomic,readonly) BOOL inboxRepliedSectionHasContent;                                              //@synthesize inboxRepliedSectionHasContent=_inboxRepliedSectionHasContent - In the implementation block
@property (nonatomic,readonly) EKCalendar * suggestedEventCalendar; 
@property (nonatomic,readonly) EKCalendar * naturalLanguageSuggestedEventCalendar; 
@property (nonatomic,readonly) BOOL automaticLocationGeocodingAllowed; 
@property (nonatomic,readonly) unsigned long long lastConfirmedSplashScreenVersion; 
@property (nonatomic,readonly) BOOL allowsBirthdayModifications; 
@property (nonatomic,copy) NSTimeZone * timeZone;                                                               //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath; 
@property (nonatomic,readonly) EKAlarm * defaultTimedAlarm; 
@property (nonatomic,readonly) EKAlarm * defaultAllDayAlarm; 
@property (nonatomic,readonly) int unacknowledgedEventCount; 
@property (nonatomic,readonly) int notifiableEventCount; 
@property (nonatomic,readonly) BOOL isDataProtected; 
@property (assign,nonatomic) BOOL showDeclinedEvents; 
@property (nonatomic,readonly) id<CalCalendarDataContainerProvider> calendarDataContainerProvider;              //@synthesize calendarDataContainerProvider=_calendarDataContainerProvider - In the implementation block
@property (readonly) EKDaemonConnection * connection; 
@property (nonatomic,readonly) NSArray * eventNotifications; 
@property (nonatomic,readonly) unsigned long long eventNotificationCount; 
@property (nonatomic,readonly) NSString * eventStoreIdentifier; 
@property (nonatomic,readonly) NSArray * delegateSources; 
@property (nonatomic,readonly) NSArray * sources; 
@property (nonatomic,readonly) NSArray * calendars; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)authorizationStatusForEntityType:(unsigned long long)arg1 ;
+(unsigned long long)ekEventStoreInitOptionsFromCalDatabaseInitOptions:(int)arg1 ;
+(int)calDatabaseInitOptionsFromEKEventStoreInitOptions:(unsigned long long)arg1 ;
+(id)eventStoreChangedDistributedNotificationName;
+(Class)classForEntityName:(id)arg1 ;
+(/*^block*/id)reminderStoreContainerTokenProvider;
+(void)setReminderStoreContainerTokenProvider:(/*^block*/id)arg1 ;
+(void)setDenyAccessToEvents:(BOOL)arg1 ;
+(void)setDenyAccessToReminders:(BOOL)arg1 ;
-(id)_uicolorFromString:(id)arg1 ;
-(id)symbolicNameToUIColors;
-(id)colorNamesInRainbowOrder;
-(id)localizedStringForSymbolicColorName:(id)arg1 ;
-(id)defaultCalendarColorsInRainbowOrder;
-(id)colorForCalendar:(id)arg1 ;
-(id)stringForColor:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(id)calendarWithIdentifier:(id)arg1 ;
-(unsigned)flags;
-(void)reset;
-(EKDaemonConnection *)connection;
-(void)setDatabase:(EKDaemonConnection *)arg1 ;
-(int)sequenceNumber;
-(EKDaemonConnection *)database;
-(void)rollback;
-(NSString *)databasePath;
-(NSMutableSet *)insertedObjects;
-(NSArray *)sources;
-(void)setFlags:(unsigned)arg1 ;
-(NSMutableSet *)updatedObjects;
-(NSMutableSet *)deletedObjects;
-(NSMutableDictionary *)registeredObjects;
-(void)setDeletedObjects:(NSMutableSet *)arg1 ;
-(void)setInsertedObjects:(NSMutableSet *)arg1 ;
-(void)setUpdatedObjects:(NSMutableSet *)arg1 ;
-(id)objectWithObjectID:(id)arg1 ;
-(BOOL)showDeclinedEvents;
-(BOOL)occurrenceCacheOccurrencesAreBeingGenerated;
-(id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1 ;
-(id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1 onDay:(double)arg2 ;
-(id)eventForUID:(id)arg1 occurrenceDate:(id)arg2 checkValid:(BOOL)arg3 ;
-(BOOL)saveEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3 ;
-(id)eventForUID:(id)arg1 occurrenceDate:(id)arg2 ;
-(Class)_SGSuggestionsServiceClass;
-(EKCalendar *)defaultCalendarForNewEvents;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 ;
-(id)eventsMatchingPredicate:(id)arg1 ;
-(int)readWriteCalendarCountForEntityType:(unsigned long long)arg1 ;
-(id)readWriteCalendarsForEntityType:(unsigned long long)arg1 ;
-(BOOL)saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 loadDefaultProperties:(BOOL)arg4 ;
-(id)initWithEKOptions:(unsigned long long)arg1 ;
-(id)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3 ;
-(id)eventWithUniqueId:(id)arg1 ;
-(BOOL)automaticLocationGeocodingAllowed;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(BOOL)deleteCalendar:(id)arg1 forEntityType:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)removeCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(void)cacheValidationStatusForAddress:(id)arg1 status:(unsigned long long)arg2 ;
-(unsigned long long)addressValidationStatus:(id)arg1 ;
-(id)predicateForNaturalLanguageSuggestedEventsWithSearchString:(id)arg1 ;
-(BOOL)refreshSource:(id)arg1 userRequested:(BOOL)arg2 ;
-(id)fetchEventsMatchingPredicate:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(CGColorRef)copyCGColorForNewCalendar;
-(void)confirmSuggestedEvent:(id)arg1 ;
-(id)calendarItemWithIdentifier:(id)arg1 ;
-(id)eventWithUniqueId:(id)arg1 occurrenceDate:(id)arg2 ;
-(id)defaultCalendarForNewReminders;
-(id)initWithOptions:(int)arg1 path:(id)arg2 ;
-(BOOL)saveEvent:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)removeEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3 ;
-(BOOL)removeReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(void)acceptSuggestedEvent:(id)arg1 ;
-(void)deleteSuggestedEvent:(id)arg1 ;
-(id)initWithEKOptions:(unsigned long long)arg1 path:(id)arg2 changeTrackingClientId:(id)arg3 enablePropertyModificationLogging:(BOOL)arg4 allowDelegateSources:(BOOL)arg5 ;
-(id)calendarWithID:(id)arg1 ;
-(id)defaultCalendarForNewEventsInDelegateSource:(id)arg1 ;
-(id)eventSources;
-(id)refreshSourcesIfNecessary:(BOOL)arg1 ;
-(id)closestCachedOccurrenceToDate:(double)arg1 forEventUID:(int)arg2 prefersForwardSearch:(BOOL)arg3 ;
-(NSArray *)delegateSources;
-(unsigned long long)eventNotificationCountForSource:(id)arg1 excludingDelegateSources:(BOOL)arg2 filteredByShowsNotificationsFlag:(BOOL)arg3 ;
-(id)_allCalendars;
-(void)setShowDeclinedEvents:(BOOL)arg1 ;
-(void)setSourceAccountManagement:(int)arg1 ;
-(BOOL)_isUnitTesting;
-(id)calendarItemsWithExternalIdentifier:(id)arg1 ;
-(id)eventWithIdentifier:(id)arg1 ;
-(void)requestAccessToEntityType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(EKReminderStore *)reminderStore;
-(void)reminderStoreChanged;
-(id)reminderSourceForEventSource:(id)arg1 ;
-(BOOL)saveCalendar:(id)arg1 error:(id*)arg2 ;
-(id)remindersMatchingPredicate:(id)arg1 ;
-(id)sourceWithIdentifier:(id)arg1 ;
-(id)cachedConstraintsForSource:(id)arg1 ;
-(NSArray *)calendars;
-(BOOL)removeCalendar:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveReminder:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeReminder:(id)arg1 error:(id*)arg2 ;
-(BOOL)commit:(id*)arg1 ;
-(id)predicateForRemindersInCalendars:(id)arg1 ;
-(id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)fetchRemindersMatchingPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)_cachedConstraints;
-(unsigned long long)lastConfirmedSplashScreenVersion;
-(id)cachedConstraintsForSourceWithObjectID:(id)arg1 ;
-(id)registerFetchedObjectWithID:(id)arg1 ;
-(id)publicObjectWithPersistentObject:(id)arg1 ;
-(BOOL)objectWithIDExists:(id)arg1 ;
-(void)_unregisterObject:(id)arg1 ;
-(void)_insertObject:(id)arg1 ;
-(void)_deleteObject:(id)arg1 ;
-(id)eventSourceIDForReminderSourceID:(id)arg1 ;
-(void)daemonRestarted;
-(id)contactIdentifierForCalendarItem:(id)arg1 ;
-(void)addContactIdentifier:(id)arg1 forCalendarItem:(id)arg2 ;
-(void)removeContactIdentifier:(id)arg1 forCalendarItem:(id)arg2 ;
-(void)_addObjectToPendingCommits:(id)arg1 ;
-(BOOL)shouldWhitelistOrganizerEmailFromJunkChecks:(id)arg1 ;
-(BOOL)shouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)arg1 ;
-(void)_registerObject:(id)arg1 ;
-(id)eventSourceForReminderSource:(id)arg1 ;
-(BOOL)occurrencesExistInRangeForEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4 timezone:(id)arg5 ;
-(id)publicObjectWithObjectID:(id)arg1 ;
-(void)setReminderSourceMapLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)reminderSourceMapLock;
-(BOOL)returnEventResults;
-(id)reminderSources;
-(BOOL)returnReminderResults;
-(id)_combineEventSources:(id)arg1 withReminderSources:(id)arg2 ;
-(void)_rebuildSourceMapsWithEventSources:(id)arg1 reminderSources:(id)arg2 ;
-(NSDictionary *)reminderSourceIDToEventSourceIDMapping;
-(void)setReminderSourceIDToEventSourceIDMapping:(NSDictionary *)arg1 ;
-(void)setEventSourceIDToReminderSourceIDMapping:(NSDictionary *)arg1 ;
-(id)reminderSourceMap;
-(id)eventSourceMap;
-(NSDictionary *)eventSourceIDToReminderSourceIDMapping;
-(void)getMapsWithReminderSourceMap:(id*)arg1 eventSourceMap:(id*)arg2 ;
-(void)initializeEKEventStorePlusReminders;
-(id)combinedReminderAndEventSources;
-(id)combineEventCalendars:(id)arg1 withReminderCalendars:(id)arg2 ;
-(void)invalidateReminderSourceMaps;
-(id)registerFetchedObjectWithID:(id)arg1 withDefaultLoadedPropertyKeys:(id)arg2 values:(id)arg3 ;
-(BOOL)isDataProtected;
-(id)earliestExpiringNotifiableEventEndDateAfterDate:(id)arg1 timeZone:(id)arg2 ;
-(id)eventNotificationsFilteredByShowsNotificationsFlag:(BOOL)arg1 ;
-(id)initWithBirthdayCalendarModifications;
-(id)localBirthdayCalendarSource;
-(id)predicateForMasterEventsInCalendar:(id)arg1 ;
-(BOOL)removeEvent:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id*)arg4 ;
-(void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_trackModifiedObject:(id)arg1 ;
-(EKAlarm *)defaultAllDayAlarm;
-(EKAlarm *)defaultTimedAlarm;
-(void)setDataProtectionObserver:(EKDataProtectionObserver *)arg1 ;
-(EKDataProtectionObserver *)dataProtectionObserver;
-(BOOL)allowsBirthdayModifications;
-(BOOL)canModifySuggestedEventCalendar;
-(id)initWithOptions:(int)arg1 path:(id)arg2 allowDelegateSources:(BOOL)arg3 ;
-(void)_accessStatusChanged;
-(void)_requestAccessForEntityType:(unsigned long long)arg1 ;
-(void)setSourceAccountManagement:(int)arg1 withBundleID:(id)arg2 ;
-(void)_postEventStoreChangedNotificationWithChangeType:(unsigned long long)arg1 changedObjectIDs:(id)arg2 ;
-(void)_removeCachedCalendarWithID:(id)arg1 ;
-(void)_clearCachedSources;
-(void)_clearCachedConstraintsForSourceWithObjectID:(id)arg1 ;
-(void)_detachObject:(id)arg1 ;
-(void)_clearCachedCalendars;
-(void)_cacheCalendarWithObjectID:(id)arg1 withDefaultLoadedPropertyValues:(id)arg2 forKeys:(id)arg3 ;
-(void)_validateObjectIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)calendarSourcesAndDefaultsQueue;
-(void)_databaseChangedExternally:(unsigned long long)arg1 ;
-(void)_cacheSourceWithObjectID:(id)arg1 withDefaultLoadedPropertyValues:(id)arg2 forKeys:(id)arg3 ;
-(void)_loadSourcesIfNeeded;
-(void)_logMainThreadFetchWarningIfNeeded;
-(id)_sourceWithID:(id)arg1 ;
-(id)publicObjectWithFetchedObjectID:(id)arg1 ;
-(void)_saveWithoutNotify;
-(void)_loadCalendarsIfNeeded;
-(BOOL)_calendar:(id)arg1 supportsEntityType:(unsigned long long)arg2 ;
-(BOOL)shouldSaveCalendarAsEventCalendar:(id)arg1 ;
-(BOOL)_saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)shouldSaveCalendarAsReminderCalendar:(id)arg1 ;
-(BOOL)canModifyCalendarDatabase;
-(BOOL)_removeCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_parseURI:(id)arg1 expectedScheme:(id)arg2 identifier:(id*)arg3 options:(id*)arg4 ;
-(id)_eventWithURI:(id)arg1 checkValid:(BOOL)arg2 ;
-(id)closestCachedOccurrenceToDate:(double)arg1 forEventUID:(int)arg2 ;
-(id)_importEventsWithExternalIDs:(id)arg1 fromICSData:(id)arg2 intoCalendarsWithIDs:(id)arg3 options:(unsigned long long)arg4 batchSize:(int)arg5 ;
-(void)setDefaultCalendar:(id)arg1 forNewEventsInDelegateSource:(id)arg2 ;
-(BOOL)saveReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(id)_calendarItemsMatchingPredicate:(id)arg1 ;
-(id)calendarItemsWithExternalIdentifier:(id)arg1 inCalendars:(id)arg2 ;
-(id)_calendarItemsWithExternalIdentifier:(id)arg1 inCalendars:(id)arg2 entityTypes:(unsigned long long)arg3 ;
-(void)_validateReminderPredicate:(id)arg1 ;
-(id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(BOOL)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(BOOL)arg4 completed:(BOOL)arg5 includeDatesBefore:(BOOL)arg6 sortOrder:(int)arg7 preloadProperties:(id)arg8 maxResults:(unsigned long long)arg9 ;
-(id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(BOOL)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(BOOL)arg4 completed:(BOOL)arg5 includeDatesBefore:(BOOL)arg6 sortOrder:(int)arg7 preloadProperties:(id)arg8 ;
-(id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForRemindersWithSearchTerm:(id)arg1 preloadProperties:(id)arg2 ;
-(id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 maxResults:(unsigned long long)arg9 ;
-(BOOL)accessGrantedForEntityType:(unsigned long long)arg1 ;
-(id)sharedCalendarInvitationsForEntityTypes:(unsigned long long)arg1 ;
-(id)scheduledTaskCacheFetchTasksOnDay:(id)arg1 maxResults:(unsigned long long)arg2 ;
-(BOOL)removeResourceChanges:(id)arg1 error:(id*)arg2 ;
-(id)resourceChangesForEntityTypes:(unsigned long long)arg1 ;
-(BOOL)removeInviteReplyNotifications:(id)arg1 error:(id*)arg2 ;
-(BOOL)_refreshDASource:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_registerObjectImmediate:(id)arg1 ;
-(id)_addFetchedObjectWithID:(id)arg1 ;
-(void)_forgetRegisteredObjects;
-(BOOL)_commit:(id*)arg1 ;
-(void)_reregisterObject:(id)arg1 oldID:(id)arg2 ;
-(void)_removeCachedCalendarFromSource:(id)arg1 ;
-(void)_validateEventPredicate:(id)arg1 ;
-(id)travelEligibleEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)predicateForPotentialTravelEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)constraintsCacheQueue;
-(id)_fetchConstraintsForSourceWithObjectID:(id)arg1 ;
-(void)set_cachedConstraints:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationCollectionCacheQueue;
-(NSMutableDictionary *)_cachedNotificationCollections;
-(id)_fetchPersistentNotificationCollectionForSourceWithObjectID:(id)arg1 ;
-(void)set_cachedNotificationCollections:(NSMutableDictionary *)arg1 ;
-(id)initWithAccessToDelegateSources;
-(id)initWithOptions:(int)arg1 path:(id)arg2 changeTrackingClientId:(id)arg3 enablePropertyModificationLogging:(BOOL)arg4 allowDelegateSources:(BOOL)arg5 ;
-(void)_setIsUnitTesting:(BOOL)arg1 ;
-(void)_simulateDaemonCrashForUnitTests;
-(id)changesSinceSequenceNumber:(int)arg1 ;
-(void)_defaultCalendarChangedExternally;
-(void)_defaultAlarmChangedExternally;
-(NSString *)eventStoreIdentifier;
-(id)_deletableSources;
-(id)getSubscribedCalendarsSourceCreateIfNeededWithError:(id*)arg1 ;
-(id)delegateSourcesForSource:(id)arg1 ;
-(void)fetchGrantedDelegatesForSource:(id)arg1 results:(/*^block*/id)arg2 ;
-(void)updateGrantedDelegatePermission:(id)arg1 source:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)localSource;
-(id)ownedSources;
-(id)sourceWithExternalID:(id)arg1 ;
-(BOOL)saveSource:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)removeSource:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)hideCalendarsFromNotificationCenter:(id)arg1 error:(id*)arg2 ;
-(id)_deletableCalendars;
-(id)_eventOccurrenceWithURI:(id)arg1 ;
-(id)allEventsWithUniqueId:(id)arg1 occurrenceDate:(id)arg2 ;
-(BOOL)setInvitationStatus:(unsigned long long)arg1 forEvent:(id)arg2 error:(id*)arg3 ;
-(BOOL)setInvitationStatus:(unsigned long long)arg1 forEvents:(id)arg2 error:(id*)arg3 ;
-(id)importICS:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3 ;
-(id)importICSData:(id)arg1 intoCalendars:(id)arg2 options:(unsigned long long)arg3 ;
-(id)importEventsWithExternalIDs:(id)arg1 fromICSData:(id)arg2 intoCalendars:(id)arg3 options:(unsigned long long)arg4 batchSize:(int)arg5 ;
-(id)ICSDataForCalendarItems:(id)arg1 preventLineFolding:(BOOL)arg2 ;
-(id)defaultLocalCalendar;
-(id)acquireDefaultCalendarForNewEvents;
-(void)setDefaultCalendarForNewEvents:(EKCalendar *)arg1 ;
-(id)acquireDefaultCalendarForNewReminders;
-(void)setDefaultCalendarForNewReminders:(id)arg1 ;
-(BOOL)_removeReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(id)reminderWithExternalURI:(id)arg1 ;
-(id)calendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 ;
-(id)eventsWithExternalIdentifier:(id)arg1 inCalendars:(id)arg2 ;
-(id)remindersWithExternalIdentifier:(id)arg1 inCalendars:(id)arg2 ;
-(id)_remindersMatchingPredicate:(id)arg1 ;
-(int)countOfRemindersMatchingPredicate:(id)arg1 ;
-(id)reminderObjectIDsMatchingPredicate:(id)arg1 ;
-(id)predicateForRemindersInCalendars:(id)arg1 preloadProperties:(id)arg2 ;
-(id)predicateForIncompleteRemindersDueBeforeOrOnExactDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForPreloadedIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 preloadProperties:(id)arg4 ;
-(id)predicateForPreloadedIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 preloadProperties:(id)arg4 maxResults:(unsigned long long)arg5 ;
-(id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForPreloadedCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 preloadProperties:(id)arg4 ;
-(id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForCompletedRemindersWithCalendars:(id)arg1 ;
-(id)predicateForRemindersWithSearchTerm:(id)arg1 ;
-(id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 ;
-(BOOL)fetchProperties:(id)arg1 forReminders:(id)arg2 ;
-(id)eventWithUUID:(id)arg1 ;
-(id)doEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 ;
-(id)calendarWithExternalURI:(id)arg1 ;
-(long long)countOfRemindersWithContactIdentifier:(id)arg1 ;
-(id)remindersWithContactIdentifier:(id)arg1 ;
-(id)scheduledTaskCacheFetchDaysAndTaskCounts;
-(id)scheduledTaskCacheFetchTasksOnDay:(id)arg1 ;
-(void)rebuildOccurrenceCache;
-(EKCalendar *)suggestedEventCalendar;
-(void)insertSuggestedEventCalendar;
-(void)removeSuggestedEventCalendar;
-(EKCalendar *)naturalLanguageSuggestedEventCalendar;
-(int)unacknowledgedEventCount;
-(int)notifiableEventCount;
-(BOOL)saveNotification:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)saveNotificationCollection:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)markResourceChangeAlertedAndSave:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeResourceChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeResourceChangesForCalendarItem:(id)arg1 error:(id*)arg2 ;
-(NSArray *)eventNotifications;
-(unsigned long long)eventNotificationCount;
-(NSArray *)inboxRepliedSectionItems;
-(BOOL)removeInviteReplyNotification:(id)arg1 error:(id*)arg2 ;
-(void)refreshSourcesIfNecessary;
-(void)_setNeedsCommitForRemoteChanges;
-(id)eventObjectIDsMatchingPredicate:(id)arg1 ;
-(id)fetchObjectsMatchingPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)objectsMatchingPredicate:(id)arg1 ;
-(void)cancelFetchRequest:(id)arg1 ;
-(id)alarmWithUUID:(id)arg1 ;
-(void)alarmOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 inCalendars:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)locationBasedAlarmOccurrencesWithCompletion:(/*^block*/id)arg1 ;
-(void)vehicleTriggerAlarmOccurrencesWithCompletion:(/*^block*/id)arg1 ;
-(id)predicateForAssistantEventSearchWithTimeZone:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 notes:(id)arg6 participants:(id)arg7 calendars:(id)arg8 limit:(long long)arg9 ;
-(id)predicateForNotifiableEvents;
-(id)predicateForNotificationCenterVisibleEvents;
-(id)predicateForUnacknowledgedEvents;
-(id)predicateForUnalertedEvents;
-(id)predicateForUpcomingEventsWithLimit:(int)arg1 ;
-(id)predicateForMasterEventsInCalendars:(id)arg1 ;
-(BOOL)hasImmediatelyEligibleTravelEvents;
-(id)predicateForUpNextEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startDateRestrictionThreshold:(double)arg4 ;
-(id)predicateForEventsWithStartDate:(id)arg1 title:(id)arg2 source:(id)arg3 ;
-(id)predicateForEventCreatedFromSuggestionWithOpaqueKey:(id)arg1 ;
-(id)predicateForEventsCreatedFromSuggestionWithExtractionGroupIdentifier:(id)arg1 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 matchingContacts:(id)arg4 ;
-(id)predicateForCalendarItemsOfType:(unsigned long long)arg1 inCalendar:(id)arg2 ;
-(id)predicateForMasterEventsWithExternalTrackingStatusInCalendar:(id)arg1 ;
-(id)predicateForCalendarItemsOfType:(unsigned long long)arg1 withUniqueIdentifier:(id)arg2 inCalendar:(id)arg3 ;
-(id)predicateForCalendarItemsOfType:(unsigned long long)arg1 withUniqueIdentifier:(id)arg2 inSource:(id)arg3 ;
-(id)predicateForCalendarItemsOfType:(unsigned long long)arg1 withExternalID:(id)arg2 inCalendar:(id)arg3 ;
-(id)predicateForCalendarItemsOfType:(unsigned long long)arg1 withExternalID:(id)arg2 inSource:(id)arg3 ;
-(id)predicateForMasterEventsWithStartDate:(id)arg1 title:(id)arg2 inCalendar:(id)arg3 ;
-(id)predicateForMasterEventsWithOccurrencesWithStartDate:(id)arg1 endDate:(id)arg2 inCalendar:(id)arg3 ;
-(id)predicateForMasterEventsWithInvitationsAndOccurrencesAfter:(id)arg1 inCalendar:(id)arg2 ;
-(id)predicateForNonrecurringEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 ;
-(id)predicateForIncompleteRemindersAndRemindersCompletedAfter:(id)arg1 inCalendar:(id)arg2 ;
-(long long)registerForDetailedChangeTracking:(id*)arg1 ;
-(void)unregisterForDetailedChangeTracking:(id*)arg1 ;
-(void)fetchChangedObjectIDsSinceToken:(long long)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)markChangedObjectIDsConsumedUpToToken:(long long)arg1 ;
-(BOOL)markIndividualChangesConsumed:(id)arg1 error:(id*)arg2 ;
-(void)clearSuperfluousChanges;
-(void)purgeChangelog;
-(void)pushSpotlightUpdatesForCalendarItemUUIDs:(id)arg1 ;
-(id)notificationCollectionForSource:(id)arg1 ;
-(void)postSyntheticRouteHypothesis:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(NSMutableSet *)objectsPendingCommit;
-(void)setObjectsPendingCommit:(NSMutableSet *)arg1 ;
-(BOOL)needsCommitForRemoteChanges;
-(void)setNeedsCommitForRemoteChanges:(BOOL)arg1 ;
-(double)lastDatabaseNotificationTimestamp;
-(void)setLastDatabaseNotificationTimestamp:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)registeredQueue;
-(NSObject*<OS_dispatch_queue>)unsavedChangesQueue;
-(NSObject*<OS_dispatch_queue>)dbChangedQueue;
-(void)setRegisteredObjects:(NSMutableDictionary *)arg1 ;
-(BOOL)inboxRepliedSectionHasContent;
-(id<CalCalendarDataContainerProvider>)calendarDataContainerProvider;
@end

