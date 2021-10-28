/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long long _versionNumber;
	id _propertyCache;
	void* _reserved1;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) unsigned long long version; 
+(void)initialize;
-(void)dealloc;
-(id)description;
-(unsigned long long)version;
-(NSManagedObjectID *)objectID;
-(const id*)knownKeyValuesPointer;
-(id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3 ;
-(id)valueForPropertyDescription:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2 ;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(id)_propertyCache;
-(void)updateWithValues:(id)arg1 version:(unsigned long long)arg2 ;
-(void)updateFromSQLRow:(id)arg1 ;
@end
