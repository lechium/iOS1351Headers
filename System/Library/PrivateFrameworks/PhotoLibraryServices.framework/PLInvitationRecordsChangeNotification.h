/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {

	BOOL _invitationRecordsDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) PLGenericAlbum * album; 
@property (nonatomic,readonly) BOOL invitationRecordsDidChange; 
+(id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2 ;
-(id)name;
-(id)userInfo;
-(PLGenericAlbum *)album;
-(void)_calculateDiffs;
-(BOOL)invitationRecordsDidChange;
@end
