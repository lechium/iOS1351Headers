/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IDSCloudKitContainer, ENGroupContext, ENAccountIdentity;

@interface IDSGroupContextControllerContent : NSObject {

	IDSCloudKitContainer* _cloudKitContainer;
	ENGroupContext* _groupContext;
	ENAccountIdentity* _accountIdentity;

}

@property (nonatomic,retain) IDSCloudKitContainer * cloudKitContainer;              //@synthesize cloudKitContainer=_cloudKitContainer - In the implementation block
@property (nonatomic,retain) ENGroupContext * groupContext;                         //@synthesize groupContext=_groupContext - In the implementation block
@property (nonatomic,retain) ENAccountIdentity * accountIdentity;                   //@synthesize accountIdentity=_accountIdentity - In the implementation block
-(ENGroupContext *)groupContext;
-(IDSCloudKitContainer *)cloudKitContainer;
-(ENAccountIdentity *)accountIdentity;
-(void)setGroupContext:(ENGroupContext *)arg1 ;
-(void)setAccountIdentity:(ENAccountIdentity *)arg1 ;
-(void)setCloudKitContainer:(IDSCloudKitContainer *)arg1 ;
@end
