/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayer.h>

@class ISDisplayLink;

@interface ISLiveWallpaperPlayer : ISBasePlayer {

	SCD_Struct_IS1 _videoDuration;
	double _smoothedVelocity;
	BOOL _touching;
	BOOL __active;
	BOOL __seeking;
	float __playRate;
	double _force;
	ISDisplayLink* __displayLink;

}

@property (assign,setter=_setActive:,nonatomic) BOOL _active;                                   //@synthesize _active=__active - In the implementation block
@property (assign,setter=_setDisplayLink:,nonatomic) ISDisplayLink * _displayLink;              //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,setter=_setSeeking:,getter=_isSeeking,nonatomic) BOOL _seeking;               //@synthesize _seeking=__seeking - In the implementation block
@property (assign,setter=_setPlayRate:,nonatomic) float _playRate;                              //@synthesize _playRate=__playRate - In the implementation block
@property (assign,getter=isTouching,nonatomic) BOOL touching;                                   //@synthesize touching=_touching - In the implementation block
@property (assign,nonatomic) double force;                                                      //@synthesize force=_force - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(BOOL)_active;
-(void)_update;
-(ISDisplayLink *)_displayLink;
-(BOOL)isPlaying;
-(double)force;
-(void)setForce:(double)arg1 ;
-(BOOL)isTouching;
-(void)statusDidChange;
-(void)setPlayerItem:(id)arg1 ;
-(void)_setActive:(BOOL)arg1 ;
-(void)didPerformChanges;
-(BOOL)_isSeeking;
-(void)_setDisplayLink:(id)arg1 ;
-(float)_playRate;
-(void)setTouching:(BOOL)arg1 ;
-(void)_setPlayRate:(float)arg1 ;
-(void)_updatePlayer;
-(void)_seekVideoToBeginning;
-(void)_seekVideoToEnd;
-(void)_handleDidFinishSeeking:(BOOL)arg1 ;
-(void)_setSeeking:(BOOL)arg1 ;
@end

