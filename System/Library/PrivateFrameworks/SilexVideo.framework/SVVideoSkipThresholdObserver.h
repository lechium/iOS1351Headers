/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVVideoSkipThresholdObserving.h>

@protocol SVVideoSkipThreshold, SVVideoLoadingStateObserving;
@class NSString;

@interface SVVideoSkipThresholdObserver : NSObject <SVVideoSkipThresholdObserving> {

	BOOL _loading;
	/*^block*/id block;
	id<SVVideoSkipThreshold> _thresholdProvider;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;

}

@property (nonatomic,readonly) id<SVVideoLoadingStateObserving> loadingStateObserver;              //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SVVideoSkipThreshold> thresholdProvider;                         //@synthesize thresholdProvider=_thresholdProvider - In the implementation block
@property (nonatomic,readonly) BOOL loading;                                                       //@synthesize loading=_loading - In the implementation block
@property (setter=onChange:,nonatomic,copy) id block; 
-(id)block;
-(BOOL)loading;
-(void)onChange:(/*^block*/id)arg1 ;
-(id<SVVideoSkipThreshold>)thresholdProvider;
-(void)loadingCompletedWithThreshold:(double)arg1 ;
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(id)initWithLoadingStateObserver:(id)arg1 thresholdProvider:(id)arg2 ;
@end
