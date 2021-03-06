/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFLoggable.h>

@class SDRDiagnosticReporter, NSString;

@interface EFAutoBugCaptureReporter : NSObject <EFLoggable> {

	SDRDiagnosticReporter* _diagnosticReporter;

}

@property (nonatomic,retain) SDRDiagnosticReporter * diagnosticReporter;              //@synthesize diagnosticReporter=_diagnosticReporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)sharedReporter;
-(id)init;
-(void)reportIssueType:(id)arg1 description:(id)arg2 ;
-(SDRDiagnosticReporter *)diagnosticReporter;
-(void)setDiagnosticReporter:(SDRDiagnosticReporter *)arg1 ;
@end

