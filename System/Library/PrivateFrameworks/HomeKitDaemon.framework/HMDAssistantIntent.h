/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, INControlHomeIntent, NSString;

@interface HMDAssistantIntent : NSObject <HMFLogging> {

	NSArray* _homeKitObjects;
	INControlHomeIntent* _intent;

}

@property (nonatomic,retain) NSArray * homeKitObjects;                  //@synthesize homeKitObjects=_homeKitObjects - In the implementation block
@property (nonatomic,retain) INControlHomeIntent * intent;              //@synthesize intent=_intent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(INControlHomeIntent *)intent;
-(void)setIntent:(INControlHomeIntent *)arg1 ;
-(id)initWithIntent:(id)arg1 ;
-(NSArray *)homeKitObjects;
-(void)setHomeKitObjects:(NSArray *)arg1 ;
-(void)_handleIntentRequestMessage:(id)arg1 ;
-(id)_getObjectsWithUUID;
-(void)_handleActionSetForConfirmation:(id)arg1 message:(id)arg2 ;
-(void)_handleActionSetForExecution:(id)arg1 message:(id)arg2 ;
-(void)performWithGather:(id)arg1 message:(id)arg2 ;
@end
