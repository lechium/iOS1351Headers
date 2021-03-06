/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <libobjc.A.dylib/NSPredicatedStoreRequest.h>

@class NSPredicate, NSDictionary, NSString, NSEntityDescription;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {

	id _entity;
	NSPredicate* _predicate;
	struct {
		unsigned includesSubentities : 1;
		unsigned resultType : 2;
		unsigned entityIsName : 1;
		unsigned secureOperation : 1;
		unsigned _RESERVED : 27;
	}  _flags;
	NSDictionary* _columnsToUpdate;

}

@property (assign,setter=_setSecureOperation:,getter=_secureOperation,nonatomic) BOOL shouldPerformSecureOperation; 
@property (copy,readonly) NSString * entityName; 
@property (readonly) NSEntityDescription * entity;                                                                               //@synthesize entity=_entity - In the implementation block
@property (retain) NSPredicate * predicate;                                                                                      //@synthesize predicate=_predicate - In the implementation block
@property (assign) BOOL includesSubentities; 
@property (assign) unsigned long long resultType; 
@property (copy) NSDictionary * propertiesToUpdate;                                                                              //@synthesize columnsToUpdate=_columnsToUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)batchUpdateRequestWithEntityName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(unsigned long long)resultType;
-(id)initWithEntityName:(id)arg1 ;
-(void)setResultType:(unsigned long long)arg1 ;
-(NSString *)entityName;
-(NSEntityDescription *)entity;
-(void)setIncludesSubentities:(BOOL)arg1 ;
-(unsigned long long)requestType;
-(id)encodeForXPC;
-(BOOL)_secureOperation;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(NSDictionary *)propertiesToUpdate;
-(BOOL)includesSubentities;
-(void)setPropertiesToUpdate:(NSDictionary *)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(id)initWithEntity:(id)arg1 ;
-(void)setShouldPerformSecureOperation:(BOOL)arg1 ;
-(BOOL)shouldPerformSecureOperation;
-(id)_newValidatedPropertiesToUpdate:(id)arg1 error:(id*)arg2 ;
-(void)_setValidatedPropertiesToUpdate:(id)arg1 ;
@end

