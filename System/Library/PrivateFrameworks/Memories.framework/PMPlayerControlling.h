/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PMPlayerControlling <NSObject>
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (nonatomic,readonly) int currentFrameTime; 
@required
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1;
-(int)currentFrameTime;

@end

