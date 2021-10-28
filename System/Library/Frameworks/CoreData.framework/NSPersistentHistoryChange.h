/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSManagedObjectID, NSDictionary, NSPersistentHistoryTransaction, NSSet;

@interface NSPersistentHistoryChange : NSObject <NSCopying>

@property (readonly) long long changeID; 
@property (copy,readonly) NSManagedObjectID * changedObjectID; 
@property (readonly) long long changeType; 
@property (copy,readonly) NSDictionary * tombstone; 
@property (readonly) NSPersistentHistoryTransaction * transaction; 
@property (copy,readonly) NSSet * updatedProperties; 
+(BOOL)supportsSecureCoding;
+(id)fetchRequest;
+(id)entityDescription;
+(id)entityDescriptionWithContext:(id)arg1 ;
+(id)shortStringForChangeType:(long long)arg1 ;
+(id)stringForChangeType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeType;
-(NSManagedObjectID *)changedObjectID;
-(NSDictionary *)tombstone;
-(NSPersistentHistoryTransaction *)transaction;
-(long long)changeID;
-(NSSet *)updatedProperties;
@end
