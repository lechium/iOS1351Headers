/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WelcomeKit/WLDaemonConnection.h>

@protocol WLDataMigratorProtocol, WLDataMigrationDelegate;
@interface WLDataMigrationController : WLDaemonConnection {

	id<WLDataMigratorProtocol> _migrator;
	id<WLDataMigrationDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<WLDataMigrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WLDataMigrationDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)startMigrationUsingRetryPolicies:(BOOL)arg1 ;
@end
