/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMUser, CKShare, CKContainer, NSString;

@interface HMUserCloudShareWithOwnerOperation : NSOperation <HMFLogging> {

	/*^block*/id _completion;
	HMUser* _currentUser;
	HMUser* _ownerUser;
	CKShare* _share;
	CKContainer* _container;

}

@property (readonly) HMUser * currentUser;                          //@synthesize currentUser=_currentUser - In the implementation block
@property (readonly) HMUser * ownerUser;                            //@synthesize ownerUser=_ownerUser - In the implementation block
@property (retain) CKShare * share;                                 //@synthesize share=_share - In the implementation block
@property (readonly) CKContainer * container;                       //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(CKContainer *)container;
-(void)main;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(HMUser *)currentUser;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(id)logIdentifier;
-(HMUser *)ownerUser;
-(id)initWithShare:(id)arg1 container:(id)arg2 ownerUser:(id)arg3 currentUser:(id)arg4 ;
-(void)sendShareToOwner:(id)arg1 from:(id)arg2 savedOwnerAsParticipant:(id)arg3 share:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)saveShareAndObtainSavedOwner:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeOwnerAsParticipant:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchParticipantForLookupInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

