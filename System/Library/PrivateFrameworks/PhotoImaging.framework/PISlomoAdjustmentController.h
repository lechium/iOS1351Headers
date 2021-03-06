/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@interface PISlomoAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) SCD_Struct_PI8 startTime; 
@property (assign,nonatomic) SCD_Struct_PI8 endTime; 
@property (assign,nonatomic) double rate; 
+(id)rateKey;
+(id)endScaleKey;
+(id)endKey;
+(id)startScaleKey;
+(id)startKey;
-(SCD_Struct_PI8)startTime;
-(SCD_Struct_PI8)endTime;
-(void)setEndTime:(SCD_Struct_PI8)arg1 ;
-(void)setStartTime:(SCD_Struct_PI8)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
@end

