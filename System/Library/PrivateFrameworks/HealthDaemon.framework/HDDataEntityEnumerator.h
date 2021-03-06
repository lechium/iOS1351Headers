/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteQueryDescriptor.h>

@class HDProfile, NSMutableDictionary, NSSet, _HKFilter, NSNumber, NSArray, HDDatabaseTransactionContext, NSString;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor {

	HDProfile* _profile;
	NSMutableDictionary* _encodingOptions;
	BOOL _useLeftJoin;
	BOOL _ignoreEntityClassAdditionalPredicateForEnumeration;
	BOOL _improveJoinOrderingForStartDateIndexSelection;
	NSSet* _objectTypes;
	_HKFilter* _filter;
	NSSet* _restrictedSourceEntities;
	/*^block*/id _authorizationFilter;
	NSNumber* _anchor;
	NSNumber* _deletedObjectsAnchor;
	NSArray* _sortDescriptors;
	HDDatabaseTransactionContext* _databaseTransactionContext;
	NSString* _lastSQL;

}

@property (nonatomic,readonly) NSSet * objectTypes;                                                //@synthesize objectTypes=_objectTypes - In the implementation block
@property (nonatomic,retain) _HKFilter * filter;                                                   //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSSet * restrictedSourceEntities;                                     //@synthesize restrictedSourceEntities=_restrictedSourceEntities - In the implementation block
@property (nonatomic,copy) id authorizationFilter;                                                 //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,retain) NSNumber * anchor;                                                    //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSNumber * deletedObjectsAnchor;                                      //@synthesize deletedObjectsAnchor=_deletedObjectsAnchor - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                                              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy) HDDatabaseTransactionContext * databaseTransactionContext;              //@synthesize databaseTransactionContext=_databaseTransactionContext - In the implementation block
@property (assign,nonatomic) BOOL ignoreEntityClassAdditionalPredicateForEnumeration;              //@synthesize ignoreEntityClassAdditionalPredicateForEnumeration=_ignoreEntityClassAdditionalPredicateForEnumeration - In the implementation block
@property (assign,nonatomic) BOOL improveJoinOrderingForStartDateIndexSelection;                   //@synthesize improveJoinOrderingForStartDateIndexSelection=_improveJoinOrderingForStartDateIndexSelection - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastSQL;                                            //@synthesize lastSQL=_lastSQL - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setFilter:(_HKFilter *)arg1 ;
-(_HKFilter *)filter;
-(NSNumber *)anchor;
-(void)setAnchor:(NSNumber *)arg1 ;
-(void)setDatabaseTransactionContext:(HDDatabaseTransactionContext *)arg1 ;
-(HDDatabaseTransactionContext *)databaseTransactionContext;
-(NSSet *)objectTypes;
-(BOOL)enumerateWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(void)addEncodingOptionsFromDictionary:(id)arg1 ;
-(NSSet *)restrictedSourceEntities;
-(void)setRestrictedSourceEntities:(NSSet *)arg1 ;
-(void)setAuthorizationFilter:(id)arg1 ;
-(void)setEncodingOption:(id)arg1 forKey:(id)arg2 ;
-(void)setImproveJoinOrderingForStartDateIndexSelection:(BOOL)arg1 ;
-(id)_initWithObjectType:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3 ;
-(id)_initWithObjectTypes:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3 ;
-(void)setIgnoreEntityClassAdditionalPredicateForEnumeration:(BOOL)arg1 ;
-(id)_initWithEntityClass:(Class)arg1 profile:(id)arg2 ;
-(id)authorizationFilter;
-(BOOL)enumerateIncludingDeletedObjects:(BOOL)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(void)setDeletedObjectsAnchor:(NSNumber *)arg1 ;
-(BOOL)_enumerateObjectsOnDatabase:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setOrderingTermsOnDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)improveJoinOrderingForStartDateIndexSelection;
-(BOOL)_prepareDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)_joinClauseForProperties:(id)arg1 ;
-(id)encodingOptionForKey:(id)arg1 ;
-(NSNumber *)deletedObjectsAnchor;
-(BOOL)ignoreEntityClassAdditionalPredicateForEnumeration;
-(NSString *)lastSQL;
@end

