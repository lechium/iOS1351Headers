/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface OS_xpc_remote_outstanding_reply : NSObject {

	unsigned long long msg_id;
	/*^block*/id reply_handler;
	NSObject*<OS_dispatch_queue> reply_queue;
	OS_xpc_remote_outstanding_reply* link_stqe_next;

}
@end
