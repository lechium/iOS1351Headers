/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDeferringPredicate.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDisplay, BKSHIDEventDeferringToken;

@interface BKSMutableHIDEventDeferringPredicate : BKSHIDEventDeferringPredicate

@property (nonatomic,retain) BKSHIDEventDeferringEnvironment * environment; 
@property (nonatomic,copy) BKSHIDEventDisplay * display; 
@property (nonatomic,copy) BKSHIDEventDeferringToken * token; 
+(id)new;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(void)setToken:(BKSHIDEventDeferringToken *)arg1 ;
-(void)setDisplay:(BKSHIDEventDisplay *)arg1 ;
@end
