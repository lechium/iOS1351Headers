/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXAnalyticsReporting.h>

@protocol SXAnalyticsReporting;
@class NSString;

@interface SXAnalyticsReporterProxy : NSObject <SXAnalyticsReporting> {

	id<SXAnalyticsReporting> _analyticsReporter;

}

@property (nonatomic,__weak,readonly) id<SXAnalyticsReporting> analyticsReporter;              //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXAnalyticsReporting>)analyticsReporter;
-(void)reportEvent:(id)arg1 ;
-(id)initWithAnalyticsReporter:(id)arg1 ;
@end

