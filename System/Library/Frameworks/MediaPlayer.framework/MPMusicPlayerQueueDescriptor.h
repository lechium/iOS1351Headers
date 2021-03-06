/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding> {

	long long _shuffleType;
	long long _repeatType;
	NSDictionary* _startTimes;
	NSDictionary* _endTimes;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (assign,nonatomic) long long shuffleType;                    //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) long long repeatType;                     //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) NSDictionary * startTimes;              //@synthesize startTimes=_startTimes - In the implementation block
@property (nonatomic,readonly) NSDictionary * endTimes;                //@synthesize endTimes=_endTimes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(long long)shuffleType;
-(long long)repeatType;
-(void)setShuffleType:(long long)arg1 ;
-(void)setRepeatType:(long long)arg1 ;
-(void)_setStartTime:(double)arg1 forIdentifiers:(id)arg2 ;
-(void)_setEndTime:(double)arg1 forIdentifiers:(id)arg2 ;
-(NSDictionary *)startTimes;
-(NSDictionary *)endTimes;
@end

