/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_NSScalarObjectID.h>

@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)_storeInfo1;
+(void)_setStoreInfo1:(id)arg1 ;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
+(void)_storeDeallocated;
-(unsigned long long)retainCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)initWithObject:(id)arg1 ;
-(id)entityName;
-(id)entity;
-(id)initWithPK64:(long long)arg1 ;
-(id)_storeInfo1;
-(long long)_referenceData64;
-(id)persistentStore;
-(id)_storeIdentifier;
-(BOOL)isTemporaryID;
-(id)_retainedURIString;
-(BOOL)_isPersistentStoreAlive;
@end
