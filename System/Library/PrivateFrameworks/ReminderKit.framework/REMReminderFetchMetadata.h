/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/REMFetchMetadata.h>

@class NSDictionary, NSArray;

@interface REMReminderFetchMetadata : REMFetchMetadata {

	NSDictionary* _subtaskCounts;
	NSArray* _dueDateCounts;

}

@property (nonatomic,readonly) NSDictionary * subtaskCounts;              //@synthesize subtaskCounts=_subtaskCounts - In the implementation block
@property (nonatomic,readonly) NSArray * dueDateCounts;                   //@synthesize dueDateCounts=_dueDateCounts - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)subtaskCounts;
-(NSArray *)dueDateCounts;
-(id)initWithSubtaskCounts:(id)arg1 ;
-(id)initWithDueDateCounts:(id)arg1 ;
-(id)initWithSubtaskCounts:(id)arg1 dueDateCounts:(id)arg2 ;
@end

