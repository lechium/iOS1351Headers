/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSXPCStoreServer.h>

@interface RCXPCStoreServer : NSXPCStoreServer {

	/*^block*/id _shouldAcceptDatabaseConnection;

}

@property (nonatomic,copy) id shouldAcceptDatabaseConnection;              //@synthesize shouldAcceptDatabaseConnection=_shouldAcceptDatabaseConnection - In the implementation block
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)shouldAcceptDatabaseConnection;
-(void)setShouldAcceptDatabaseConnection:(id)arg1 ;
@end

