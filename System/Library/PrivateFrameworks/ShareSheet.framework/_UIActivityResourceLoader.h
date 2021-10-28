/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface _UIActivityResourceLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _loadBlock;
	NSObject*<OS_dispatch_group> _group;
	id _resource;

}
-(id)initWithQueue:(id)arg1 loadBlock:(/*^block*/id)arg2 ;
-(void)_loadResourceWithBlock:(/*^block*/id)arg1 ;
-(void)loadResourceIfNeeded;
-(void)_getResourceWithBlock:(/*^block*/id)arg1 ;
-(void)getResourceWithBlock:(/*^block*/id)arg1 ;
@end
