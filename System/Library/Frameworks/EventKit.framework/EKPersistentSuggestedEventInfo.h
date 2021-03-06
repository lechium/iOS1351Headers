/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@class EKPersistentEvent, NSString, NSDate;

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (assign,nonatomic) EKPersistentEvent * owner; 
@property (nonatomic,copy) NSString * opaqueKey; 
@property (nonatomic,copy) NSString * uniqueKey; 
@property (assign,nonatomic) unsigned long long changedFields; 
@property (assign,nonatomic) BOOL changesAcknowledged; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,copy) NSString * extractionGroupIdentifier; 
+(id)relations;
+(Class)meltedClass;
+(id)suggestedEventInfoWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOwner:(EKPersistentEvent *)arg1 ;
-(NSDate *)timestamp;
-(EKPersistentEvent *)owner;
-(void)setTimestamp:(NSDate *)arg1 ;
-(int)entityType;
-(NSString *)uniqueKey;
-(NSString *)opaqueKey;
-(NSString *)extractionGroupIdentifier;
-(void)setChangedFields:(unsigned long long)arg1 ;
-(id)semanticIdentifier;
-(void)setOpaqueKey:(NSString *)arg1 ;
-(void)setUniqueKey:(NSString *)arg1 ;
-(void)setChangesAcknowledged:(BOOL)arg1 ;
-(void)setExtractionGroupIdentifier:(NSString *)arg1 ;
-(unsigned long long)changedFields;
-(BOOL)changesAcknowledged;
@end

