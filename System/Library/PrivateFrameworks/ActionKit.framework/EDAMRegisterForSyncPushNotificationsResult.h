/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSData;

@interface EDAMRegisterForSyncPushNotificationsResult : FATObject {

	NSData* _sharedSecret;

}

@property (nonatomic,retain) NSData * sharedSecret;              //@synthesize sharedSecret=_sharedSecret - In the implementation block
+(id)structName;
+(id)structFields;
-(NSData *)sharedSecret;
-(void)setSharedSecret:(NSData *)arg1 ;
@end
