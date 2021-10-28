/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBSRemoteAlertHandleClient <NSObject>
@required
-(id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(BOOL)arg2 configurationContext:(id)arg3;
-(id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
-(void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;
-(void)invalidateRemoteAlertHandle:(id)arg1;

@end
