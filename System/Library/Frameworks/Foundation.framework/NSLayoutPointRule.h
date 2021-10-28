/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSLayoutPoint, NSString;

@interface NSLayoutPointRule : NSObject <NSLayoutRule> {

	NSLayoutPoint* _firstLayoutPoint;
	NSLayoutPoint* _secondLayoutPoint;

}

@property (copy,readonly) NSLayoutPoint * firstLayoutPoint;               //@synthesize firstLayoutPoint=_firstLayoutPoint - In the implementation block
@property (copy,readonly) NSLayoutPoint * secondLayoutPoint;              //@synthesize secondLayoutPoint=_secondLayoutPoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)makeChildRules;
-(NSString *)ruleDescription;
-(id)initWithFirstLayoutPoint:(id)arg1 secondLayoutPoint:(id)arg2 ;
-(NSLayoutPoint *)firstLayoutPoint;
-(NSLayoutPoint *)secondLayoutPoint;
@end
