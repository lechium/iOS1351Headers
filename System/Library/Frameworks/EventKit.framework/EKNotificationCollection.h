/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKObject.h>

@class EKSource, NSSet;

@interface EKNotificationCollection : EKObject

@property (nonatomic,readonly) EKSource * source; 
@property (nonatomic,copy) NSSet * notifications; 
+(Class)frozenClass;
+(id)knownRelationshipMultiValueKeys;
+(BOOL)isWeakRelationship;
-(id)initWithOptions:(id)arg1 ;
-(unsigned)_flags;
-(EKSource *)source;
-(BOOL)validate:(id*)arg1 ;
-(NSSet *)notifications;
-(void)setNotifications:(NSSet *)arg1 ;
-(void)_setSource:(id)arg1 ;
-(void)addNotification:(id)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(void)_setExternalID:(id)arg1 ;
-(void)_setExternalIDTag:(id)arg1 ;
-(void)_setNotificationsCollectionFlag;
-(BOOL)_hasNotificationsCollectionFlag;
-(void)_setFlags:(unsigned)arg1 ;
-(void)removeNotification:(id)arg1 ;
@end
