/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDOperation.h>

@protocol OS_dispatch_group;
@class CKDServerConfiguration, NSObject;

@interface CKDGlobalConfigurationOperation : CKDOperation {

	CKDServerConfiguration* _configuration;
	NSObject*<OS_dispatch_group> _configurationFetchedGroup;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> configurationFetchedGroup;              //@synthesize configurationFetchedGroup=_configurationFetchedGroup - In the implementation block
-(void)main;
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(CKDServerConfiguration *)configuration;
-(id)activityCreate;
-(BOOL)shouldCheckAppVersion;
-(void)setConfigurationFetchedGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)configurationFetchedGroup;
@end

