/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ENGroupID;

@interface IDSCloudKitKeyElectionStoreItem : NSObject {

	NSString* _groupName;
	ENGroupID* _groupID;

}

@property (nonatomic,retain) NSString * groupName;              //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) ENGroupID * groupID;               //@synthesize groupID=_groupID - In the implementation block
-(id)description;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(ENGroupID *)groupID;
-(void)setGroupID:(ENGroupID *)arg1 ;
@end

