/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionRequestedReplies : NSObject {

	CFDictionaryRef _replyDictionaryTable;
	CFDictionaryRef _progressTable;
	unsigned long long _requestedReplyCount;
	unsigned char _invalid;
	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)beginTransactionForSequence:(unsigned long long)arg1 reply:(id)arg2 withProgress:(id)arg3 ;
-(void)endTransactionForSequence:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)progressForSequence:(unsigned long long)arg1 ;
@end

