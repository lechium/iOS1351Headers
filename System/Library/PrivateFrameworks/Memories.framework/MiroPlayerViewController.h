/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol MemoryOwner;
@interface MiroPlayerViewController : UIViewController {

	id<MemoryOwner> _memoryOwnerDelegate;

}

@property (nonatomic,retain) id<MemoryOwner> memoryOwnerDelegate;              //@synthesize memoryOwnerDelegate=_memoryOwnerDelegate - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(void)warnTooManyLiveCompositors:(id)arg1 ;
-(id<MemoryOwner>)memoryOwnerDelegate;
-(void)setMemoryOwnerDelegate:(id<MemoryOwner>)arg1 ;
@end
