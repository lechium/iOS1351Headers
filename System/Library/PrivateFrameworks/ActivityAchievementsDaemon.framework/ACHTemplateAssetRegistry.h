/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACHTemplateSourceDelegate.h>

@protocol ACHTemplateAssetRegistryDelegate, OS_dispatch_queue;
@class NSObject, ACHRemoteTemplateAvailabilityKeyProvider, NSMutableDictionary;

@interface ACHTemplateAssetRegistry : NSObject <ACHTemplateSourceDelegate> {

	NSObject*<ACHTemplateAssetRegistryDelegate> _delegate;
	ACHRemoteTemplateAvailabilityKeyProvider* _remoteTemplateAvailabilityKeyProvider;
	NSMutableDictionary* _templateSourcesByIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) ACHRemoteTemplateAvailabilityKeyProvider * remoteTemplateAvailabilityKeyProvider;              //@synthesize remoteTemplateAvailabilityKeyProvider=_remoteTemplateAvailabilityKeyProvider - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * templateSourcesByIdentifier;                                             //@synthesize templateSourcesByIdentifier=_templateSourcesByIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                                      //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ACHTemplateAssetRegistryDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<ACHTemplateAssetRegistryDelegate>)delegate;
-(void)setDelegate:(NSObject*<ACHTemplateAssetRegistryDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)templateSourcesByIdentifier;
-(void)_setBundleURLsForAchievement:(id)arg1 ;
-(ACHRemoteTemplateAvailabilityKeyProvider *)remoteTemplateAvailabilityKeyProvider;
-(void)templateSourceDidUpdateAssets:(id)arg1 ;
-(id)initWithRemoteTemplateAvailabilityKeyProvider:(id)arg1 ;
-(void)registerTemplateSource:(id)arg1 ;
-(void)deregisterTemplateSource:(id)arg1 ;
-(void)populateResourcePropertiesForAchievement:(id)arg1 ;
-(void)setRemoteTemplateAvailabilityKeyProvider:(ACHRemoteTemplateAvailabilityKeyProvider *)arg1 ;
-(void)setTemplateSourcesByIdentifier:(NSMutableDictionary *)arg1 ;
@end

