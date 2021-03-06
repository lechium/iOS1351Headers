/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface VCMediaStreamStats : NSObject {

	tagHANDLE* _summerHandle;
	double _lastRecordingTime;
	unsigned _maxBitrateKbps;
	unsigned _minBitrateKbps;
	double _maxFramerate;
	double _minFramerate;
	unsigned short _maxFrameDurationMillis;

}

@property (nonatomic,readonly) unsigned bitrateKbps; 
@property (assign,nonatomic) unsigned maxBitrateKbps;                            //@synthesize maxBitrateKbps=_maxBitrateKbps - In the implementation block
@property (assign,nonatomic) unsigned minBitrateKbps;                            //@synthesize minBitrateKbps=_minBitrateKbps - In the implementation block
@property (nonatomic,readonly) double framerate; 
@property (assign,nonatomic) double maxFramerate;                                //@synthesize maxFramerate=_maxFramerate - In the implementation block
@property (assign,nonatomic) double minFramerate;                                //@synthesize minFramerate=_minFramerate - In the implementation block
@property (assign,nonatomic) unsigned short maxFrameDurationMillis;              //@synthesize maxFrameDurationMillis=_maxFrameDurationMillis - In the implementation block
-(id)init;
-(void)dealloc;
-(double)framerate;
-(void)recordDataWithSize:(double)arg1 atTime:(double)arg2 ;
-(void)updateMinMaxSinceTime:(double)arg1 ;
-(unsigned)bitrateKbps;
-(unsigned short)maxFrameDurationMillis;
-(void)setMaxFrameDurationMillis:(unsigned short)arg1 ;
-(unsigned)getBitrateKbpsSinceTime:(double)arg1 ;
-(unsigned)maxBitrateKbps;
-(void)setMaxBitrateKbps:(unsigned)arg1 ;
-(unsigned)minBitrateKbps;
-(void)setMinBitrateKbps:(unsigned)arg1 ;
-(double)getFramerateSinceTime:(double)arg1 ;
-(double)maxFramerate;
-(void)setMaxFramerate:(double)arg1 ;
-(double)minFramerate;
-(void)setMinFramerate:(double)arg1 ;
@end

