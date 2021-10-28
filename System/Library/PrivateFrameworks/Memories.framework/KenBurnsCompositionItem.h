/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@interface KenBurnsCompositionItem : MovieCompositionItem
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM5)arg1 paddedFromTime:(SCD_Struct_PM5)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_PM6)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_PM6)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_PM5)arg1 ;
-(id)initWithClip:(id)arg1 ;
@end
