/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NTPBChannelMembershipRecord, FCInterestToken, NSString;

@interface FCChannelMembership : NSObject {

	NTPBChannelMembershipRecord* _record;
	FCInterestToken* _interestToken;

}

@property (nonatomic,retain) NTPBChannelMembershipRecord * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) FCInterestToken * interestToken;                   //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NSString * channelID; 
@property (nonatomic,readonly) BOOL isAllowedToSeeDrafts; 
@property (nonatomic,readonly) NSString * draftArticleListID; 
@property (nonatomic,readonly) NSString * draftIssueListID; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NTPBChannelMembershipRecord *)record;
-(void)setRecord:(NTPBChannelMembershipRecord *)arg1 ;
-(NSString *)channelID;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 ;
-(BOOL)isAllowedToSeeDrafts;
-(NSString *)draftArticleListID;
-(NSString *)draftIssueListID;
-(FCInterestToken *)interestToken;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
@end

