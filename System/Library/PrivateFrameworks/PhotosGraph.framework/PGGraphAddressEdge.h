/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphEdge.h>

@class NSDate, CLLocation;

@interface PGGraphAddressEdge : PGGraphEdge

@property (nonatomic,readonly) double timestampUTCStart; 
@property (nonatomic,readonly) double timestampUTCEnd; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) CLLocationCoordinate2D photoCoordinate; 
@property (nonatomic,readonly) CLLocation * photoLocation; 
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(double)timestampUTCStart;
-(double)timestampUTCEnd;
-(CLLocationCoordinate2D)photoCoordinate;
-(CLLocation *)photoLocation;
@end

