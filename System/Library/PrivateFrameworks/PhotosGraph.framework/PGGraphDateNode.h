/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphNode.h>

@class PGGraphSeasonNode;

@interface PGGraphDateNode : PGGraphNode {

	PGGraphSeasonNode* _seasonNode;

}

@property (nonatomic,readonly) PGGraphSeasonNode * seasonNode;              //@synthesize seasonNode=_seasonNode - In the implementation block
@property (readonly) long long day; 
@property (readonly) long long month; 
@property (readonly) long long year; 
+(id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3 ;
-(long long)year;
-(long long)month;
-(long long)day;
-(id)associatedNodesForRemoval;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)localDate;
-(void)enumerateHolidayNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphSeasonNode *)seasonNode;
-(id)sameWeekDateNodes;
-(id)lastWeekDateNodes;
@end
