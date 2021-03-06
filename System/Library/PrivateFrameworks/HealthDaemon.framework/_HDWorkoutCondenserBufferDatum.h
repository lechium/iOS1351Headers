/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _HDWorkoutCondenserBufferDatum : NSObject {

	unsigned char _UUIDBytes[16];
	BOOL _isSeries;
	double _startTime;
	double _endTime;
	double _value;

}

@property (nonatomic,readonly) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL isSeries;                 //@synthesize isSeries=_isSeries - In the implementation block
-(id)init;
-(id)description;
-(double)value;
-(double)startTime;
-(double)endTime;
-(BOOL)isSeries;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 value:(double)arg3 UUIDBytes:(unsigned char)arg4 series:(BOOL)arg5 ;
-(BOOL)shouldReplaceDatum:(id)arg1 ;
@end

