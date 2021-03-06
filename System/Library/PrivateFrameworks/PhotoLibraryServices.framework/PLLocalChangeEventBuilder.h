/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface PLLocalChangeEventBuilder : NSObject {

	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _updatedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSMutableDictionary* _attributesByOID;
	NSMutableDictionary* _relationshipsByOID;
	NSMutableArray* _deletedAssetCloudGUIDs;
	NSMutableArray* _deletedAlbumCloudGUIDs;
	NSMutableArray* _deletedMemoryCloudGUIDs;
	NSMutableArray* _deletedPersonCloudGUIDs;
	NSMutableArray* _deletedFaceCropCloudGUIDs;
	NSMutableArray* _deletedOwnedMomentShareCloudGUIDs;
	NSMutableArray* _deletedSubscribedMomentShareCloudGUIDs;
	NSMutableArray* _deletedSuggestionCloudGUIDs;
	NSMutableArray* _deletedInternalResourceUUIDToResourceTypeMappings;
	BOOL _coalescedEvent;
	BOOL _syncChange;
	/*^block*/id _transactionFilter;
	/*^block*/id _updatedPropertyFilter;

}

@property (assign,getter=isCoalescedEvent,nonatomic) BOOL coalescedEvent;              //@synthesize coalescedEvent=_coalescedEvent - In the implementation block
@property (assign,getter=isSyncChange,nonatomic) BOOL syncChange;                      //@synthesize syncChange=_syncChange - In the implementation block
@property (nonatomic,copy) id transactionFilter;                                       //@synthesize transactionFilter=_transactionFilter - In the implementation block
@property (nonatomic,copy) id updatedPropertyFilter;                                   //@synthesize updatedPropertyFilter=_updatedPropertyFilter - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(id)localEventWithBuilderBlock:(/*^block*/id)arg1 ;
+(id)localEventFromTransaction:(id)arg1 ;
-(id)init;
-(BOOL)isEmpty;
-(void)recordInsertedObjectID:(id)arg1 ;
-(void)recordUpdatedObjectID:(id)arg1 ;
-(void)recordDeletedObjectID:(id)arg1 ;
-(void)recordDeletedCloudGUID:(id)arg1 forType:(long long)arg2 ;
-(void)recordUpdatedAttributes:(unsigned long long)arg1 andRelationships:(unsigned long long)arg2 forObjectID:(id)arg3 ;
-(void)recordAllTransactionsFromIterator:(id)arg1 ;
-(void)recordTransaction:(id)arg1 ;
-(BOOL)_shouldRecordTransaction:(id)arg1 ;
-(void)recordChange:(id)arg1 ;
-(void)_recordInsertChange:(id)arg1 ;
-(void)_recordUpdateChange:(id)arg1 ;
-(id)_filteredUpdatedPropertiesFromChange:(id)arg1 ;
-(void)_recordDeleteChange:(id)arg1 ;
-(void)_recordCloudDeleteForChange:(id)arg1 ;
-(Class)_cloudDeletableEntityFromObjectID:(id)arg1 ;
-(BOOL)_isCloudStateDeletedOnTombstone:(id)arg1 ;
-(/*^block*/id)recordChangedObjectIDBlockForChangeKey:(id)arg1 ;
-(/*^block*/id)recordDeletedCloudGUIDBlockForChangeKey:(id)arg1 ;
-(id)buildLocalEvent;
-(BOOL)isCoalescedEvent;
-(void)setCoalescedEvent:(BOOL)arg1 ;
-(BOOL)isSyncChange;
-(void)setSyncChange:(BOOL)arg1 ;
-(id)transactionFilter;
-(void)setTransactionFilter:(id)arg1 ;
-(id)updatedPropertyFilter;
-(void)setUpdatedPropertyFilter:(id)arg1 ;
@end

