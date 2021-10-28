/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LKNamingSimilarity : NSObject <NSSecureCoding> {

	unsigned long long _similarity;

}

@property (assign,nonatomic) unsigned long long similarity;              //@synthesize similarity=_similarity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)namingSimilarityWithSimilarity:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSimilarity:(unsigned long long)arg1 ;
-(unsigned long long)similarity;
-(BOOL)isEqualToLKNamingSimilarity:(id)arg1 ;
@end
