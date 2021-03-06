/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/_HKCFGExpression.h>

@interface _HKCFGTerminal : _HKCFGExpression
+(id)terminalMatchingString:(id)arg1 ;
+(id)terminalMatchingString:(id)arg1 caseSensitive:(BOOL)arg2 ;
+(id)terminalMatchingCharacterInSet:(id)arg1 ;
+(id)_terminalMatchingIntegerWithCondition:(/*^block*/id)arg1 ;
+(id)_terminalMatchingDoubleWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingCharacterInString:(id)arg1 ;
+(id)terminalMatchingAnyInteger;
+(id)terminalMatchingIntegerWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingAnyDouble;
+(id)terminalMatchingDoubleWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingSequenceOfCharactersInSet:(id)arg1 ;
-(id)_label;
-(id)characterSet;
-(unsigned long long)_minimumLength;
-(void)_tryNodesWithContext:(id)arg1 solutionTest:(/*^block*/id)arg2 ;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
@end

