/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKCalendarResourceChangeNotification.h>

@class SGEvent, NSString;

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification {

	SGEvent* _suggestedEvent;
	NSString* _originAppName;

}

@property (nonatomic,readonly) NSString * originAppName; 
@property (nonatomic,readonly) SGEvent * suggestedEvent; 
+(id)_queue;
-(id)allDescriptionStringsWithOptions:(unsigned long long)arg1 ;
-(BOOL)supportsDisplay;
-(Class)_SGSuggestionsServiceClass;
-(void)updateSuggestedEventWithEventStore:(id)arg1 ;
-(SGEvent *)suggestedEvent;
-(NSString *)originAppName;
@end

