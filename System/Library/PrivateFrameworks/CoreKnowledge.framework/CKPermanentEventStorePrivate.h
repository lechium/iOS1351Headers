/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CKKnowledgeStore;


@protocol CKPermanentEventStorePrivate
@property (readonly,nonatomic) CKKnowledgeStore * backingStore; 
@required
-(CKKnowledgeStore *)backingStore;
-(void)historicEventsWithCompletionHandler:(/*^block*/id)arg1;
-(id)historicEventsAndReturnError:(id*)arg1;
-(void)setFirstSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLastSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setFrequency:(long long)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLastDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setTotalDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)deleteEventWithIdentifier:(id)arg1 error:(id*)arg2;
-(void)deleteEventWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

