/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/WFStorageServiceAction.h>

@protocol WFFileStorageServiceOperation;
@interface WFSaveFileAction : WFStorageServiceAction {

	id<WFFileStorageServiceOperation> _saveOperation;

}

@property (nonatomic,retain) id<WFFileStorageServiceOperation> saveOperation;              //@synthesize saveOperation=_saveOperation - In the implementation block
-(void)cancel;
-(void)finishRunningWithError:(id)arg1 ;
-(id)targetDataInfo;
-(BOOL)inputsMultipleItems;
-(BOOL)outputsMultipleItems;
-(void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2 ;
-(id)filePathKey;
-(id)showPickerKey;
-(id<WFFileStorageServiceOperation>)saveOperation;
-(void)setSaveOperation:(id<WFFileStorageServiceOperation>)arg1 ;
@end
