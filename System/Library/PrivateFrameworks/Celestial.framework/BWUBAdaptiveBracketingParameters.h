/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWAdaptiveBracketingParameters.h>
#import <libobjc.A.dylib/BWAdaptiveBracketingDigitalFlashTotalIntegrationTimesProvider.h>

@class UBProgressiveBracketingParameters, NSArray, UBProgressiveBracketingStatistics, NSString;

@interface BWUBAdaptiveBracketingParameters : NSObject <BWAdaptiveBracketingParameters, BWAdaptiveBracketingDigitalFlashTotalIntegrationTimesProvider> {

	UBProgressiveBracketingParameters* _progressiveBracketingParameters;
	os_unfair_lock_s _adaptiveBracketingFrameParametersLock;
	NSArray* _adaptiveBracketingFrameParameters;
	BOOL _stopAdaptiveBracketing;
	Class _progressiveBracketingStatisticsClass;
	UBProgressiveBracketingStatistics* _lastProgressiveBracketingStatisticsForTotalIntegrationTimesProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)stationary;
-(double)totalIntegrationTime;
-(void)updateAdaptiveBracketingFrameParametersUsingGroup:(int)arg1 ;
-(id)initWithProgressiveBracketingParameters:(id)arg1 progressiveBracketingStatisticsClass:(Class)arg2 ;
-(id)adaptiveBracketingFrameParameters;
-(BOOL)generateWhiteBalanceParameters;
-(double)totalIntegrationTimeForDigitalFlashMode:(int)arg1 frameStatistics:(id)arg2 stationary:(BOOL)arg3 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg1 ;
-(id)progressiveBracketingParameters;
-(void)stopAdaptiveBracketing;
@end

