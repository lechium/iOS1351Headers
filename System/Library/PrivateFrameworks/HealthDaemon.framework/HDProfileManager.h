/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class HDDaemon, NSMutableDictionary, NSObject;

@interface HDProfileManager : NSObject {

	HDDaemon* _daemon;
	NSMutableDictionary* _profiles;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}
-(void)invalidateAndWait;
-(void)deleteProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addProfile:(id)arg1 ;
-(id)initWithDaemon:(id)arg1 ;
-(id)allProfileIdentifiers;
-(id)profileForIdentifier:(id)arg1 ;
-(id)createProfileOfType:(long long)arg1 displayName:(id)arg2 error:(id*)arg3 ;
-(id)profileAssociatedWithNRDeviceUUID:(id)arg1 ;
-(void)_resourceQueue_loadSecondaryProfiles;
-(id)_resourceQueue_profileForIdentifier:(id)arg1 ;
-(void)_resourceQueue_addProfile:(id)arg1 ;
-(id)_resourceQueue_createProfileOfType:(long long)arg1 name:(id)arg2 error:(id*)arg3 ;
-(BOOL)_resourceQueue_deleteProfile:(id)arg1 error:(id*)arg2 ;
-(void)_resourceQueue_invalidateAndWait;
-(id)_profileIdentifierForDirectoryName:(id)arg1 error:(id*)arg2 ;
-(id)newProfileOfType:(long long)arg1 profileIdentifier:(id)arg2 daemon:(id)arg3 directoryPath:(id)arg4 ;
-(id)_directoryURLForProfileIdentifier:(id)arg1 ;
-(id)_directoryNameForProfileIdentifier:(id)arg1 ;
-(id)profileIdentifierForUUID:(id)arg1 ;
-(void)reloadSecondaryProfiles;
@end

