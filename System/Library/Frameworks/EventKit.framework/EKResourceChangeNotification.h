/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKNotification.h>

@class NSDate, NSSet;

@interface EKResourceChangeNotification : EKNotification

@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,copy) NSSet * resourceChanges; 
+(Class)frozenClass;
+(id)knownRelationshipMultiValueKeys;
-(NSDate *)lastModifiedDate;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSSet *)resourceChanges;
-(void)setResourceChanges:(NSSet *)arg1 ;
-(void)addResourceChange:(id)arg1 ;
-(void)removeResourceChange:(id)arg1 ;
@end

