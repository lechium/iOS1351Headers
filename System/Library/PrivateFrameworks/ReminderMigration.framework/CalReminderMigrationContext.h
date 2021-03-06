/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CalReminderKitDatabaseMigrationContext, CalReminderKitProvider;
@class REMStore, REMSaveRequest, REMAccountChangeItem, REMObjectID, NSMutableArray, NSDictionary, REMAccount, NSMutableDictionary, NSString;

@interface CalReminderMigrationContext : NSObject {

	id<CalReminderKitDatabaseMigrationContext> _remDatabaseMigrationContext;
	REMStore* _reminderStore;
	REMSaveRequest* _saveRequest;
	REMAccountChangeItem* _localAccountChangeItem;
	REMObjectID* _defaultListMigratedIdentifier;
	NSMutableArray* _orderedListChangeItemsStack;
	BOOL _accountsLoaded;
	NSDictionary* _accountsForAccountIdentifiers;
	REMAccount* _localAccount;
	NSMutableDictionary* _accountChangeItemsForAccountIdentifiers;
	BOOL _recordedAnyFatalFailures;
	id<CalReminderKitProvider> _reminderKitProvider;
	NSString* _defaultListOriginalIdentifier;

}

@property (nonatomic,readonly) id<CalReminderKitProvider> reminderKitProvider;              //@synthesize reminderKitProvider=_reminderKitProvider - In the implementation block
@property (nonatomic,readonly) BOOL shouldPerformMigration; 
@property (nonatomic,readonly) BOOL shouldDeleteMigratedData; 
@property (nonatomic,readonly) REMSaveRequest * saveRequest; 
@property (nonatomic,readonly) REMAccountChangeItem * localAccountChangeItem; 
@property (nonatomic,retain) NSString * defaultListOriginalIdentifier;                      //@synthesize defaultListOriginalIdentifier=_defaultListOriginalIdentifier - In the implementation block
@property (nonatomic,readonly) REMObjectID * defaultListMigratedIdentifier;                 //@synthesize defaultListMigratedIdentifier=_defaultListMigratedIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentOrderedListItemsContextEmpty; 
-(BOOL)_setup;
-(REMSaveRequest *)saveRequest;
-(BOOL)shouldDeleteMigratedData;
-(BOOL)ensureAccountsExist:(id)arg1 ;
-(id)reminderStore;
-(void)_loadAccountsIfNeeded;
-(BOOL)shouldPerformMigration;
-(id<CalReminderKitProvider>)reminderKitProvider;
-(BOOL)finishMigrationWithSave:(BOOL)arg1 ;
-(void)_willBeginMigration;
-(void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 ;
-(id)accountsForAccountIdentifiers;
-(void)_verifyAccountHasNoLists:(id)arg1 withAccountIdentifier:(id)arg2 ;
-(void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedTo:(id)arg4 ;
-(NSString *)defaultListOriginalIdentifier;
-(void)_sortAddedReminderListsInAccountChangeItem:(id)arg1 ;
-(id)_sortedAddedListChangeItems;
-(void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedTo:(id)arg4 isFatal:(BOOL)arg5 ;
-(REMObjectID *)defaultListMigratedIdentifier;
-(void)_didEndMigrationWithSuccess:(BOOL)arg1 ;
-(BOOL)_tryBeginMigration;
-(id)_initWithReminderKitProvider:(id)arg1 ;
-(REMAccountChangeItem *)localAccountChangeItem;
-(id)existingAccountChangeItemWithAccountIdentifier:(id)arg1 ;
-(void)recordAddedListChangeItem:(id)arg1 withOriginalIdentifier:(id)arg2 order:(id)arg3 ;
-(void)pushOrderedListItemsContext;
-(void)popOrderedListItemsContextAndSortListsInAccountChangeItem:(id)arg1 ;
-(BOOL)isCurrentOrderedListItemsContextEmpty;
-(void)setDefaultListOriginalIdentifier:(NSString *)arg1 ;
@end

