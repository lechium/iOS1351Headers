/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray;

@interface _UIVelocityIntegrator : NSObject {

	BOOL _hasMemoizedVelocity;
	double _minimumRequiredMovement;
	double _hysteresisTimeInterval;
	NSMutableArray* _samples;
	double _resetHysteresisOnSampleThetaDiff;
	/*^block*/id _didResetHysteresisOnThetaDiffHandler;
	CGVector _offset;
	CGVector _totalTranslation;
	CGVector _memoizedVelocity;

}

@property (assign,nonatomic) CGVector offset;                                      //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) NSMutableArray * samples;                             //@synthesize samples=_samples - In the implementation block
@property (assign,nonatomic) CGVector totalTranslation;                            //@synthesize totalTranslation=_totalTranslation - In the implementation block
@property (assign,nonatomic) BOOL hasMemoizedVelocity;                             //@synthesize hasMemoizedVelocity=_hasMemoizedVelocity - In the implementation block
@property (assign,nonatomic) CGVector memoizedVelocity;                            //@synthesize memoizedVelocity=_memoizedVelocity - In the implementation block
@property (assign,nonatomic) double resetHysteresisOnSampleThetaDiff;              //@synthesize resetHysteresisOnSampleThetaDiff=_resetHysteresisOnSampleThetaDiff - In the implementation block
@property (nonatomic,copy) id didResetHysteresisOnThetaDiffHandler;                //@synthesize didResetHysteresisOnThetaDiffHandler=_didResetHysteresisOnThetaDiffHandler - In the implementation block
@property (assign,nonatomic) double minimumRequiredMovement;                       //@synthesize minimumRequiredMovement=_minimumRequiredMovement - In the implementation block
@property (nonatomic,readonly) CGVector velocity; 
@property (assign,nonatomic) double hysteresisTimeInterval;                        //@synthesize hysteresisTimeInterval=_hysteresisTimeInterval - In the implementation block
-(id)init;
-(void)reset;
-(NSMutableArray *)samples;
-(void)setOffset:(CGVector)arg1 ;
-(CGVector)offset;
-(CGVector)velocity;
-(void)setHysteresisTimeInterval:(double)arg1 ;
-(void)setResetHysteresisOnSampleThetaDiff:(double)arg1 ;
-(void)setDidResetHysteresisOnThetaDiffHandler:(id)arg1 ;
-(void)addSample:(CGPoint)arg1 ;
-(BOOL)hasVelocity;
-(long long)_sampleCount;
-(void)setMinimumRequiredMovement:(double)arg1 ;
-(void)setTotalTranslation:(CGVector)arg1 ;
-(double)resetHysteresisOnSampleThetaDiff;
-(id)didResetHysteresisOnThetaDiffHandler;
-(CGVector)totalTranslation;
-(void)setHasMemoizedVelocity:(BOOL)arg1 ;
-(BOOL)hasMemoizedVelocity;
-(CGVector)_computedVelocity;
-(void)setMemoizedVelocity:(CGVector)arg1 ;
-(CGVector)memoizedVelocity;
-(double)minimumRequiredMovement;
-(double)hysteresisTimeInterval;
-(void)setSamples:(NSMutableArray *)arg1 ;
@end

