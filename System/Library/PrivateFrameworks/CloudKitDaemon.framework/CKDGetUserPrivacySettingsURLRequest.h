/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDPUserPrivacySettings;

@interface CKDGetUserPrivacySettingsURLRequest : CKDURLRequest {

	CKDPUserPrivacySettings* _userPrivacySettings;

}

@property (nonatomic,retain) CKDPUserPrivacySettings * userPrivacySettings;              //@synthesize userPrivacySettings=_userPrivacySettings - In the implementation block
-(int)operationType;
-(long long)databaseScope;
-(void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg1 ;
-(CKDPUserPrivacySettings *)userPrivacySettings;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
@end

