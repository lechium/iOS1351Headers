/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MSBackoffManagerDelegate;
@class NSDate;

@interface MSBackoffManager : NSObject <NSSecureCoding> {

	id<MSBackoffManagerDelegate> _delegate;
	double _initialInterval;
	double _backoffFactor;
	double _randomizeFactor;
	double _maxBackoffInterval;
	double _currentInterval;
	NSDate* _nextExpiryDate;
	NSDate* _retryAfterDate;

}

@property (assign,nonatomic) id<MSBackoffManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double initialInterval;                             //@synthesize initialInterval=_initialInterval - In the implementation block
@property (assign,nonatomic) double backoffFactor;                               //@synthesize backoffFactor=_backoffFactor - In the implementation block
@property (assign,nonatomic) double randomizeFactor;                             //@synthesize randomizeFactor=_randomizeFactor - In the implementation block
@property (assign,nonatomic) double maxBackoffInterval;                          //@synthesize maxBackoffInterval=_maxBackoffInterval - In the implementation block
@property (assign,nonatomic) double currentInterval;                             //@synthesize currentInterval=_currentInterval - In the implementation block
@property (retain) NSDate * nextExpiryDate; 
@property (retain) NSDate * retryAfterDate;                                      //@synthesize retryAfterDate=_retryAfterDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<MSBackoffManagerDelegate>)delegate;
-(void)setDelegate:(id<MSBackoffManagerDelegate>)arg1 ;
-(void)reset;
-(id)copyParameters;
-(double)backoffFactor;
-(void)setBackoffFactor:(double)arg1 ;
-(void)backoff;
-(double)currentInterval;
-(void)setCurrentInterval:(double)arg1 ;
-(id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5 ;
-(void)setNextExpiryDate:(NSDate *)arg1 ;
-(NSDate *)nextExpiryDate;
-(void)didReceiveRetryAfterDate:(id)arg1 ;
-(void)_complainAboutMissingKeyInArchive:(id)arg1 ;
-(double)initialInterval;
-(void)setInitialInterval:(double)arg1 ;
-(double)randomizeFactor;
-(void)setRandomizeFactor:(double)arg1 ;
-(double)maxBackoffInterval;
-(void)setMaxBackoffInterval:(double)arg1 ;
-(NSDate *)retryAfterDate;
-(void)setRetryAfterDate:(NSDate *)arg1 ;
@end
