/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKCompoundTypePredicateValidator : CKPredicateValidatorInstance {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)CKPropertiesDescription;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
@end

