/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface VCPSharedInstanceManager : NSObject {

	NSObject*<OS_dispatch_queue> serialQueue_;
	NSMutableDictionary* sharedInstances_;

}
+(id)sharedManager;
-(id)init;
-(void)reset;
-(id)sharedInstanceWithIdentifier:(id)arg1 andCreationBlock:(/*^block*/id)arg2 ;
@end

