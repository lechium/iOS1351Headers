/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AutoLoop/AutoLoop-Structs.h>
@class AutoLoopStabilizer;

@interface StabilizeParamGenerator : NSObject {

	AutoLoopStabilizer* stabilizer;

}

@property (nonatomic,retain) AutoLoopStabilizer * stabilizer; 
-(id)initWithStabilizer:(id)arg1 ;
-(id)generateStabilizeParams;
-(void)ICGetIdentityHomographies:(void*)arg1 toStabilizeParams:(id)arg2 withImageBounds:(CGSize)arg3 firstFrameIndex:(unsigned long long)arg4 lastFrameIndex:(unsigned long long)arg5 ;
-(void)CopyCoordinateShiftedHomographies:(void*)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3 toStabilizeParams:(id)arg4 withImageBounds:(CGSize)arg5 ;
-(void)setStabilizer:(AutoLoopStabilizer *)arg1 ;
-(AutoLoopStabilizer *)stabilizer;
-(id)generatePassThruForAsset:(id)arg1 trimStart:(SCD_Struct_Au1)arg2 trimLength:(SCD_Struct_Au1)arg3 ;
-(id)generateTrivialPassThruForFrameTimes:(vector<CMTime, std::__1::allocator<CMTime> >*)arg1 totalDuration:(SCD_Struct_Au1)arg2 ;
@end

