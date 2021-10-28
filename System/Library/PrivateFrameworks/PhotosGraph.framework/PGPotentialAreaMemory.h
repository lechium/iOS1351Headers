/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphNode, NSArray, NSDate, NSString;

@interface PGPotentialAreaMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphNode* _areaNode;
	long long _year;
	NSArray* _assetsInArea;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) PGGraphNode * areaNode;              //@synthesize areaNode=_areaNode - In the implementation block
@property (readonly) long long year;                      //@synthesize year=_year - In the implementation block
@property (readonly) NSString * area; 
@property (retain) NSArray * assetsInArea;                //@synthesize assetsInArea=_assetsInArea - In the implementation block
@property (retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
-(long long)year;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)area;
-(void)addMomentNode:(id)arg1 ;
-(id)initWithAreaNode:(id)arg1 year:(long long)arg2 ;
-(PGGraphNode *)areaNode;
-(NSArray *)assetsInArea;
-(void)setAssetsInArea:(NSArray *)arg1 ;
@end
