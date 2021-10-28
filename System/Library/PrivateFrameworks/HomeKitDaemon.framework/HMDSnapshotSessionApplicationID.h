/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDCameraSnapshotSessionID, NSString;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying> {

	HMDCameraSnapshotSessionID* _sessionID;
	NSString* _applicationIdentifier;

}

@property (nonatomic,readonly) HMDCameraSnapshotSessionID * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationIdentifier;
-(HMDCameraSnapshotSessionID *)sessionID;
-(id)initWithSessionID:(id)arg1 applicationIdentifier:(id)arg2 ;
@end
