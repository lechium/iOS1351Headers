/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CalDAVCalendarPropertyRefreshDelegate <CoreDAVTaskGroupDelegate>
@optional
-(BOOL)calendarRefreshShouldRetryMkCalendarForPrincipal:(id)arg1 calendar:(id)arg2 error:(id)arg3;
-(void)calendarRefreshFoundUpdatedContainerWithIgnoredEntityType:(id)arg1;
-(void)calendarRefreshFoundUpdatedSpecialContainer:(id)arg1;
-(void)calendarRefreshFoundDeletedContainerURL:(id)arg1;

@required
-(void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6;

@end
