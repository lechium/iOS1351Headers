/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable;

@interface CKAsyncTransactionGroup : NSObject {

	NSHashTable* _containerLayers;

}
+(id)mainTransactionGroup;
+(void)registerTransactionGroupAsMainRunloopObserver:(id)arg1 ;
-(id)init;
-(void)commit;
-(void)addTransactionContainer:(id)arg1 ;
@end
