/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SpeedRanges, VideoMovie;


@protocol MiroClip_Shim <NSObject>
@property (assign,nonatomic) float speed; 
@property (nonatomic,readonly) SpeedRanges * speedRanges; 
@property (nonatomic,readonly) float frameRate; 
@property (nonatomic,readonly) VideoMovie * videoMovie; 
@required
-(id)copy;
-(float)speed;
-(void)setSpeed:(float)arg1;
-(float)frameRate;
-(SpeedRanges *)speedRanges;
-(VideoMovie *)videoMovie;

@end

