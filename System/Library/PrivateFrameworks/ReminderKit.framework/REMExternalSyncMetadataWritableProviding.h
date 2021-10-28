/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol REMExternalSyncMetadataWritableProviding
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
@required
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1;
-(NSString *)daSyncToken;
-(void)setDaSyncToken:(id)arg1;
-(NSString *)daPushKey;
-(void)setDaPushKey:(id)arg1;

@end
