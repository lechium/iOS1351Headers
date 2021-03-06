/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class FlowClassification;

@interface TrackerPolicy : NSObject {

	SCD_Struct_Tr17 _classMap[12];
	SCD_Struct_Tr17 _mgmtFlagsMap[4];
	unsigned _numClassMaps;
	unsigned _numMgmtFlagsMaps;
	FlowClassification* _defaultClassification;
	unsigned long long _maximumConnectionsPerHour;

}

@property (assign) unsigned numClassMaps;                                     //@synthesize numClassMaps=_numClassMaps - In the implementation block
@property (assign) unsigned numMgmtFlagsMaps;                                 //@synthesize numMgmtFlagsMaps=_numMgmtFlagsMaps - In the implementation block
@property (retain) FlowClassification * defaultClassification;                //@synthesize defaultClassification=_defaultClassification - In the implementation block
@property (assign) unsigned long long maximumConnectionsPerHour;              //@synthesize maximumConnectionsPerHour=_maximumConnectionsPerHour - In the implementation block
+(void)initialize;
+(id)preferredInstance:(id)arg1 ;
-(id)init;
-(id)description;
-(int)configureInstance:(id)arg1 ;
-(id)nonDefaultFlowClassificationFor:(id)arg1 ;
-(void)setMaximumConnectionsPerHour:(unsigned long long)arg1 ;
-(void)addClassification:(id)arg1 forTrafficClass:(unsigned)arg2 ;
-(void)addClassification:(id)arg1 forTrafficMgmtFlags:(unsigned)arg2 ;
-(unsigned)numClassMaps;
-(unsigned)numMgmtFlagsMaps;
-(FlowClassification *)defaultClassification;
-(id)flowClassificationFor:(id)arg1 ;
-(void)setNumClassMaps:(unsigned)arg1 ;
-(void)setNumMgmtFlagsMaps:(unsigned)arg1 ;
-(void)setDefaultClassification:(FlowClassification *)arg1 ;
-(unsigned long long)maximumConnectionsPerHour;
@end

