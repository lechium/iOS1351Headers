/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CommonUtilities/CUTCheckpointTrace.h>

@class NSString, CUTCheckpointRange, NSMutableArray;

@interface IDSPeerMessageCheckpointTrace : CUTCheckpointTrace {

	NSString* _guid;
	CUTCheckpointRange* _IDQuery;
	CUTCheckpointRange* _messageOnQueue;
	NSMutableArray* _mutableEncryptionCheckpoints;
	NSMutableArray* _mutableAggregateMessageSendCheckpoints;

}

@property (nonatomic,retain) NSMutableArray * mutableEncryptionCheckpoints;                        //@synthesize mutableEncryptionCheckpoints=_mutableEncryptionCheckpoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableAggregateMessageSendCheckpoints;              //@synthesize mutableAggregateMessageSendCheckpoints=_mutableAggregateMessageSendCheckpoints - In the implementation block
@property (nonatomic,readonly) NSString * guid;                                                    //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * IDQuery;                                       //@synthesize IDQuery=_IDQuery - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * messageOnQueue;                                //@synthesize messageOnQueue=_messageOnQueue - In the implementation block
-(id)checkpoints;
-(NSString *)guid;
-(CUTCheckpointRange *)messageOnQueue;
-(CUTCheckpointRange *)IDQuery;
-(id)initWithGuid:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(NSMutableArray *)mutableEncryptionCheckpoints;
-(NSMutableArray *)mutableAggregateMessageSendCheckpoints;
-(id)checkpointByAppendingEncryptionCheckpoint;
-(id)checkpointByAppendingAggregateMessageSendCheckpoint;
-(id)encryptionCheckpoints;
-(id)aggregateMessageSendCheckpoints;
-(void)setMutableEncryptionCheckpoints:(NSMutableArray *)arg1 ;
-(void)setMutableAggregateMessageSendCheckpoints:(NSMutableArray *)arg1 ;
@end

