/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HelpKit/HelpKit-Structs.h>
@class NSString;

@interface HLPHelpSearchResult : NSObject {

	double _relevanceScore;
	long long _weight;
	long long _matchCount;
	NSString* _identifier;

}

@property (assign,nonatomic) double relevanceScore;              //@synthesize relevanceScore=_relevanceScore - In the implementation block
@property (assign,nonatomic) long long weight;                   //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) long long matchCount;               //@synthesize matchCount=_matchCount - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setWeight:(long long)arg1 ;
-(long long)weight;
-(void)setRelevanceScore:(double)arg1 ;
-(double)relevanceScore;
-(long long)matchCount;
-(void)setMatchCount:(long long)arg1 ;
@end

