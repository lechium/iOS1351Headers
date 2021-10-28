/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class SGDHarvestQueueOnDisk;

@interface SGDHarvestQueueItemOnDisk : SGDHarvestQueueItem {

	SGDHarvestQueueOnDisk* _harvestQueue;
	int _fileId;

}
-(void)dealloc;
-(id)description;
-(void)finish;
-(BOOL)highPriority;
-(void)markAsFailed;
-(id)initWithHarvestQueue:(id)arg1 itemId:(long long)arg2 fileId:(int)arg3 item:(id)arg4 fails:(int)arg5 ;
@end
