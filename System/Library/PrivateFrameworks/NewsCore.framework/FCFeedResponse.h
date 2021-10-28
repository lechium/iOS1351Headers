/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, NSError, FCFeedRange;

@interface FCFeedResponse : NSObject {

	BOOL _exhaustedRequestRange;
	NSString* _feedID;
	NSArray* _feedItems;
	NSError* _error;

}

@property (nonatomic,copy) NSString * feedID;                             //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,copy) NSArray * feedItems;                           //@synthesize feedItems=_feedItems - In the implementation block
@property (assign,nonatomic) BOOL exhaustedRequestRange;                  //@synthesize exhaustedRequestRange=_exhaustedRequestRange - In the implementation block
@property (nonatomic,copy) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) FCFeedRange * feedRange; 
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)feedID;
-(void)setFeedID:(NSString *)arg1 ;
-(void)setFeedItems:(NSArray *)arg1 ;
-(FCFeedRange *)feedRange;
-(id)feedResponseByMergingWithResponse:(id)arg1 ;
-(NSArray *)feedItems;
-(void)setExhaustedRequestRange:(BOOL)arg1 ;
-(BOOL)exhaustedRequestRange;
@end
