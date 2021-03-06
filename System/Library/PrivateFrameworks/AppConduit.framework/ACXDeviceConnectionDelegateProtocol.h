/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACXDeviceConnectionDelegateProtocol <NSObject>
@required
-(void)updatedInstallStateForApplicationsWithInfo:(id)arg1;
-(void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
-(void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;

@end

