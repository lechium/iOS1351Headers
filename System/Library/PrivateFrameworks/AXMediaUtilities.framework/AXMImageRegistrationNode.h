/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMEvaluationNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXMPipelineContextInput;

@interface AXMImageRegistrationNode : AXMEvaluationNode <NSSecureCoding> {

	AXMPipelineContextInput* _previousInput;
	AXMPipelineContextInput* _currentInput;
	CGPoint _transpositionHistoryCircularBuffer[10];
	unsigned long long _transpositionHistoryLastRecordedIndex;
	BOOL _fillingHistoryBuffer;
	long long _registrationState;

}

@property (nonatomic,readonly) long long registrationState; 
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(BOOL)requiresVisionFramework;
-(void)_resetTranspositionHistory;
-(id)_translationalImageRegistrationRequestForInput:(id)arg1 ;
-(void)_recordTransposition:(CGPoint)arg1 ;
-(void)_resetImageRegistration;
-(long long)registrationState;
@end
