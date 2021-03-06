/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSOperationQueue;

@interface HMDMPCSessionController : HMFObject {

	NSOperationQueue* _speakerGroupCommandOperationQueue;

}

@property (nonatomic,readonly) NSOperationQueue * speakerGroupCommandOperationQueue;              //@synthesize speakerGroupCommandOperationQueue=_speakerGroupCommandOperationQueue - In the implementation block
-(id)init;
-(void)executeSessionWithSessionData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSOperationQueue *)speakerGroupCommandOperationQueue;
@end

