/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OS_sec_experiment.h>

@class SecExperiment, NSString;

@interface SecExpConcrete_sec_experiment : NSObject <OS_sec_experiment> {

	SecExperiment* innerExperiment;
	unsigned long long numRuns;
	unsigned long long successRuns;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(const char*)name;
-(id)initWithName:(const char*)arg1 ;
-(const char*)identifier;
-(id)initWithInnerExperiment:(id)arg1 ;
-(BOOL)experimentIsAllowedForProcess;
-(BOOL)isSamplingDisabledWithDefault:(BOOL)arg1 ;
-(BOOL)isSamplingDisabled;
-(id)copyExperimentConfiguration;
@end

