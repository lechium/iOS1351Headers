/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MNTraceAnnotatedUserEnvironmentRow : NSObject {

	double _startTimestamp;
	double _endTimestamp;
	long long _environmentType;

}

@property (assign,nonatomic) double startTimestamp;                  //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) double endTimestamp;                    //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (assign,nonatomic) long long environmentType;              //@synthesize environmentType=_environmentType - In the implementation block
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
-(double)endTimestamp;
-(void)setEndTimestamp:(double)arg1 ;
-(void)setEnvironmentType:(long long)arg1 ;
-(long long)environmentType;
@end

