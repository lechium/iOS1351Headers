/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate;


@protocol MSPHistoryEntry <MSPImmutableObject>
@property (nonatomic,copy,readonly) NSDate * usageDate; 
@property (nonatomic,readonly) BOOL tracksRAPReportingOnly; 
@required
-(BOOL)isFailed;
-(NSDate *)usageDate;
-(void)ifSearch:(/*^block*/id)arg1 ifRoute:(/*^block*/id)arg2 ifPlaceDisplay:(/*^block*/id)arg3 ifTransitLineItem:(/*^block*/id)arg4;
-(BOOL)isUserVisibleDuplicateOfEntry:(id)arg1;
-(BOOL)tracksRAPReportingOnly;

@end

