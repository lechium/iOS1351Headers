/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface FMNSXPCConnectionCache : NSObject {

	NSObject*<OS_dispatch_queue> _modsSerialQueue;
	NSMutableDictionary* _connectionsByServiceName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modsSerialQueue;                //@synthesize modsSerialQueue=_modsSerialQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionsByServiceName;              //@synthesize connectionsByServiceName=_connectionsByServiceName - In the implementation block
+(id)sharedCache;
-(id)init;
-(void)dealloc;
-(id)resumeConnectionWithConfiguration:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)modsSerialQueue;
-(NSMutableDictionary *)connectionsByServiceName;
-(void)setModsSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConnectionsByServiceName:(NSMutableDictionary *)arg1 ;
@end
