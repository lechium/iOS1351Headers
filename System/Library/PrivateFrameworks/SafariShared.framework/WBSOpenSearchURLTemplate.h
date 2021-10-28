/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _parametersByName;
	NSMutableArray* _parameters;
	NSString* _templateString;

}

@property (nonatomic,copy,readonly) NSString * templateString;              //@synthesize templateString=_templateString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)templateBySubstitutingValues:(id)arg1 ;
-(id)templateBySubstitutingValue:(id)arg1 forParameter:(id)arg2 ;
-(NSString *)templateString;
-(BOOL)includesParameter:(id)arg1 ;
-(id)URLWithSearchTerms:(id)arg1 ;
-(id)templateByAddingParameter:(id)arg1 asURLQueryParameter:(id)arg2 ;
@end
