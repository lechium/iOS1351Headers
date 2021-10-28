/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject {

	NSMutableDictionary* _flowControlledOperationKeys;

}

@property (readonly) NSMutableDictionary * flowControlledOperationKeys;              //@synthesize flowControlledOperationKeys=_flowControlledOperationKeys - In the implementation block
-(id)init;
-(id)CKStatusReportArray;
-(void)unlimitAllOperations;
-(NSMutableDictionary *)flowControlledOperationKeys;
-(BOOL)isOperationLimited:(id)arg1 outLimitError:(id*)arg2 ;
-(double)secondsUntilUnlimited:(id)arg1 ;
-(void)limitOperation:(id)arg1 retryAfter:(id)arg2 error:(id)arg3 ;
@end
