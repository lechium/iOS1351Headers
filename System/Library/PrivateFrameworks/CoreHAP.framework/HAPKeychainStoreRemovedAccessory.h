/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString, NSDate, NSError;

@interface HAPKeychainStoreRemovedAccessory : HMFObject {

	NSString* _accessoryName;
	NSDate* _creationDate;
	NSError* _removeError;

}

@property (nonatomic,readonly) NSString * accessoryName;              //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSError * removeError;                   //@synthesize removeError=_removeError - In the implementation block
-(id)description;
-(NSDate *)creationDate;
-(NSString *)accessoryName;
-(NSError *)removeError;
-(id)initWithName:(id)arg1 creationDate:(id)arg2 ;
-(void)setRemoveError:(NSError *)arg1 ;
@end
