/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)safe_domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3 ;
-(void)safe_domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
-(void)safe_domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2 ;
-(void)safe_domStorageItemsClearedWithStorageId:(id)arg1 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)domStorageItemsClearedWithStorageId:(id)arg1 ;
-(void)domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2 ;
-(void)domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3 ;
-(void)domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
@end
