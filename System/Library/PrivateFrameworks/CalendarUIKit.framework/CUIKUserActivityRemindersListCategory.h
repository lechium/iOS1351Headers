/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;
	BOOL _predictable;

}
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)updateActivity:(id)arg1 ;
-(id)initWithRemindersList:(id)arg1 forceLocal:(BOOL)arg2 ;
-(BOOL)_isMatchForRemindersList:(id)arg1 ;
-(id)initWithRemindersList:(id)arg1 ;
-(id)remindersListFromStore:(id)arg1 ;
@end
