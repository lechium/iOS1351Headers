/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSError;

@interface NSCloudKitMirroringDelegateResetRequest : NSCloudKitMirroringRequest {

	NSError* _causedByError;

}

@property (nonatomic,readonly) NSError * causedByError;              //@synthesize causedByError=_causedByError - In the implementation block
-(void)dealloc;
-(id)initWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSError *)causedByError;
@end

