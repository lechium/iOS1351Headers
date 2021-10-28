/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSArray;

@interface CLSNowPlayingStreamSession : NSObject {

	NSDate* _localEndDate;
	NSDate* _localStartDate;
	NSArray* _events;

}

@property (nonatomic,copy) NSArray * events;                         //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                //@synthesize localEndDate=_localEndDate - In the implementation block
+(id)playbackStreamSessionDateSortDescriptors;
-(id)description;
-(id)debugDescription;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(id)initWithEvents:(id)arg1 ;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)initWithDataCluster:(id)arg1 ;
@end
