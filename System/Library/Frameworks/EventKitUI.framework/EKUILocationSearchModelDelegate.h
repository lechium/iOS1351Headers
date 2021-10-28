/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EKUILocationSearchModelDelegate
@required
-(void)currentLocationUpdated:(id)arg1;
-(void)mapSearchUpdated:(id)arg1;
-(void)contactsSearchUpdated:(id)arg1;
-(id)calendarItemForSearchModel:(id)arg1;
-(BOOL)shouldIncludeConferenceRoom:(id)arg1;
-(void)recentsSearchUpdated:(id)arg1;
-(void)frequentsSearchUpdated:(id)arg1;
-(void)eventsSearchUpdated:(id)arg1;
-(void)conferenceRoomSearchUpdated:(id)arg1;
-(void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3;

@end
