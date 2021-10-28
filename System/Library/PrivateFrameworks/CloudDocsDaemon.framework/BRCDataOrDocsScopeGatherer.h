/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BRCNotificationPipe, NSMutableArray, NSString, BRCAccountSession, BRCItemGlobalID;

@interface BRCDataOrDocsScopeGatherer : NSObject {

	BRCNotificationPipe* _pipe;
	/*^block*/id _gatherReply;
	NSMutableArray* _gatheringAppLibraries;
	unsigned long long _gatheringRankMin;
	unsigned long long _gatheringRankMax;
	unsigned long long _lastSentRank;
	NSString* _gatheringNamePrefix;
	BRCAccountSession* _session;
	BOOL _includesDeadItems;
	BRCItemGlobalID* _gatheredChildrenItemGlobalID;

}

@property (nonatomic,retain) BRCItemGlobalID * gatheredChildrenItemGlobalID;              //@synthesize gatheredChildrenItemGlobalID=_gatheredChildrenItemGlobalID - In the implementation block
-(void)invalidate;
-(void)done;
-(void)gatherWithBatchSize:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)_popGatherReply;
-(id)initWithNotificationPipe:(id)arg1 appLibraries:(id)arg2 startingRank:(unsigned long long)arg3 maxRank:(unsigned long long)arg4 withDeadItems:(BOOL)arg5 gatherReply:(/*^block*/id)arg6 ;
-(BRCItemGlobalID *)gatheredChildrenItemGlobalID;
-(void)setGatheredChildrenItemGlobalID:(BRCItemGlobalID *)arg1 ;
@end
