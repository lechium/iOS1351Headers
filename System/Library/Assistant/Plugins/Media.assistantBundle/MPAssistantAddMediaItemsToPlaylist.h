/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAMPAddMediaItemsToPlaylist.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString, ICUserIdentity, MPCloudController;

@interface MPAssistantAddMediaItemsToPlaylist : SAMPAddMediaItemsToPlaylist <AFServiceCommand> {

	NSString* _requestAceHash;
	ICUserIdentity* _userIdentity;
	MPCloudController* _cloudController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_notifyAssistantWithString:(id)arg1 requestHash:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_notifyAssistantWithError:(id)arg1 requestHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)_appendToPlaylistWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isSagaAuthenticated;
-(void)_addItemsToCloudLibrary:(/*^block*/id)arg1 ;
-(void)_addItemsToLocalLibrary:(/*^block*/id)arg1 ;
-(void)_appendItemToCloudPlaylist:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_appendItemsToCloudPlaylist:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_prependItemsToCloudPlaylist:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

