/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol AdditionalInfoProtocol;
@class NSMutableArray, SimpleSyndromeHandler, NSString;

@interface SimpleRuleEvaluator : NSObject <ConfigurableObjectProtocol> {

	NSMutableArray* _conditionsToCheck;
	char* _stringToLog;
	unsigned long long _awd_code;
	SimpleSyndromeHandler* _syndromeToCall;
	id<AdditionalInfoProtocol> _additionalInfoGenerator;
	SEL _additionalInfoSelector;
	NSString* _signatureName;

}

@property (nonatomic,retain) NSString * signatureName;              //@synthesize signatureName=_signatureName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureClass:(id)arg1 ;
+(id)objectWithName:(id)arg1 ;
-(NSString *)description;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)setSignatureName:(NSString *)arg1 ;
-(void)evaluateSignatureForEvent:(id)arg1 ;
-(NSString *)signatureName;
@end
