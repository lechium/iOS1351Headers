/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NTPBPublisherFavorabilityScores, NSDictionary;

@interface FCPersonalizationFavorabilityScores : NSObject <NSSecureCoding> {

	NTPBPublisherFavorabilityScores* _pbFavorabilityScores;
	NSDictionary* _tagIDToScores;

}

@property (nonatomic,retain) NSDictionary * tagIDToScores;              //@synthesize tagIDToScores=_tagIDToScores - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPBFavorabilityScores:(id)arg1 ;
-(NSDictionary *)tagIDToScores;
-(id)scoreForTagID:(id)arg1 ;
-(void)setTagIDToScores:(NSDictionary *)arg1 ;
@end

