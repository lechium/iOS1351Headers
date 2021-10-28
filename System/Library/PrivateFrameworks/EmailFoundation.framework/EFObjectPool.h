/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmailFoundation/EmailFoundation-Structs.h>
@class NSMutableArray;

@interface EFObjectPool : NSObject {

	NSMutableArray* _storage;
	/*^block*/id _generator;
	/*^block*/id _tearDown;
	os_unfair_lock_s _lock;

}
-(id)initWithCapacity:(unsigned long long)arg1 generator:(/*^block*/id)arg2 tearDown:(/*^block*/id)arg3 ;
-(id)initWithGenerator:(/*^block*/id)arg1 tearDown:(/*^block*/id)arg2 ;
-(id)acquireObject;
-(void)releaseObject:(id)arg1 ;
@end
