/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, NSLock;

@interface DCDeviceMetadataDaemonConnection : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;

}
-(id)init;
-(id)connection;
-(id)remoteObjectProxy:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxy:(/*^block*/id)arg1 ;
@end

