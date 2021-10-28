/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSArray;

@interface EKInviteeAlternativeTime : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _conflictedParticipants;

}

@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * conflictedParticipants;              //@synthesize conflictedParticipants=_conflictedParticipants - In the implementation block
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSArray *)conflictedParticipants;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 conflictedParticipants:(id)arg3 ;
-(void)setConflictedParticipants:(NSArray *)arg1 ;
@end
