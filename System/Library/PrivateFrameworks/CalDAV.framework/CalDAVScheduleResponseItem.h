/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {

	NSMutableSet* _responses;
	NSMutableSet* _successfulICS;
	NSMutableSet* _failedResponseItems;

}

@property (nonatomic,retain) NSMutableSet * responses;                        //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSMutableSet * successfulICS;                    //@synthesize successfulICS=_successfulICS - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedResponseItems;              //@synthesize failedResponseItems=_failedResponseItems - In the implementation block
-(id)description;
-(NSMutableSet *)responses;
-(void)setResponses:(NSMutableSet *)arg1 ;
-(id)copyParseRules;
-(void)addNewTopLevelItem:(id)arg1 ;
-(NSMutableSet *)successfulICS;
-(void)setSuccessfulICS:(NSMutableSet *)arg1 ;
-(NSMutableSet *)failedResponseItems;
-(void)setFailedResponseItems:(NSMutableSet *)arg1 ;
@end
