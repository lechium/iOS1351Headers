/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WLDaemonConnection;

@interface WLDaemonController : NSObject {

	WLDaemonConnection* _connection;

}

@property (nonatomic,retain) WLDaemonConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(WLDaemonConnection *)connection;
-(void)setConnection:(WLDaemonConnection *)arg1 ;
-(void)importLocalContent;
-(void)setStashDataLocally:(BOOL)arg1 ;
-(void)getLocalImportOptionsWithCompletion:(/*^block*/id)arg1 ;
@end

