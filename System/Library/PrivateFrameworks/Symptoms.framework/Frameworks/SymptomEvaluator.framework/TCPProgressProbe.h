/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject;

@interface TCPProgressProbe : NSObject {

	NSObject*<OS_dispatch_queue> lqueue;
	const char* interfaceName;
	unsigned state;
	unsigned long long _countPremiumModeClients;
	BOOL _localFlowTracking;
	unsigned long long _interfaceIndex;

}

@property (nonatomic,readonly) unsigned long long interfaceIndex;              //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (assign,nonatomic) BOOL localFlowTracking;                           //@synthesize localFlowTracking=_localFlowTracking - In the implementation block
+(void)initialize;
+(id)probeForInterface:(id)arg1 ;
+(id)progressPrettyPrintUtility:(xtcpprogress_indicators*)arg1 ;
+(void)forceInvalidationFor:(id)arg1 periods:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)interfaceIndex;
-(BOOL)manage:(unsigned)arg1 outValue:(unsigned*)arg2 ;
-(BOOL)fetchMetricsForFlowsAged:(double)arg1 metrics:(xtcpprogress_indicators*)arg2 ;
-(BOOL)localFlowTracking;
-(void)setLocalFlowTracking:(BOOL)arg1 ;
-(BOOL)interfaceMappingIsCurrent;
-(id)_initForInterface:(id)arg1 ;
@end
