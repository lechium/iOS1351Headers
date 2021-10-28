/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface PHAWorkerHealthScoreEntry : NSObject {

	float _score;
	NSDate* _dateRecorded;

}

@property (nonatomic,readonly) float score;                             //@synthesize score=_score - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateRecorded;              //@synthesize dateRecorded=_dateRecorded - In the implementation block
-(float)score;
-(id)initWithScore:(float)arg1 ;
-(NSDate *)dateRecorded;
@end
