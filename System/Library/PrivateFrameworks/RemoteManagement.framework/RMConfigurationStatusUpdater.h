/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RMConfigurationStatusUpdater : NSObject
+(id)fileSystemSafeCharacterSet;
+(id)getStatusDirectoryURLForChannel:(id)arg1 declarationType:(id)arg2 declarationIdentifier:(id)arg3 serverToken:(id)arg4 ;
-(void)assetCannotBeDownloaded:(id)arg1 error:(id)arg2 ;
-(void)assetSuccessfullyResolved:(id)arg1 ;
-(void)assetCannotBeVerified:(id)arg1 error:(id)arg2 ;
-(void)assetEncounteredInternalError:(id)arg1 error:(id)arg2 ;
-(void)_persistStatusForChannel:(id)arg1 declarationType:(id)arg2 declarationIdentifier:(id)arg3 serverToken:(id)arg4 validity:(BOOL)arg5 reasons:(id)arg6 ;
-(id)_getStatusFileURLForChannel:(id)arg1 declarationType:(id)arg2 declarationIdentifier:(id)arg3 serverToken:(id)arg4 ;
-(void)assetCannotBeDeserialized:(id)arg1 error:(id)arg2 ;
-(void)configurationCannotBeDeserialized:(id)arg1 error:(id)arg2 ;
-(void)configurationFailedToApply:(id)arg1 error:(id)arg2 ;
-(void)configurationIsInvalid:(id)arg1 error:(id)arg2 ;
-(void)configurationSuccessfullyApplied:(id)arg1 ;
@end

