/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKTriple : NSObject <NSSecureCoding> {

	 value;

}

@property (readonly,nonatomic) NSString * subject; 
@property (readonly,nonatomic) NSString * predicate; 
@property (readonly,nonatomic) NSString * object; 
@property (readonly,nonatomic) long long weight; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) long long hash; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(long long)hash;
-(NSString *)description;
-(NSString *)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)predicate;
-(long long)weight;
-(NSString *)subject;
-(id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3 weight:(long long)arg4 ;
@end

