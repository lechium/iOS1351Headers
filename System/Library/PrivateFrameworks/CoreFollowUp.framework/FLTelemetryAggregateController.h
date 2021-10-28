/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FLTelemetryController.h>

@class NSString;

@interface FLTelemetryAggregateController : NSObject <FLTelemetryController>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureItemRemoval:(id)arg1 ;
-(void)captureItemAddition:(id)arg1 ;
-(void)captureCurrentState:(id)arg1 ;
-(void)captureActionForItemIdentifier:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3 ;
-(void)captureActionForItem:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3 ;
-(void)captureItemView:(id)arg1 ;
-(void)captureGroupAddition:(id)arg1 ;
-(void)captureGroupRemoval:(id)arg1 ;
-(void)captureClientAddition:(id)arg1 ;
-(void)captureClientRemoval:(id)arg1 ;
@end
