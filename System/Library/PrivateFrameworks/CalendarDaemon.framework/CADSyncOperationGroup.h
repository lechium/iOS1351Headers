/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADSyncInterface.h>

@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADDatabaseGetDeletableCalendars:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetDeletableSources:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(/*^block*/id)arg1 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
@end

