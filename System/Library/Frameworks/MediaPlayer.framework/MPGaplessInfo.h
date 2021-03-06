/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MPGaplessInfo : NSObject {

	unsigned _encodingDelayInFrames;
	unsigned _encodingDrainInFrames;
	unsigned _heuristicInfo;
	unsigned long long _durationInFrames;
	unsigned long long _lastPacketsResync;

}

@property (assign,nonatomic) unsigned long long durationInFrames;               //@synthesize durationInFrames=_durationInFrames - In the implementation block
@property (assign,nonatomic) unsigned encodingDelayInFrames;                    //@synthesize encodingDelayInFrames=_encodingDelayInFrames - In the implementation block
@property (assign,nonatomic) unsigned encodingDrainInFrames;                    //@synthesize encodingDrainInFrames=_encodingDrainInFrames - In the implementation block
@property (assign,nonatomic) unsigned heuristicInfo;                            //@synthesize heuristicInfo=_heuristicInfo - In the implementation block
@property (assign,nonatomic) unsigned long long lastPacketsResync;              //@synthesize lastPacketsResync=_lastPacketsResync - In the implementation block
-(unsigned long long)durationInFrames;
-(void)setDurationInFrames:(unsigned long long)arg1 ;
-(unsigned)encodingDelayInFrames;
-(void)setEncodingDelayInFrames:(unsigned)arg1 ;
-(unsigned)encodingDrainInFrames;
-(void)setEncodingDrainInFrames:(unsigned)arg1 ;
-(unsigned)heuristicInfo;
-(void)setHeuristicInfo:(unsigned)arg1 ;
-(unsigned long long)lastPacketsResync;
-(void)setLastPacketsResync:(unsigned long long)arg1 ;
@end

