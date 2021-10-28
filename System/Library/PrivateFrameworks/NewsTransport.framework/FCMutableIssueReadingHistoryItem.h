/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate;


@protocol FCMutableIssueReadingHistoryItem <FCIssueReadingHistoryItem>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * issueID; 
@property (nonatomic,copy) NSDate * lastVisitedDate; 
@property (nonatomic,copy) NSDate * lastBadgedDate; 
@property (nonatomic,copy) NSDate * lastEngagedDate; 
@property (nonatomic,copy) NSDate * lastSeenDate; 
@property (nonatomic,copy) NSDate * lastRemovedFromMyMagazinesDate; 
@property (nonatomic,copy) NSString * lastVisitedArticleID; 
@property (nonatomic,copy) NSString * lastVisitedPageID; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSDate *)lastSeenDate;
-(void)setLastSeenDate:(id)arg1;
-(void)setLastVisitedDate:(id)arg1;
-(void)setLastVisitedArticleID:(id)arg1;
-(void)setLastVisitedPageID:(id)arg1;
-(void)setLastBadgedDate:(id)arg1;
-(NSDate *)lastBadgedDate;
-(void)setLastEngagedDate:(id)arg1;
-(NSDate *)lastEngagedDate;
-(void)setLastRemovedFromMyMagazinesDate:(id)arg1;
-(NSString *)lastVisitedArticleID;
-(NSString *)lastVisitedPageID;
-(NSDate *)lastVisitedDate;
-(NSDate *)lastRemovedFromMyMagazinesDate;
-(NSString *)issueID;
-(void)setIssueID:(id)arg1;

@end
