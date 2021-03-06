/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PPContact, NSArray;

@interface PPScoredContact : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _flags;
	PPContact* _contact;
	double _score;
	NSArray* _scoredPhoneNumbers;
	NSArray* _scoredEmailAddresses;
	NSArray* _scoredSocialProfiles;
	NSArray* _scoredPostalAddresses;

}

@property (nonatomic,readonly) PPContact * contact;                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) double score;                                 //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) unsigned char flags;                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSArray * scoredPhoneNumbers;                 //@synthesize scoredPhoneNumbers=_scoredPhoneNumbers - In the implementation block
@property (nonatomic,readonly) NSArray * scoredEmailAddresses;               //@synthesize scoredEmailAddresses=_scoredEmailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * scoredSocialProfiles;               //@synthesize scoredSocialProfiles=_scoredSocialProfiles - In the implementation block
@property (nonatomic,readonly) NSArray * scoredPostalAddresses;              //@synthesize scoredPostalAddresses=_scoredPostalAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)scoredContactWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)flags;
-(double)score;
-(PPContact *)contact;
-(long long)reverseCompare:(id)arg1 ;
-(id)initWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7 ;
-(BOOL)isEqualToScoredContact:(id)arg1 ;
-(NSArray *)scoredPhoneNumbers;
-(NSArray *)scoredEmailAddresses;
-(NSArray *)scoredSocialProfiles;
-(NSArray *)scoredPostalAddresses;
@end

