/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSManagedObject, NSDictionary;

@interface NSConstraintConflict : NSObject <NSSecureCoding> {

	NSArray* _constraint;
	NSManagedObject* _databaseObject;
	NSDictionary* _databaseSnapshot;
	NSDictionary* _conflictedValues;
	NSArray* _conflictingObjects;
	NSArray* _conflictingSnapshots;

}

@property (copy,readonly) NSArray * constraint;                            //@synthesize constraint=_constraint - In the implementation block
@property (copy,readonly) NSDictionary * constraintValues;                 //@synthesize conflictedValues=_conflictedValues - In the implementation block
@property (retain,readonly) NSManagedObject * databaseObject;              //@synthesize databaseObject=_databaseObject - In the implementation block
@property (retain,readonly) NSDictionary * databaseSnapshot;               //@synthesize databaseSnapshot=_databaseSnapshot - In the implementation block
@property (copy,readonly) NSArray * conflictingObjects;                    //@synthesize conflictingObjects=_conflictingObjects - In the implementation block
@property (copy,readonly) NSArray * conflictingSnapshots;                  //@synthesize conflictingSnapshots=_conflictingSnapshots - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_doCleanupForXPCStore:(id)arg1 context:(id)arg2 ;
-(NSArray *)conflictingObjects;
-(NSArray *)constraint;
-(NSManagedObject *)databaseObject;
-(id)initWithConstraint:(id)arg1 databaseObject:(id)arg2 databaseSnapshot:(id)arg3 conflictingObjects:(id)arg4 conflictingSnapshots:(id)arg5 ;
-(BOOL)_isDBConflict;
-(NSDictionary *)constraintValues;
-(NSArray *)conflictingSnapshots;
-(NSDictionary *)databaseSnapshot;
@end

