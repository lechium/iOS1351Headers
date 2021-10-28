/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKTripleCondition : NSObject <NSCopying, NSSecureCoding> {

	 rawCondition;

}

@property (readonly,nonatomic) NSString * description; 
+(id)havingPredicate:(id)arg1 matchType:(long long)arg2 error:(id*)arg3 ;
+(id)havingSubject:(id)arg1 andAbject:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(void*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)evaluateOn:(id)arg1 ;
-(id)initWithValue:(BOOL)arg1 ;
-(id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3 ;
-(id)and:(id)arg1 ;
-(id)or:(id)arg1 ;
@end
