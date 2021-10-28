/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, TCProgressContext;

@interface TCProgressStage : NSObject {

	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	NSString* m_name;
	TCProgressStage* m_parentStage;
	TCProgressContext* m_context;

}
-(void)dealloc;
-(void)end;
-(void)setProgress:(double)arg1 ;
-(double)currentPosition;
-(id)initRootStageInContext:(id)arg1 ;
-(id)parentStage;
-(void)advanceProgress:(double)arg1 ;
-(id)initWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4 ;
-(id)initBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4 ;
@end
