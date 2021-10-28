/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@interface WFGetDistanceAction : WFAction
+(unsigned long long)transportTypeFromString:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)getDirectDistanceFromOrigin:(id)arg1 toDestination:(id)arg2 ;
-(void)getDistanceFromOrigin:(id)arg1 toDestination:(id)arg2 transportType:(unsigned long long)arg3 ;
-(void)finishRunningWithDistance:(double)arg1 ;
-(BOOL)originIsCurrentLocation;
-(BOOL)destinationIsCurrentLocation;
-(BOOL)locationParameterIsCurrentLocation:(id)arg1 ;
-(id)noLocationError;
@end
