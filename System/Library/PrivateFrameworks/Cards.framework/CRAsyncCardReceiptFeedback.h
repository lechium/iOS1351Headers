/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CRAsyncCardReceiptFeedback <CRFeedback>
@property (nonatomic,retain) id<CRCard> baseCard; 
@property (nonatomic,retain) id<CRCard> requestedCard; 
@property (nonatomic,retain) id<CRCard> receivedCard; 
@required
-(void)setBaseCard:(id)arg1;
-(void)setRequestedCard:(id)arg1;
-(void)setReceivedCard:(id)arg1;
-(id<CRCard>)baseCard;
-(id<CRCard>)requestedCard;
-(id<CRCard>)receivedCard;

@end

