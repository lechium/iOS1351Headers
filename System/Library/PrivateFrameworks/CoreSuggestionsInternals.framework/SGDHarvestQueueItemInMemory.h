/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class SGDHarvestQueueInMemory, NSString;

@interface SGDHarvestQueueItemInMemory : SGDHarvestQueueItem {

	BOOL _highPriority;
	SGDHarvestQueueInMemory* _parentQueue;
	BOOL _inProgress;
	BOOL _beingDeleted;
	NSString* _sourceKey;
	NSString* _messageId;

}

@property (nonatomic,readonly) NSString * sourceKey;              //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) NSString * messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (assign) BOOL inProgress;                               //@synthesize inProgress=_inProgress - In the implementation block
@property (assign) BOOL beingDeleted;                             //@synthesize beingDeleted=_beingDeleted - In the implementation block
-(id)description;
-(void)finish;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
-(NSString *)messageId;
-(BOOL)highPriority;
-(void)markAsFailed;
-(NSString *)sourceKey;
-(BOOL)beingDeleted;
-(id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3 sourceKey:(id)arg4 messageId:(id)arg5 highPriority:(BOOL)arg6 parentQueue:(id)arg7 ;
-(void)setBeingDeleted:(BOOL)arg1 ;
@end

