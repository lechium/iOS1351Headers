/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/Frameworks/AACDependencies.framework/AACDependencies
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AACDependencies.AEDBackingAssessmentSession : NSObject {

	 configuration;
	 policyBundleFactory;
	 policySession;
	 state;
	 delegate;

}

@property (assign,__weak,nonatomic) id<_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_> delegate; 
@property (readonly,nonatomic) BOOL isActive; 
-(id)init;
-(id<_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_>)delegate;
-(void)setDelegate:(id<_TtP15AACDependencies35AEDBackingAssessmentSessionDelegate_>)arg1 ;
-(BOOL)isActive;
-(void)end;
-(void)begin;
-(id)initWithConfiguration:(id)arg1 ;
@end
