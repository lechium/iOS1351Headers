/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REMConflictResolving.h>
#import <libobjc.A.dylib/REMSaveRequestTrackedValue.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>

@class REMSaveRequest, REMAccountStorage, REMChangedKeysObserver, REMObjectID, REMAccountCapabilities, REMCRMergeableOrderedSet, NSSet, NSString, REMAccountGroupContextChangeItem, REMResolutionTokenMap;

@interface REMAccountChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding> {

	REMSaveRequest* _saveRequest;
	REMAccountStorage* _storage;
	REMChangedKeysObserver* _changedKeysObserver;

}

@property (nonatomic,retain) REMChangedKeysObserver * changedKeysObserver;                       //@synthesize changedKeysObserver=_changedKeysObserver - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,retain) REMObjectID * objectID; 
@property (nonatomic,readonly) REMAccountCapabilities * capabilities; 
@property (nonatomic,readonly) REMCRMergeableOrderedSet * listIDsMergeableOrdering; 
@property (assign,nonatomic) BOOL markedForRemoval; 
@property (nonatomic,retain) NSSet * listIDsToUndelete; 
@property (assign,nonatomic) BOOL listsDADisplayOrderChanged; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) REMAccountStorage * storage;                                 //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) BOOL inactive; 
@property (assign,nonatomic) BOOL didChooseToMigrate; 
@property (assign,nonatomic) BOOL didChooseToMigrateLocally; 
@property (assign,nonatomic) BOOL didFinishMigration; 
@property (nonatomic,retain) NSString * daConstraintsDescriptionPath; 
@property (assign,nonatomic) BOOL daAllowsCalendarAddDeleteModify; 
@property (assign,nonatomic) BOOL daSupportsSharedCalendars; 
@property (assign,nonatomic) BOOL daWasMigrated; 
@property (nonatomic,readonly) REMSaveRequest * saveRequest;                                     //@synthesize saveRequest=_saveRequest - In the implementation block
@property (nonatomic,readonly) REMAccountGroupContextChangeItem * groupContext; 
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
+(void)initialize;
+(id)_emptyListIDsOrderingWithAccountID:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(REMAccountStorage *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(REMAccountCapabilities *)capabilities;
-(REMSaveRequest *)saveRequest;
-(id)changedKeys;
-(REMAccountGroupContextChangeItem *)groupContext;
-(REMChangedKeysObserver *)changedKeysObserver;
-(id)resolutionTokenKeyForChangedKey:(id)arg1 ;
-(id)shallowCopyWithSaveRequest:(id)arg1 ;
-(void)setChangedKeysObserver:(REMChangedKeysObserver *)arg1 ;
-(id)initWithSaveRequest:(id)arg1 storage:(id)arg2 capabilities:(id)arg3 changedKeysObserver:(id)arg4 ;
-(id)initWithSaveRequest:(id)arg1 storage:(id)arg2 capabilities:(id)arg3 observeInitialValues:(BOOL)arg4 ;
-(void)insertListChangeItem:(id)arg1 adjacentToListChangeItem:(id)arg2 isAfter:(BOOL)arg3 withParentListChangeItem:(id)arg4 ;
-(void)_lowLevelApplyUndoToOrdering:(id)arg1 ;
-(void)_editListIDsOrderingUsingBlock:(/*^block*/id)arg1 ;
-(void)_reassignListChangeItem:(id)arg1 withParentListChangeItem:(id)arg2 ;
-(void)_lowLevelAddListChangeItemToOrdering:(id)arg1 atIndexOfSibling:(id)arg2 isAfter:(BOOL)arg3 withParentListChangeItem:(id)arg4 ;
-(id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3 insertIntoSaveRequest:(id)arg4 ;
-(void)addListChangeItem:(id)arg1 ;
-(void)insertListChangeItem:(id)arg1 beforeListChangeItem:(id)arg2 ;
-(void)insertListChangeItem:(id)arg1 afterListChangeItem:(id)arg2 ;
-(void)undeleteListWithID:(id)arg1 usingUndo:(id)arg2 ;
-(void)removeFromStore;
-(id)listChangeItemsByOrderingListChangeItems:(id)arg1 ;
-(void)lowLevelAddListIDToOrdering:(id)arg1 withParentListChangeItem:(id)arg2 ;
-(id)lowLevelRemoveListIDFromOrdering:(id)arg1 ;
@end

