/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber;

@interface MREResult : NSObject {

	unsigned long long _trackID;
	double _offset;
	NSNumber* _timeSkew;
	NSNumber* _freqSkew;

}

@property (nonatomic,readonly) unsigned long long trackID;              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) double offset;                           //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * timeSkew;              //@synthesize timeSkew=_timeSkew - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * freqSkew;              //@synthesize freqSkew=_freqSkew - In the implementation block
-(void)dealloc;
-(unsigned long long)trackID;
-(double)offset;
-(NSNumber *)timeSkew;
-(NSNumber *)freqSkew;
-(id)initWithTrackId:(unsigned long long)arg1 offset:(double)arg2 timeSkew:(id)arg3 freqSkew:(id)arg4 ;
@end

