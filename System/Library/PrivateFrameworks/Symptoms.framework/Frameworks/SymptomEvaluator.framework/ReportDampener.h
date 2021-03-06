/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface ReportDampener : NSObject {

	NSDate* _suppressReportingUntil;
	unsigned long long _numSuppressedReports;

}

@property (nonatomic,retain) NSDate * suppressReportingUntil;                      //@synthesize suppressReportingUntil=_suppressReportingUntil - In the implementation block
@property (assign,nonatomic) unsigned long long numSuppressedReports;              //@synthesize numSuppressedReports=_numSuppressedReports - In the implementation block
-(NSDate *)suppressReportingUntil;
-(void)setSuppressReportingUntil:(NSDate *)arg1 ;
-(unsigned long long)numSuppressedReports;
-(void)setNumSuppressedReports:(unsigned long long)arg1 ;
@end

