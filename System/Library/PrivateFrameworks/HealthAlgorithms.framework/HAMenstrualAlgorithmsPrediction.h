/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthAlgorithms/HealthAlgorithms-Structs.h>
@class NSArray;

@interface HAMenstrualAlgorithmsPrediction : NSObject {

	BOOL _isOngoingMenstruation;
	unsigned _julianDayOfWindowStart;
	NSArray* _startProbability;
	NSArray* _endProbability;
	NSArray* _convolvedProbability;
	double _startProbabilityMean;
	double _endProbabilityMean;
	double _convolvedProbabilityMean;
	double _startProbabilityStdDev;
	double _endProbabilityStdDev;
	double _convolvedProbabilityStdDev;
	NSRange _lowRange;

}

@property (assign,nonatomic) unsigned julianDayOfWindowStart;                //@synthesize julianDayOfWindowStart=_julianDayOfWindowStart - In the implementation block
@property (nonatomic,retain) NSArray * startProbability;                     //@synthesize startProbability=_startProbability - In the implementation block
@property (nonatomic,retain) NSArray * endProbability;                       //@synthesize endProbability=_endProbability - In the implementation block
@property (nonatomic,retain) NSArray * convolvedProbability;                 //@synthesize convolvedProbability=_convolvedProbability - In the implementation block
@property (assign,nonatomic) double startProbabilityMean;                    //@synthesize startProbabilityMean=_startProbabilityMean - In the implementation block
@property (assign,nonatomic) double endProbabilityMean;                      //@synthesize endProbabilityMean=_endProbabilityMean - In the implementation block
@property (assign,nonatomic) double convolvedProbabilityMean;                //@synthesize convolvedProbabilityMean=_convolvedProbabilityMean - In the implementation block
@property (assign,nonatomic) double startProbabilityStdDev;                  //@synthesize startProbabilityStdDev=_startProbabilityStdDev - In the implementation block
@property (assign,nonatomic) double endProbabilityStdDev;                    //@synthesize endProbabilityStdDev=_endProbabilityStdDev - In the implementation block
@property (assign,nonatomic) double convolvedProbabilityStdDev;              //@synthesize convolvedProbabilityStdDev=_convolvedProbabilityStdDev - In the implementation block
@property (assign,nonatomic) NSRange lowRange;                               //@synthesize lowRange=_lowRange - In the implementation block
@property (assign,nonatomic) BOOL isOngoingMenstruation;                     //@synthesize isOngoingMenstruation=_isOngoingMenstruation - In the implementation block
-(unsigned)julianDayOfWindowStart;
-(void)setJulianDayOfWindowStart:(unsigned)arg1 ;
-(NSArray *)startProbability;
-(void)setStartProbability:(NSArray *)arg1 ;
-(NSArray *)endProbability;
-(void)setEndProbability:(NSArray *)arg1 ;
-(NSArray *)convolvedProbability;
-(void)setConvolvedProbability:(NSArray *)arg1 ;
-(double)startProbabilityMean;
-(void)setStartProbabilityMean:(double)arg1 ;
-(double)endProbabilityMean;
-(void)setEndProbabilityMean:(double)arg1 ;
-(double)convolvedProbabilityMean;
-(void)setConvolvedProbabilityMean:(double)arg1 ;
-(double)startProbabilityStdDev;
-(void)setStartProbabilityStdDev:(double)arg1 ;
-(double)endProbabilityStdDev;
-(void)setEndProbabilityStdDev:(double)arg1 ;
-(double)convolvedProbabilityStdDev;
-(void)setConvolvedProbabilityStdDev:(double)arg1 ;
-(NSRange)lowRange;
-(void)setLowRange:(NSRange)arg1 ;
-(BOOL)isOngoingMenstruation;
-(void)setIsOngoingMenstruation:(BOOL)arg1 ;
@end
