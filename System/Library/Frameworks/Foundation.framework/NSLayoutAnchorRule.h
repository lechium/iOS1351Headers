/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSString, NSLayoutAnchor;

@interface NSLayoutAnchorRule : NSObject <NSLayoutRule> {

	NSLayoutAnchor* _firstAnchor;
	NSLayoutAnchor* _secondAnchor;
	long long _relation;
	NSString* _identifier;
	double _constant;
	double _multiplier;
	float _priority;

}

@property (copy,readonly) NSLayoutAnchor * firstAnchor;               //@synthesize firstAnchor=_firstAnchor - In the implementation block
@property (copy,readonly) NSLayoutAnchor * secondAnchor;              //@synthesize secondAnchor=_secondAnchor - In the implementation block
@property (readonly) long long relation;                              //@synthesize relation=_relation - In the implementation block
@property (readonly) double constant;                                 //@synthesize constant=_constant - In the implementation block
@property (readonly) double multiplier;                               //@synthesize multiplier=_multiplier - In the implementation block
@property (readonly) float priority;                                  //@synthesize priority=_priority - In the implementation block
@property (copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * ruleDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSLayoutAnchor *)firstAnchor;
-(NSLayoutAnchor *)secondAnchor;
-(double)constant;
-(id)makeChildRules;
-(id)makeLayoutConstraint;
-(NSString *)ruleDescription;
-(double)multiplier;
-(id)initWithFirstAnchor:(id)arg1 secondAnchor:(id)arg2 relation:(long long)arg3 multiplier:(double)arg4 constant:(double)arg5 priority:(float)arg6 identifier:(id)arg7 ;
-(long long)relation;
-(float)priority;
@end

