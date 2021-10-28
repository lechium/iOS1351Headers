/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveform.h>

@class NSMutableArray;

@interface RCMutableWaveform : RCWaveform

@property (readonly) NSMutableArray * segments; 
-(id)classForCoder;
-(void)removeAllSegments;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(void)addSegment:(id)arg1 ;
-(void)addSegments:(id)arg1 ;
-(BOOL)clipToTimeRange:(SCD_Struct_RC3)arg1 ;
-(void)removeSegment:(id)arg1 ;
@end
